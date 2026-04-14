#include <iostream>
using namespace std;
main()
{
	float capital, taxaDeJuros, valorTotal, juros;
	int tempo;
	cout << "Digite o valor do deposito:" << endl;
	cin >> capital;
	cout << "Digite o valor da taxa de juros ao mes:" << endl;
	cin >> taxaDeJuros;
	cout << "Digite a quantidade de meses que o dinheiro ficara investido:" << endl;
	cin >> tempo;
	juros = capital * (taxaDeJuros / 100);
	cout << "juros ao mes e:" << endl << juros << endl;
	valorTotal = (juros * tempo) + capital;
	cout << "O valor depois de " << tempo << " meses e de:" << endl << valorTotal;
	
	
	
	
}
