#include <iostream>
#include "bool.hpp"

extern std::string palavra_secreta;

void fim_de_jogo(){
    std::cout << "Fim de jogo" << std::endl;
    std::cout << "A palavra secreta era " << palavra_secreta << std::endl;
    if(nao_acertou()){
        std::cout << "vc perdeu otario" << std::endl;
    }
    else{
        std::cout << "parabens" << std::endl;
    }
}