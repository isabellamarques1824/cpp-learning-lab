#include "imprimir.hpp"

void imprimir_chutes_errados( const std::vector<char>& chutes_errados){
    std::cout << "Chutes errados: ";
        for(char letra: chutes_errados){
            std::cout << letra << " ";
        }
        std::cout << std::endl;
}

void imprimir_palavra_secreta(const std::string& palavra_secreta, const std::map<char, bool>& chutou) {
    for(char letra: palavra_secreta){
        if(chutou.find(letra) == chutou.end() || !chutou.at(letra)){
            std::cout << letra << " ";
        }else{
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
}