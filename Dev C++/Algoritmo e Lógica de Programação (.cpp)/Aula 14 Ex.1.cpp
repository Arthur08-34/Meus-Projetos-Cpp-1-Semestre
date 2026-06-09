/*1) Faça um programa que leia dois valores inteiros e chame uma função que receba estes 2 valores de
entrada e retorne o maior valor na primeira variável e o segundo maior valor na segunda variável.
Escreva o conteúdo das 2 variáveis na tela.*/
#include <iostream>
#include <cmath>
using namespace std;
int maior (int a, int b)
{
    int maiorAB = 0;
    maiorAB = ((a + b) + abs(a - b)) / 2;
    return maiorAB;
    
}
int menor (int a, int b)
{
    int menorAB = 0;
    menorAB = ((a + b) - abs(a - b)) / 2;
    return menorAB;
}
int main()
{
    int x1, x2;
    cout << "Digite os dois valores: " << endl;
    cin >> x1 >> x2;
    cout << "O maior numero eh: " << maior(x1,x2) << endl;
    cout << "O menor numero eh: " << menor(x1,x2) << endl;

}