#include <iostream>
#include <iomanip>
using namespace std;
main ()
{
    float C, F;
    cout << fixed;
    cout << "Digite a temperatura em Farenheit:" << endl;
    cin >> F;
    C = (5 * (F - 32) / 9);
    cout << setprecision(1) << "A temperatura em Celsius e " << C << endl;
}