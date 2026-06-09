#include <iostream>
using namespace std;
main()
{
	float valor, soma = 0;
	char mt;
	cout << "Digite o valor: " << endl;
	cin >> valor;
	if (valor > 500)
	{
		cout << "Escolha  o metodo de pagamento (P para Pix e C para Cartao): " << endl;
		cin >> mt;
		if (mt == 'p' || mt == 'P')
		{
			soma = valor * 0.85;
			cout << "O valor com 15% de desconto e: " << soma << endl;
		}
		else if (mt == 'c' || mt == 'C')
		{
			soma = valor * 0.95;
			cout << "O valor com 5% de desconto e: " << soma << endl;
		}
	}
	else if (200 <= valor <= 500)
	{
		cout << "Escolha  o metodo de pagamento (P para Pix e C para Cartao): " << endl;
		cin >> mt;
			if (mt == 'p' || mt == 'P')
		{
			soma = valor * 0.90;
			cout << "O valor com 10% de desconto e: " << soma << endl;
		}
		else if (mt == 'c' || mt == 'C')
		{
			cout << "Nao a desconto para esse metodo de pagamento, o total a pagar e: " << valor << endl;
		}
	}
	else if(valor < 200)
	{
		cout << "Nao a desconto para esse valor, o total a pagar e: " << valor << endl;
	}
}
