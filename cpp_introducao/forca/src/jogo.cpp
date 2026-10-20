#include <iostream>
#include "bool.hpp"

extern std::string palavra_secreta;

void iniciar(){
    std::cout << "*******************************" << std::endl;
    std::cout << "***      JOGO DA FORCA      ***" << std::endl;
    std::cout << "*******************************" << std::endl;
}


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