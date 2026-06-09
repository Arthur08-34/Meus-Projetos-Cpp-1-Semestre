#include <iostream>
using namespace std;
main()
{
	float v1[5], v2[5], v3[10];
	int i;
	for (i=0;i<5;i++)
	{
		cout << "Digite o valor do primeiro vetor: " << endl;
		cin >> v1[i];
		v3[i] = v1[i];
	}
	for (i=0;i<5;i++)
	{
		cout << "Digite o valor do segundo vetor: " << endl;
		cin >> v2[i];
		v3[i + 5] = v2[i];
	}
	cout << "O novo vetor e: ";
	for (i=0;i<10;i++)
	{
		cout << v3[i] << "  ";
	}
}
