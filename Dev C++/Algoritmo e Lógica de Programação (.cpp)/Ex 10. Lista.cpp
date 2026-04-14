#include <iostream>
#include <iomanip>
using namespace std;
main()
{
    int code, qtd;
    float valor;
    cout << fixed;
    cin >> code >> qtd;
    if(code == 1)
    {
        valor = qtd * 4;
        cout << setprecision(2) << "Total: R$ " << valor << endl;
    }
    else if(code == 2)
    {
        valor = qtd * 4.50;
        cout << setprecision(2) << "Total: R$ " << valor << endl;
    }
    else if(code == 3)
    {
        valor = qtd * 5;
        cout << setprecision(2) << "Total: R$ " << valor << endl;
    }
    else if(code == 4)
    {
        valor = qtd * 2;
        cout << setprecision(2) << "Total: R$ " << valor << endl;
    }
    else if(code == 5)
    {
        valor = qtd * 1.50;
        cout << setprecision(2) << "Total: R$ " << valor << endl;
    }
}
