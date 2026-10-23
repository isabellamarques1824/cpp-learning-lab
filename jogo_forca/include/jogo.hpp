#pragma once


namespace Forca {
    inline void iniciar() {
        std::cout << "*******************************" << std::endl;
        std::cout << "***      JOGO DA FORCA      ***" << std::endl;
        std::cout << "*******************************" << std::endl;
    }

    void fim_de_jogo(std::string palavra_secreta, const std::map<char, bool>& chutou);
}