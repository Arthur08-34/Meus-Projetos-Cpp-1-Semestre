#include <iostream>
using namespace std;
main()
{
    int num, cont;
    cout << "Entre com o numero que voce queira saber a tabuada:" << endl;
    cin >> num;
    for (cont = 0; cont <= 10; cont++)
    {
        cout << num << " x " << cont << " = " << num * cont << endl;
    }
    
}