#ifndef EMPREGADO_H_INCLUDED
#define EMPREGADO_H_INCLUDED

#include <string>

class Empregado
{
     public:
         std:: vector <Empregado> funcionarios;

            std::string nome, departamento;
            int salario = 0;
};


#endif // EMPREGADO_H_INCLUDED
