/* 1) Seja a matriz inteira valores (4x4). Preenchê-la por leitura, apresentar seus valores, e a
quantidade de elementos maiores que 15.
*/
#include <iostream>
using namespace std;
main()
{
    int valores[4][4];
    int l, c, qtde = 0;
    for (l=0;l<4;l++)
    {
        for (c=0;c<4;c++)
        {
            cout << "Digite um numero: " << endl;
            cin >> valores[l][c];
            if (valores[l][c] > 15)
            {
                qtde++;
            }
        }
    }
    for (l=0;l<4;l++)
    {
        for (c=0;c<4;c++)
        {
            cout << valores[l][c] << "  ";
        }
        cout << endl;
    }
    cout << "O numero de elementos maiores que 15 sao: " << endl << qtde;
}