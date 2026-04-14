#include <iostream>
using namespace std;
main()
{
    int n1;
    cout << "Digite 1 numero:" << endl;
    cin >> n1;
    if ( n1 == 0)
    {
        cout << "O numero digitado foi: 0" << endl;
    }
    else if ( n1 % 2 == 0)
    {
        cout << "O numero digitado e par" << endl;
    }
    else if (n1 % 2 == 1)
    {
        cout << "O numero digitado e impar" << endl;
    }
    return 0;
}