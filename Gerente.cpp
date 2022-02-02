#include <iostream>
#include "Gerente.hpp"


void Gerente::print(){
    std::cout << "[Funcionario]" << std::endl
    << "[Gerente]" << std::endl
    << "  Nome: " << nome << std::endl
    << "  Idade: " << idade << std::endl
    << "  RGFunc: " << rg_funcionario << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salario_base << std::endl;
    }

double Gerente::calcula_bonificacao_gerente(int num_total_vendas){
    return num_total_vendas * VALOR_BONIFICACAO;
}
    
