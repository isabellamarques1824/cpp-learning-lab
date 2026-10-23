#include <iostream>
#include "bool.hpp"


namespace Forca {
    void fim_de_jogo(std::string palavra_secreta, const std::map<char, bool>& chutou) {
        std::cout << "Fim de jogo" << std::endl;
        std::cout << "A palavra secreta era " << palavra_secreta << std::endl;
        if (Forca::nao_acertou(palavra_secreta, chutou)) {
            std::cout << "vc perdeu otario" << std::endl;
        }
        else {
            std::cout << "parabens" << std::endl;
        }
    }
}