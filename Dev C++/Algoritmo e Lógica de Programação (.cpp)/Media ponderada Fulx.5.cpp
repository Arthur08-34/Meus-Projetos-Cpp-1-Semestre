#include <iostream>
using namespace std;
main()
{
	float n1, n2, n3, nota;
	int p1, p2, p3;
	cout << "Digite as tres notas:" << endl;
	cin >> n1 >> n2 >> n3;
	cout << "Digite os tres pesos na mesma ordem das notas, sendo sua somatoria = 10" << endl;
	cin >> p1 >> p2 >> p3;
	nota = ((n1 * p1) + (n2 * p2) + (n3 * p3)) / (p1 + p2 + p3);
	cout << "Sua media ponderada e:" << endl << nota;
}
