#include <iostream>
using namespace std;
main()
{
	float salarioAtual, aumento, salarioNovo;
	cout << "Digite seu salario atual:" << endl;
	cin >> salarioAtual;
	cout << "digite o aumento do salario em porcentagem:" << endl;
	cin >> aumento;
	salarioNovo = (salarioAtual * aumento / 100) + salarioAtual;
	cout << "Seu novo salario e:" << endl << salarioNovo;
}
