/*
 Uma loja utiliza o código V para transação a vista e P para transação a prazo. Faça um
programa que receba o código e o valor de 15 transações, calcule e mostre:
 o valor total das compras à vista;
 o valor total das compras a prazo;
 o valor total das compras efetuadas;*/
#include <iostream>
using namespace std;
main()
{
    float vista = 0, prazo = 0, total = 0, valor;
    int i;
    string codigo, V, P;
    for (i=1; i <= 15; i++)
    {
        cout << "Digite o codigo (V para a vista e P para a prazo): " << endl;
        cin >> codigo;
        cout << "Digite o valor da compra: " << endl;
        cin >> valor;
    if (codigo == "V")
    {
        vista = vista + valor;
    }
    else if (codigo == "P")
    {
        prazo = prazo + valor;
    }
    else
    {
        cout << "Codigo invalido!" << endl;
        i--;
    }
    total = total + valor;
    }
    cout << "Total a vista: " << vista << endl;
    cout << "Total a prazo: " << prazo << endl;
    cout << "Total geral: " << total << endl;
}