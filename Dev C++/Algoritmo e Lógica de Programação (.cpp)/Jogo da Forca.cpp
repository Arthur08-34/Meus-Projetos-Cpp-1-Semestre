#include <iostream>
#include <string>

using namespace std;

int main() {
    string palavra = "soulindao";
    string descoberta(palavra.length(), '_');
    char letra;
    int tentativas = 6;
    bool acertou;

    cout << "===== JOGO DA FORCA =====" << endl;

    while (tentativas > 0 && descoberta != palavra) {
        cout << "\nPalavra: " << descoberta << endl;
        cout << "Tentativas restantes: " << tentativas << endl;
        cout << "Digite uma letra: ";
        cin >> letra;

        acertou = false;

        for (int i = 0; i < palavra.length(); i++) {
            if (palavra[i] == letra && descoberta[i] == '_') {
                descoberta[i] = letra;
                acertou = true;
            }
        }

        if (!acertou) {
            tentativas--;
            cout << "Letra incorreta!" << endl;
        } else {
            cout << "Boa! Letra correta." << endl;
        }
    }

    if (descoberta == palavra) {
        cout << "\nParabens! Voce descobriu a palavra: " << palavra << endl;
    } else {
        cout << "\nVoce perdeu! A palavra era: " << palavra << endl;
    }

    return 0;
}
