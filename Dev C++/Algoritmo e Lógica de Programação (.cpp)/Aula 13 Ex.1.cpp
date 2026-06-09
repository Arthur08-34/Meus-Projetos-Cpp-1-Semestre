/*1) Construir um programa que calcula o cubo de um número inteiro. O cálculo do
cubo será feito utilizando-se uma função e esta deverá retornar o valor calculado.*/
#include <iostream>
using namespace std;
int cubo(int a)
{
    int soma;
    soma = a * a * a;
    return soma;
}
main()
{
    int num;
    cout << "Digite o numero desejado: " << endl;
    cin >> num;
    cout << "O cubo do numero digitado e: " << cubo(num) << endl;
}