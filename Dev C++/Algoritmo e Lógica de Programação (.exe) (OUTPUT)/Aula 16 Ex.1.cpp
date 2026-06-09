/*1) Faça um programa que receba uma frase, calcule e mostre a quantidade de vogais 
da frase digitada. O programa deverá contar vogais maiúsculas e minúsculas.*/
#include <iostream>
using namespace std;
main()
{
    int vogaisM = 0, vogaism = 0, i;
    string fraseCompleta;
    cout << "Digite sua frase: " << endl;
    getline(cin,fraseCompleta);
    for (i = 0; i<fraseCompleta.size(); i++)
    {
        if (fraseCompleta[i] == 'a')
        {
            vogaism++;
        }
        else if (fraseCompleta[i] == 'A')
        {
            vogaisM++;
        }
        else if (fraseCompleta[i] == 'e')
        {
            vogaism++;
        }
        else if (fraseCompleta[i] == 'E')
        {
            vogaisM++;
        }
        else if (fraseCompleta[i] == 'i')
        {
            vogaism++;
        }
        else if (fraseCompleta[i] == 'I')
        {
            vogaisM++;
        }
        else if (fraseCompleta[i] == 'o')
        {
            vogaism++;
        }
        else if (fraseCompleta[i] == 'O')
        {
            vogaisM++;
        }
        else if (fraseCompleta[i] == 'u')
        {
            vogaism++;
        }
        else if (fraseCompleta[i] == 'U')
        {
            vogaisM++;
        }
    }
    cout << "Vogais maiusculas tem: " << vogaisM << endl;
    cout << "Vogais minusculas tem: " << vogaism << endl;
}