#include <iostream>
using namespace std;
main()
{
    string nomes[5][2];
    int l, c;
    for (l=0; l<5; l++)
    {
        for (c=0; c<2; c++)
        {
            cout << "Digite um nome: " << endl;
            cin >> nomes[l][c];
        }
    }
    cout << "Os nomes digitados foram: "<< endl;
    for (l=0;l<5;l++)
    {
        for(c=0;c<2;c++)
        {
            cout << nomes[l][c] << "   ";
        }
        cout << endl; 
    }
}
