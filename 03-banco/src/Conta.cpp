#include <iostream>
#include "Conta.hpp"

void Conta::sacar(float valorASacar){
    if(valorASacar < 0 ){
        std::cout << "Nao pode sacar valor negativo\n";
        return;
    }
    if(valorASacar > saldo){
        std::cout << "Saldo insuficiente\n";
        return;
    }

    saldo -= valorASacar;
}

void Conta::depositar(float valorADepositar){
    if(valorADepositar < 0 ){
        std::cout << "Nao pode sacar valor negativo\n";
        return;
    }

    saldo += valorADepositar;
}