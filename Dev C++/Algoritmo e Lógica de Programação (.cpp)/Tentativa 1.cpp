#include <iostream>
#include <iomanip>
using namespace std;
main() 
{
    string NOME;
    float SALARIO, VENDA, TOTAL;
    cout << fixed;
    cin >> NOME;
    cin >> SALARIO;
    cin >> VENDA;
    TOTAL = (0.15 * VENDA) + SALARIO;
    cout << setprecision(2) <<  "TOTAL = R$ " << TOTAL << endl;
}
