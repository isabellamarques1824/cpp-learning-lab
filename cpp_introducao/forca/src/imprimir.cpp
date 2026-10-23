
#include "imprimir.hpp"


namespace Forca {
    void imprimir_chutes_errados(const std::array<char, 5>& chutes_errados) {
        // Correção: Faltavam as aspas duplas na string
        std::cout << "Chutes errados: ";

        for (char letra : chutes_errados) {
            // Correção: Faltavam as aspas no espaço em branco
            std::cout << letra << " ";
        }
        std::cout << std::endl;
    }

    void imprimir_palavra_secreta(const std::string& palavra_secreta, const std::map<char, bool>& chutou) {
        for (char letra : palavra_secreta) {

            // Lógica Corrigida: 
            // Se a letra FOI encontrada no mapa E o valor for 'true' (o usuário já chutou essa letra)
            if (chutou.find(letra) != chutou.end() && chutou.at(letra)) {
                std::cout << letra << " ";
            }
            // Se não chutou ou não encontrou, exibe o traço "_"
            else {
                std::cout << "_ ";
            }
        }
        std::cout << std::endl << std::endl;
    }
}