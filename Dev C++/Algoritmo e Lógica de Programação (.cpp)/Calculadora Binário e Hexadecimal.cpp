#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// Função para converter binário para decimal
int binarioParaDecimal(string bin) {
    int decimal = 0;
    int tamanho = bin.length();

    for (int i = 0; i < tamanho; i++) {
        if (bin[i] == '1') {
            decimal += pow(2, tamanho - i - 1);
        }
    }

    return decimal;
}

// Função para converter hexadecimal para decimal
int hexadecimalParaDecimal(string hex) {
    int decimal = 0;
    int tamanho = hex.length();

    for (int i = 0; i < tamanho; i++) {
        char c = hex[i];
        int valor;

        if (c >= '0' && c <= '9') {
            valor = c - '0';
        } else if (c >= 'A' && c <= 'F') {
            valor = c - 'A' + 10;
        } else if (c >= 'a' && c <= 'f') {
            valor = c - 'a' + 10;
        }
        decimal += valor * pow(16, tamanho - i - 1);
    }

    return decimal;
}

int main() {
    int opcao;
    string numero;

    cout << "Escolha a conversao:\n";
    cout << "1 - Binario para Decimal\n";
    cout << "2 - Hexadecimal para Decimal\n";
    cout << "opcao: ";
    cin >> opcao;

    cout << "Digite o numero: ";
    cin >> numero;

    if (opcao == 1) {
        cout << "Decimal: " << binarioParaDecimal(numero) << endl;
    } else if (opcao == 2) {
        cout << "Decimal: " << hexadecimalParaDecimal(numero) << endl;
    } else {
        cout << "Opcao invalida!" << endl;
    }

    return 0;
}
