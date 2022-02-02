#ifndef Especialista_HPP
#define Especialista_HPP

#include "Funcionario.hpp"
#include "Cliente.hpp"


const int PERC_COMISSAO = 0.1;

class Especialista : public Funcionario {


    public:
        std::string especialidade;
        double comissao(double valor_venda);
        void print();



};
#endif