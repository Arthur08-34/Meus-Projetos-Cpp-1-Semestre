#include <iostream>
using namespace std;
main()
{
	float horasT, valorH, mult;
	cout << "Digite as horas trabalhadas:" << endl;
	cin >> horasT;
	cout << "Digite o valor da hora:" << endl;
	cin >> valorH;
	mult = horasT * valorH;
	cout << "O valor a receber pelas horas trabalhadas e:" << endl << mult;
}
