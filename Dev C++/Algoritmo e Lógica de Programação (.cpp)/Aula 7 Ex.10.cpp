#include <iostream>
using namespace std;
main ()
{
    string NOME;
    int IDADE;
    cout << "Digite seu nome e sua idade:" << endl;
    getline(cin, NOME);
    cin >> IDADE;
    if ( IDADE < 12)
    {
        cout << NOME << " voce e considerado(a) Crianca, pois tem menos de 12 anos." << endl;
    }
    else if ( IDADE >= 12 && IDADE < 20)
    {
        cout << NOME << " voce e considerado(o) Adolescente, pois tem idade entre 12 e 20 anos." << endl;
    }
    else if ( IDADE >= 20)
    {
        cout << NOME << " voce e considerado(a) Adulto(a), pois tem idade entre 20 anos ou superior." << endl;
    }
}