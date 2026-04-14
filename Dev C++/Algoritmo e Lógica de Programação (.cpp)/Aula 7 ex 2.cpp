#include <iostream>
using namespace std;
main()
{
	float n1, n2;
	cout << "Escreva dois numeros:" << endl;
	cin >> n1;
	cin >> n2;
	if(n1 > n2)
	{
		cout << "O numero " << n1 << " e maior!" << endl;
	}
	else
	{
		cout << "O numero " << n2 << " e maior!" << endl;
	}
}
