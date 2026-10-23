#include "arquivos.hpp"

namespace Forca {
    void salva_arquivo(std::vector<std::string> nova_lista) {
        std::ofstream arquivo;
        arquivo.open("palavras.txt");

        if (arquivo.is_open()) {
            arquivo << nova_lista.size();
            for (std::string palavra : nova_lista) {
                arquivo << palavra << std::endl;
            }
            arquivo.close();
        }
        else {
            std::cout << "erro" << std::endl;
            exit(0);
        }
    }

    std::vector<std::string> le_arquivo() {
        std::ifstream arquivo;
        arquivo.open("palavras.txt");

        if (arquivo.is_open()) {
            int quantidade_palavras;

            arquivo >> quantidade_palavras;

            std::vector<std::string> palavras;

            for (int i = 0; i < quantidade_palavras; i++) {
                std::string palavra_lida;

                arquivo >> palavra_lida;

                palavras.push_back(palavra_lida);
            }

            arquivo.close();
            return palavras;

        }
        else {
            std::cout << "erro" << std::endl;
            exit(0);
        }

    }
}