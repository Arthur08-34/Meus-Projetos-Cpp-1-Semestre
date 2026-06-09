/*2) Faça uma função que receba 4 notas e retorne a média*/
#include <iostream>
using namespace std;
float media (float n1, float n2, float n3, float n4)
{
    float media = 0;
    media = (n1 + n2 + n3 + n4) / 4;
    return  media;
}
main ()
{
    float nota1, nota2, nota3, nota4, resultado = 0;
    cout << "Digite as 4 notas: " << endl;
    cin >> nota1 >> nota2 >> nota3 >> nota4;
    resultado = media(nota1, nota2, nota3, nota4);
    cout << "A media das notas e: " << resultado << endl;
}