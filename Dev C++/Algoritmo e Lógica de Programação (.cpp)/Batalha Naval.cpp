#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    const int TAM = 5;
    int tabuleiro[TAM][TAM] = {0};
    int linha, coluna;
    int tentativas = 10;
    int navios = 3;

    srand(time(0));

    // Posicionar navios aleatoriamente
    for(int i = 0; i < navios; i++){
        int l = rand() % TAM;
        int c = rand() % TAM;

        if(tabuleiro[l][c] == 0){
            tabuleiro[l][c] = 1;
        } else {
            i--;
        }
    }

    cout << "===== BATALHA NAVAL =====" << endl;
    cout << "Tabuleiro 5x5" << endl;
    cout << "Voce tem " << tentativas << " tentativas para achar " << navios << " navios.\n" << endl;

    while(tentativas > 0 && navios > 0){

        cout << "Digite linha (0-4): ";
        cin >> linha;

        cout << "Digite coluna (0-4): ";
        cin >> coluna;

        if(tabuleiro[linha][coluna] == 1){
            cout << "?? Acertou um navio!" << endl;
            tabuleiro[linha][coluna] = 2;
            navios--;
        }
        else if(tabuleiro[linha][coluna] == 0){
            cout << "?? Agua! Nenhum navio aqui." << endl;
            tabuleiro[linha][coluna] = -1;
        }
        else{
            cout << "Voce ja tentou aqui!" << endl;
        }

        tentativas--;

        cout << "Navios restantes: " << navios << endl;
        cout << "Tentativas restantes: " << tentativas << endl;
        cout << endl;
    }

    if(navios == 0){
        cout << "?? Parabens! Voce venceu!" << endl;
    }
    else{
        cout << "?? Fim de jogo! Voce perdeu." << endl;
    }

    return 0;
}
