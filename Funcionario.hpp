#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <iostream>
#include <iomanip>


class Funcionario {
    public:
        double salario_base; 
        std::string idade;
        std::string nome;
        int rg_funcionario;

        void print();


};

#endif