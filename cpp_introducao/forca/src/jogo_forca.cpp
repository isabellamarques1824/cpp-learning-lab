#include "bool.hpp"
#include "imprimir.hpp"
#include "interacoes.hpp"
#include "arquivos.hpp"
#include "jogo.hpp"


static std::string palavra_secreta;
static std::map<char, bool> chutou;
static std::array<char, 5> chutes_errados;
static int chutes_errados_count = 0;

int main(){

    Forca::iniciar();
    palavra_secreta = Forca::sortear();

    while(Forca::nao_acertou(palavra_secreta, chutou) && chutes_errados_count < 5){

        Forca::imprimir_chutes_errados(chutes_errados);

        Forca::imprimir_palavra_secreta(palavra_secreta, chutou);

        Forca::chutar(chutou, chutes_errados, chutes_errados_count, palavra_secreta);
    }

    if(Forca::nao_acertou(palavra_secreta, chutou)){
        std::cout<<"Vc errrouuu, tchauu\n";
    }
    else{
        Forca::fim_de_jogo(palavra_secreta, chutou);
        std::cout << "add nova palavra? (S/N) ";
        char resposta;
        std::cin >> resposta;
        if(resposta == 'S' || resposta == 's'){
            Forca:: adiciona_palavra();
        }
        else{
            std::cout << "Ok, tchauuu" << std::endl;
        }
    }
} 