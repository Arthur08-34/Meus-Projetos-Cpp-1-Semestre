#include <iostream>
using namespace std;
main()
{
    int n1, n2, TOTAL, EQUA;
    cout << "Digite dois numeros:" << endl;
    cin >> n1;
    cin >> n2;
    cout << "Escolha a opcao desejada: 1 - Soma, 2 - Subtracao, 3 - Multiplicacao, 4 - Divisao" << endl;
    cin >> EQUA;
    switch (EQUA)
    {
    case 1: TOTAL = n1 + n2;
        break;
    case 2: TOTAL = n1 - n2;
        break;
    case 3: TOTAL = n1 * n2;
        break;
    case 4: TOTAL = n1 / n2;
        break;
    default: cout << "Equacao nao identificada";
        break;
    }
    cout << "O Resultado e " << TOTAL << endl;
}