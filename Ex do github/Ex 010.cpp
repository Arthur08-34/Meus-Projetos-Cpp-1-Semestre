#include <iostream>
#include <iomanip>
using namespace std;
main ()
{
    float C, F;
    cout << fixed;
    cout << "Digite a temperatura em Celsius:" << endl;
    cin >> C;
    F = (9/5) * C + 32;
    cout << setprecision(1) << "A temperatura em Farenheit e: " << F << endl;
}