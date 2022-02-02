#include <iostream>
#include "Funcionario.hpp"


void Funcionario::print(){
    std::cout << "[Funcionario]" << std::endl;
    std::cout << "  Idade: " << idade << std::endl;
    std::cout << "  RGFunc: " << rg_funcionario << std::endl;
}
