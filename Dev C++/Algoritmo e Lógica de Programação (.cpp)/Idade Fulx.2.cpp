#include <iostream>
using namespace std;
main()
{
	int Ano_atual, Ano_nascimento, Sub;
	cout << "Digite o ano atual e apos o ano que voce nasceu:";
	cin >> Ano_atual >> Ano_nascimento;
	Sub = Ano_atual - Ano_nascimento;
	cout << "Voce tem " << Sub << " anos de idade!";
	
}
