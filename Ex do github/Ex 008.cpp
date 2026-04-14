#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char const *argv[])
{
    float HORAS, VALOR, TOTAL;
    cout << fixed;
    cout << "Digite o valor das horas trabalhas:" << endl;
    cin >> HORAS;
    cout << "Digite o nuumero de horas trabalhadas no mes:" << endl;
    cin >> VALOR;
    TOTAL = HORAS * VALOR;
    cout << setprecision(2) << "Seu salario e R$ " << TOTAL << endl;
    return 0;
}
