#include <iostream>
using namespace std;
main()
{
    int vet[10], i, qtdp, qtdn, qtdz;
    qtdp = qtdn = qtdz = 0;
    for (i = 0; i < 10; i++)
    {
        cout << "Digite um numero:" << endl;
        cin >> vet[i];
    }
    cout << "Lista dos numeros digitados:" << endl;
    for (i=0;i<10;i++)
    {
        cout << vet[i] << " " << endl;
    }
    for (i=0;i<10;i++)
    {
        if (vet[i]>0)
        {
            qtdp++;
        }
        else if (vet[i]<0)
        {
            qtdn++;
        }
        else
        {
            qtdz++;
        }
    }
    cout << "Quantidade de numeros positivos: " << qtdp << endl;
    cout << "Quantidade de numeros negativos: "<< qtdn << endl;
    cout << "Quantidade de 0: " << qtdz << endl;
}