#include <iostream>
using namespace std;
main()
{
	float vm, multas = 0, soma = 0;
	int ct, nm, i, maiorNumerodeMultas = 0, carteiraRecordista;
	cout << "Digite o numero da carteira de motorista de 1 a 4327 (digite 0 para encerrar): " << endl;
	cin >> ct;
	while (ct != 0 && (ct < 1 || ct > 4327))
	{
		cout << "Digite um valor entre 1 a 4327" << endl;
		cin >> ct;
	}
	while (ct != 0 && 1 <= ct && ct <=4327)
	{
		cout << "Digite a quantidade de multas: " << endl;
		cin >> nm;
		multas = 0;
		for (i=0;i<nm;i++)
		{
			cout << "Digite o valor das multas: ";
			cin >> vm;
			multas += vm;
			soma += vm;
		}
		cout << "O total a pagar deste motorista e: " << multas << endl;
		if (nm > maiorNumerodeMultas)
		{
			maiorNumerodeMultas = nm;
			carteiraRecordista = ct;
		}
		cout << endl << "Digite o numero da carteira de motorista de 1 a 4327 (digite 0 para encerrar): " << endl;
		cin >> ct;
		while (ct != 0 && (ct < 1 || ct > 4327))
		{
			cout << "Digite um valor entre 1 a 4327" << endl;
			cin >> ct;
		}
	}
	cout << "O valor total arrecadado e: " << soma << endl;
	cout << "O motorista que teve maior numero de multas foi: " << carteiraRecordista << endl;
	
}
