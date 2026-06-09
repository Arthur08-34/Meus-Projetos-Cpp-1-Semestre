/*3) Elabore um programa que calcula o maior de dois números dados. O cálculo do
maior número será feito utilizando-se uma função com parâmetros e retornará o
maior valor.*/
#include <iostream>
#include <cmath>
using namespace std;
float maior(float A, float B)
{
    float maiorAB;
    maiorAB = ((A + B) + abs(A - B)) / 2;
    return maiorAB;
}
main ()
{
    float n1, n2;
    cout << "Digite os numeros para saber qual e maior: " << endl;
    cin >> n1 >> n2;
    cout << "O maior numero e: " << maior(n1,n2) << endl;
}