#include <iostream>
#include <vector>
#include <iomanip>

#include "casa.h"

using namespace std;

int main() {
    vector<Casa> casas;
    string continuarCasa = "y";
    string continuarDivisao = "y";

    while (continuarCasa== "y") // casa
        {
            Casa novaCasa;


                while (continuarDivisao== "y") //Divisao
                    {
                        Divisao novaDiv;
                        cout<<endl;
                        cout<< "Divisao" << novaCasa.numDiv;
                        cout << ":\n Insira largura:" << endl;
                        cin >> novaDiv.larg;
                        cout << "Insira ocomprimento:" << endl;
                        cin >>novaDiv.comp;
                        cin.ignore();

                    novaCasa.adicionarDivisao(novaDiv);
                    cout << "Prentende uma nova divisao ?(y/n)" << endl;
                    cin >> continuarDivisao;
                    }
                continuarDivisao = "y";
                casas.push_back(novaCasa);
                    cout << "Prentende uma nova casa ?(y/n)" << endl;
                    cin >> continuarCasa;
        }
        double totalDiv = 0;
        double mediaDiv =0;
        double mediaDivTotal= 0;
        double areaTotalQuarteirao =0;
        for (int i =0; i< casas.size(); i++)
        {
            //cout << "total de casas"<< casas.size() <<endl;

            // cout << "numero de divisoes: "<<casas[i].numDiv<<endl;
            totalDiv += casas[i].numDiv; // divisoes totais

           // cout << " media area da divisoes: "<< casas[i].media()<< endl;
           mediaDiv += casas[i].media();
           mediaDivTotal += mediaDiv/totalDiv;

            //cout << "Area total da casa:  "<<casas[i].areaTotal()<<endl;
            areaTotalQuarteirao += casas[i].areaTotal();


        }
        cout<<" Relatorio do quarteirao"<< endl;
        cout<< "Total de Casas: "<<casas.size()<<endl;
        cout<< "Total de divisoes: "<<totalDiv<< endl;
        cout<< "Area media das Divisoes: "<<setprecision(2)<<mediaDivTotal<<endl;
        cout << "Area total do quarteirao:"<<areaTotalQuarteirao<<endl;
    }
