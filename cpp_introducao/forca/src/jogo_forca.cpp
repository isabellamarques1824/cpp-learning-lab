#include "bool.hpp"
#include "imprimir.hpp"
#include "interacoes.hpp"
#include "arquivos.hpp"
#include "jogo.hpp"


std::string palavra_secreta;
std::map<char, bool> chutou;
std::vector<char> chutes_errados;

int main(){

    iniciar();
    le_arquivo();
    sortear();

    while(nao_acertou() && nao_enforcou()){

        imprimir_chutes_errados();

        imprimir_palavra_secreta();

        chutar();
    }

    fim_de_jogo();

    if(nao_acertou){
        std::cout<<"Vc errrouuu, tchauu\n";
    }
    else{
        std::cout << "add nova palavra? (S/N) ";
        char resposta;
        std::cin >> resposta;
        if(resposta == 'S' || resposta == 's'){
            adiciona_palavra();
        }
        else{
            std::cout << "Ok, tchauuu" << std::endl;
        }
    }
} 