#include <iostream>
using namespace std;
main()
{
	float n1, n2, sub1, sub2;
	cout << "Escreva dois numeros:" << endl;
	cin >> n1;
	cin >> n2;
	if(n1 > n2)
	{
		sub1 = n1 - n2;
		cout << "A subtracao e " << sub1 << endl;	
	}
	else
	{
		sub2 = n2 - n1;
		cout << "A subtracao e " << sub2 << endl;
	}
}
