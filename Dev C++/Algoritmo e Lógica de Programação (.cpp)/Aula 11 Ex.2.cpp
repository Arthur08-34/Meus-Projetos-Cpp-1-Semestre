#include <iostream>
using namespace std;
main()
{
    int veta[5], vetb[5], i;
    cout << "Digite 5 numeros inteiros:" << endl;
    for (i=0;i<5;i++)
    {
        cin >> veta[i];
        vetb[i] = veta[i] * -1;
    }
    cout << "Numeros digitados: " << endl;
    for (i=0;i<5;i++)
    {
        cout << veta[i] << " ";
    }
    cout << endl << "Seus opostos: " << endl;
    for (i=0;i<5;i++)
    {
        cout << vetb[i] << " ";
    }
}