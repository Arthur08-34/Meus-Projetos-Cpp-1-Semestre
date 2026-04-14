#include <iostream>
using namespace std;
main()
{
	float custoEspetaculo, precoConvite, divi;
	cout << "Coloque o custo do espetaculo:" << endl;
	cin >> custoEspetaculo;
	cout << "Coloque o preco do convite:" << endl;
	cin >> precoConvite;
	divi = custoEspetaculo / precoConvite;
	cout << "Quantidades de convites necessarios para o custeio do espetaculo e:" << endl << divi;
}
