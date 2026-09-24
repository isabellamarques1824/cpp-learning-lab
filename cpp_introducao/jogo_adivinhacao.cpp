#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    cout << "**************************************" << endl;
    cout << "* Bem-vindo ao jogo de adivinhação! *" << endl;
    cout << "**************************************" << endl;

    char dificuldade;
    int n_tentativas;

    cout << "escolha o nivel de dificuldade: " << endl;
    cout << "Facil (F), Medio (M) ou dificil (D)" << endl;
    cin >> dificuldade;

    switch (dificuldade)
    {
    case 'F':
        n_tentativas = 15;
        break;
    case 'M':
        n_tentativas = 10;
        break;
    case 'D':
        n_tentativas = 5;
        break;
    default:
        cout << "Escolha invalida!!" << endl; 
        return 1;
    }

    srand(time(NULL));
    const int NUMERO_SECRETO = rand() % 100;

    int chute;

    bool nao_acertou = true;

    int tentativas = 0;
    double pontos = 1000;

    for (tentativas = 1; tentativas <= n_tentativas; tentativas++)
    {
        cout << "Tentativa " << tentativas << endl;

        cout << "Qual o seu chute?" << endl;
        cin >> chute;

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0;
        pontos -= pontos_perdidos;

        bool acertou = chute == NUMERO_SECRETO;
        bool maior = chute > NUMERO_SECRETO;

        if(acertou){
            nao_acertou = false;
            break;
        }
        else if(maior){
            cout << "o seu chute foi maior que o numero secreto" << endl;
        }
        else{
            cout << "o seu chute foi menor que o numero secreto" << endl;
        }
    }

    cout << "fim de jogo!!!" << endl;

    if(nao_acertou){
        cout << "Voce perdeu ☝🏼" << endl;
    }
    else{
        cout << "Parabens vc acertou!" << endl;
        cout << "voce conseguiu com " << tentativas-1 << " tentativas" << endl;
        cout.precision(2);
        cout << fixed;
        cout << "sua pontuacao foi " << pontos << endl;
    }
     
}

