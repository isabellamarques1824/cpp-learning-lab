#include "interacoes.hpp"

extern std::string palavra_secreta;
extern std::map<char, bool> chutou;
extern std::vector<char> chutes_errados;

void chutar(){
    std::cout << "Seu chute: " << std::endl;
    char chute;
    std::cin >> chute;

    chutou[chute] = true;

    if(letra_existe(chute)){
        std::cout << "existe" << std::endl;
    }else{
        std::cout << "n existe" << std::endl;
        chutes_errados.push_back(chute);
    }
    std::cout << std::endl;
}


void sortear(){
    std::vector<std::string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() %palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}

void adiciona_palavra(){
    std::cout << "digita ai: " << std::endl;
    std::string nova_palavra;
    std::cin >> nova_palavra;

    std::vector<std::string> lista = le_arquivo();
    lista.push_back(nova_palavra);

    salva_arquivo(lista);
}