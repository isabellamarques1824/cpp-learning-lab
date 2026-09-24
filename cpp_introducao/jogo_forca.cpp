#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

string palavra_secreta;
map<char, bool> chutou;
vector<char> chutes_errados;

bool letra_existe(char chute){

    for (char letra: palavra_secreta)
    {
        if(chute == letra){
            return true;

        }
    }

    return false;
    
}

bool nao_acertou(){
    for(char letra: palavra_secreta){
        if(!chutou[letra]){
            return true;
        }
    }
    return false;
}

bool nao_enforcou(){
    return chutes_errados.size() < 5;
}

void iniciar(){
    cout << "*******************************" << endl;
    cout << "***      JOGO DA FORCA      ***" << endl;
    cout << "*******************************" << endl;
}

void imprimir_chutes_errados(){
    cout << "Chutes errados: ";
        for(char letra: chutes_errados){
            cout << letra << " ";
        }
        cout << endl;
}

void imprimir_palavra_secreta(){
    for(char letra: palavra_secreta){
        if(chutou[letra]){
            cout << letra << " ";
        }else{
            cout << "_ ";
        }
    }
    cout << endl;
    cout << endl;
}

void chutar(){
    cout << "Seu chute: " << endl;
    char chute;
    cin >> chute;

    chutou[chute] = true;

    if(letra_existe(chute)){
        cout << "existe" << endl;
    }else{
        cout << "n existe" << endl;
        chutes_errados.push_back(chute);
    }
    cout << endl;
}

void fim_de_jogo(){
    cout << "Fim de jogo" << endl;
    cout << "A palavra secreta era " << palavra_secreta << endl;
    if(nao_acertou()){
        cout << "vc perdeu otario" << endl;
    }
    else{
        cout << "parabens" << endl;
    }
}

vector<string> le_arquivo(){
    ifstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){
        int quantidade_palavras;

        arquivo >> quantidade_palavras;

        vector<string> palavras;

        for(int i =0; i< quantidade_palavras; i++){
            string palavra_lida;

            arquivo >> palavra_lida;

            palavras.push_back(palavra_lida);
        }

        arquivo.close();
        return palavras;

    }else{
        cout << "erro" << endl;
        exit(0);
    }
    
}

void sortear(){
    vector<string> palavras = le_arquivo();

    srand(time(NULL));
    int indice_sorteado = rand() %palavras.size();

    palavra_secreta = palavras[indice_sorteado];
}

void salva_arquivo(vector<string> nova_lista){
    ofstream arquivo;
    arquivo.open("palavras.txt");

    if(arquivo.is_open()){
        arquivo << nova_lista.size();
        for(string palavra: nova_lista){
            arquivo << palavra << endl;
        }
        arquivo.close();
    }
    else{
        cout << "erro" << endl;
        exit(0);
    }
}

void adiciona_palavra(){
    cout << "digita ai: " << endl;
    string nova_palavra;
    cin >> nova_palavra;

    vector<string> lista = le_arquivo();
    lista.push_back(nova_palavra);

    salva_arquivo(lista);
}
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

    cout << "add nova palavra? (S/N) ";
    char resposta;
    cin >> resposta;
    if(resposta == 'S'){
        adiciona_palavra();
    }
    else{
        cout << "Ok, tchauuu" << endl;
    }
} 