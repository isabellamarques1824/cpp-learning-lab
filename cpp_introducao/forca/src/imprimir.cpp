#include "imprimir.hpp"

extern std::string palavra_secreta;
extern std::map<char, bool> chutou;
extern std::vector<char> chutes_errados;

void imprimir_chutes_errados(){
    std::cout << "Chutes errados: ";
        for(char letra: chutes_errados){
            std::cout << letra << " ";
        }
        std::cout << std::endl;
}

void imprimir_palavra_secreta(){
    for(char letra: palavra_secreta){
        if(chutou[letra]){
            std::cout << letra << " ";
        }else{
            std::cout << "_ ";
        }
    }
    std::cout << std::endl;
    std::cout << std::endl;
}