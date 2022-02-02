#ifndef GERENTE_HPP
#define GERENTE_HPP

#include <iostream>
#include <iomanip>


const double VALOR_BONIFICACAO = 15.0;

class Gerente {
    public:
        double salario_base; 
        std::string idade;
        std::string nome;
        int rg_funcionario;
        double bonificacao;


        void print();

        double calcula_bonificacao_gerente(int num_total_vendas);
        

};

#endif