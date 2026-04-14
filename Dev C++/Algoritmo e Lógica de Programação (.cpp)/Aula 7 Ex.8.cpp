#include <iostream>
using namespace std;
main()
{
    float VALOR, RESULTADO;
    string NOME;
    cout << "Insira o seu nome e o valor da compra para informarmos o desconto:" << endl;
    getline(cin, NOME);
    cin >> VALOR;
    if ( VALOR < 50)
    {
        RESULTADO = VALOR - (VALOR * 10/100);
        cout << "Voce recebeu um desconto de 10%!" << endl << "Voce ira pagar:" << endl << RESULTADO;
    }
    else if ( VALOR > 50 && VALOR < 100)
    {
         RESULTADO = VALOR - (VALOR * 15/100);
        cout << "Voce recebeu um desconto de 15%!" << endl << "Voce ira pagar:" << endl << RESULTADO;
    }
    else if ( VALOR >= 100)
    {
         RESULTADO = VALOR - (VALOR * 20/100);
        cout << "Voce recebeu um desconto de 20%!" << endl << "Voce ira pagar:" << endl << RESULTADO;
    }
    return 0;
}