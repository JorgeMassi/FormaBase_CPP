#ifndef CASA_H_INCLUDED
#define CASA_H_INCLUDED

#include <string>


class Divisao
{
     public:
            double comp, larg;
};
class Casa {
public:
    std::vector <Divisao> divisoes;

    double media();
    double areaTotal();
    int numDiv = 0;
    void adicionarDivisao(Divisao div);// objecto divisao como parametro
};

double Casa::media()
{
    double mediaSoma= 0;
    for (int i=0; i< divisoes.size(); i++)
    {
        mediaSoma += (divisoes[i].larg * divisoes[i].comp);
    }
    return mediaSoma/divisoes.size();
}

double Casa::areaTotal()
{
    double areaT = 0;
    for (int i=0; i< divisoes.size(); i++)
    {
        areaT += (divisoes[i].larg * divisoes[i].comp);
    }
    return areaT;
}

void Casa::adicionarDivisao(Divisao div)
{
    numDiv++;
    divisoes.push_back(div);

}

#endif // CASA_H_INCLUDED
