#include <iostream>
using namespace std;
main()
{
	float area, base, altura;
	cout << "Digite o valor da base do triangulo:" << endl;
	cin >> base;
	cout << "Digite o valor da altura do triangulo:" << endl;
	cin >> altura;
	area = (base * altura) / 2;
	cout << "A area do triangulo e:" << endl << area;
}
