#include <iostream>
#include <map>
#include <string>
#include <vector>
#include "empregado.h"

using namespace std;

int main() {
    vector<Empregado> funcionarios;
    string continuar= "y";

    while (continuar== "y")
        {
            Empregado depart;
            cout<<endl;
            cout << "Insira o nome do funcionario:" << endl;
            cin >> depart.nome;
            cout << "Insira o nome do departamento:" << endl;
            cin >> depart.departamento;
            cout << "Insira o salario do empregado:" << endl;
            cin>> depart.salario;
            cin.ignore();

            funcionarios.push_back(depart);
            cout << "Inserir outro empregado?(y/n)" << endl;
            cin >> continuar;
        }

        map<string, vector<Empregado>> departamentoOrdenado;


      for (Empregado &emp : funcionarios)
      {
          departamentoOrdenado[emp.departamento].push_back(emp);

      }
      for (const pair<string, vector<Empregado>>&dep:departamentoOrdenado)
      {
          string departamento = dep.first;//inicio do array
          int soma = 0;

          for (Empregado &emp:departamentoOrdenado[departamento])
          {
              //cout << emp.departamento<< emp.salario<<endl;
              soma += emp.salario;
          }

          cout << endl << departamento << " - " << soma << endl;
      }
}
