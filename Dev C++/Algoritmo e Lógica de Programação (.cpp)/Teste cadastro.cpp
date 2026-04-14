#include <iostream>
using namespace std;
main()
{
	string nome, telefone;
	int idade;
	char sexo;
	cout << "Realizacao de Cadastro:";
	cout << "Digite seu nome completo:";
	cin >> nome;
	cout << "Digite sua idade:";
	cin >> idade;
	cout << "Digite seu sexo (M) ou (F):";
	cin >> sexo;
	cout << "Digite seu telefone:";
	cin >> telefone;
	getline(cin, telefone);
	cout << "Seus dados sao:" << endl << nome << endl << idade << endl << sexo << endl << telefone;
	
	
}
