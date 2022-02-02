#include <iostream>
#include "Especialista.hpp"


double Especialista::comissao(double valor_venda){
    return valor_venda * PERC_COMISSAO;
}

void Especialista::print(){
    std::cout << "[Especialista]" << std::endl;
    Funcionario::print();



    std::cout << "  Nome: " << nome << std::endl
    << "  SalarioBase: R$ " << std::fixed << std::setprecision(2) << salario_base <<std::endl;

}
