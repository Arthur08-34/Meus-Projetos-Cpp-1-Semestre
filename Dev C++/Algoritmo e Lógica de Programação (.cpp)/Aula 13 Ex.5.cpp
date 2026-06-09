/*5) Faça uma função que recebe um valor inteiro e verifica se o valor é positivo ou
negativo. A função deve retornar um valor string.
*/
#include <iostream>
#include <string>
using namespace std;
string numero(int a)
{
    string palavra;
    if (a > 0)
    {
        palavra = "Positivo";
    }
    else if (a < 0)
    {
        palavra = "Negativo";
    }
    else if ( a == 0)
    {
        palavra = "Nulo";
    }
    return palavra;
}
main ()
{
    int num;
    cout << "Digite o numero para saber se ele e positivo ou negativo: " << endl;
    cin >> num;
    cout << "O numero digitado e: " << numero(num) << endl;
}