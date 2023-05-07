#ifndef AKINATOR_H_INCLUDED
#define AKINATOR_H_INCLUDED

#include "Node.h"
#include <iostream>


class Akinator
{
private:

    Node* akinator;
    bool answer;
    string question;
    string path;

public:

    Akinator()
    {
        this->akinator = NULL;
    }

    void star()
    {
    Decision* ave = new Decision("AVE");
    Thought* aguia = new Thought("AGUIA");
    ave->setYes(aguia);

    Decision* repetil= new Decision("REPETIL");
    ave->setNo(repetil);

    Thought* leao= new Thought ("LEAO");
    repetil->setNo(leao);

    Decision* patas = new Decision ("PATAS");
    repetil->setYes(patas);
    Thought* lagartixa = new Thought("lagartixa");
    Thought* cobra = new Thought ("cobra");

    patas->setYes(lagartixa);
    patas->setNo (cobra);

    akinator = ave;
    }


    void guess()
    {
        bool game = true;

            cout<<endl;
            cout<<" ________________________________________"<< endl;
            cout<<" ________________AKINATOR_______________"<< endl;
            cout<<" ________________________________________"<< endl;
            cout<<endl;
            cout<<" SEJA BEM VINDO AO JOGO AKINATOR"<< endl;
            cout<<endl;
            cout<< "Para jogar tem de pensar num dos seguintes animais"<< endl;
            cout<< endl;
            cout<< "Aguia  ou  Lagartixa   ou  Leao  ou  Cobra"<< endl;
            cout<<endl;
            cout<< "Vamos fazer umas perguntar e advinhar o animal que pensas te!"<< endl;
            cout<<endl;
            cout<< " Basta dizeres SIM ou NAO" << endl;
        do
    {
            string resposta;
            string path;

            this->path += akinator->getElement() + "->";
            std::cout<<this->akinator->toString()<<endl;
            getline (cin, resposta);
            if (resposta == "sim")
            {
                akinator = akinator->getYes();
            }
            else
            {
                akinator= akinator->getNo();
            }
            if (akinator->tipo == "Thought")
                {
                    this->path += akinator->getElement() + "->";

                    game = false;
            cout<< "o animal que pensou e "<< akinator->getElement()<<endl;
            }


    }while ( game == true);
}

    void getDecisionPath()
    {
        cout<< "o caminho que tomamos foi:" << path << endl;
        cout <<endl;
        cout <<" OBRIGADO POR TER JOGADO AKINATOR"<< endl;
    }

};









#endif // AKINATOR_H_INCLUDED
