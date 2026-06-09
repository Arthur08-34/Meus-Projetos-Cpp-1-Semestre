/*4) Refaça o exercício anterior usando uma função que não retorna valor.*/
#include <iostream>
#include <cmath>
using namespace std;
void maior(float A, float B)
{
    float maiorAB;
    maiorAB = ((A + B) + abs(A - B)) / 2;
    cout << "O maior numero e: " << maiorAB << endl;
}
main ()
{
    float num1, num2;
    cout << "Digite os dois numeros para saber qual e o maior: " << endl;
    cin >> num1 >> num2;
    maior(num1, num2);
}