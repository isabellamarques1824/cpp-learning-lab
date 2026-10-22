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
    palavra_secreta = sortear();

    while(nao_acertou(palavra_secreta, chutou) && chutes_errados.size() < 5){

        imprimir_chutes_errados(chutes_errados);

        imprimir_palavra_secreta(palavra_secreta, chutou);

        chutar(&chutou, &chutes_errados);
    }

    if(nao_acertou()){
        std::cout<<"Vc errrouuu, tchauu\n";
    }
    else{
        fim_de_jogo();
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