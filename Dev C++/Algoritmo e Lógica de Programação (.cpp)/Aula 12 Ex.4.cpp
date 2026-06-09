/*4) Seja a matriz inteira números (4x3). Preenchê-la por leitura, apresentar seus valores, bem
como o menor elemento de sua última linha.*/
#include <iostream>
using namespace std;
main()
{
    int valores[4][3], l, c, menor_elemento;
    for (l=0;l<4;l++)
    {
        for (c=0;c<3;c++)
        {
            cout << "Digite um numero: " << endl;
            cin >> valores[l][c];
        }
    }
    cout << "Matriz: " << endl;
    for (l=0;l<4;l++)
    {
        for (c=0;c<3;c++)
        {
            cout << valores[l][c] << "  ";
        }
        cout << endl;
    }
    menor_elemento = valores[3][0];
    for (c=1;c<2;c++)
    {
        if (valores[3][c] < menor_elemento)
        {
            menor_elemento = valores[3][c];
        }
    }
    cout << "Menor elemento da ultima linha e: " << endl << menor_elemento;
}