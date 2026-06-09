/*2) Faça um programa que receba uma frase, calcule e mostre a quantidade de 
palavras da frase digitada.*/
#include <iostream>
using namespace std;
main()
{
    string fraseCompleta;
    int i, palavra = 0;
    cout << "Digite sua frase: " << endl;
    getline(cin,fraseCompleta);
    for(i=0;i<fraseCompleta.size();i++)
    {
        if (fraseCompleta[i] == ' ')
        {
            palavra++;
        }
    }
    cout << "Tem " << palavra + 1 << " palavras na sua frase." << endl;
}