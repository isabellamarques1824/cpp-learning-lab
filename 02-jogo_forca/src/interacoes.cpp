#include "interacoes.hpp"


namespace Forca {
    void chutar(std::map<char, bool>& chutou, std::array<char, 5>& chutes_errados, int& chutes_errados_count, std::string palavra_secreta) {
        std::cout << "Seu chute: " << std::endl;
        char chute;
        std::cin >> chute;

        chutou[chute] = true;

        if (letra_existe(chute, palavra_secreta)) {
            std::cout << "existe" << std::endl;
        }
        else {
            std::cout << "n existe" << std::endl;
            chutes_errados[chutes_errados_count] = chute;
            chutes_errados_count++;
        }
        std::cout << std::endl;
    }


    std::string sortear() {
        std::vector<std::string> palavras = le_arquivo();

        srand(time(NULL));
        int indice_sorteado = rand() % palavras.size();

        return palavras[indice_sorteado];
    }

    void adiciona_palavra() {
        std::cout << "digita ai: " << std::endl;
        std::string nova_palavra;
        std::cin >> nova_palavra;

        std::vector<std::string> lista = le_arquivo();
        lista.push_back(nova_palavra);

        salva_arquivo(lista);
    }
}