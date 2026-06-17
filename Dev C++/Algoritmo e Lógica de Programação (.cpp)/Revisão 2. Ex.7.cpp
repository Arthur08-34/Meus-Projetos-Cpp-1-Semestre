/*7) Ao preencher um formulário de cadastro, os usuários digitam o número de celular de várias formas
diferentes (com parênteses, traços e espaços). O sistema precisa limpar a string para salvar no banco de
dados apenas os números. Receba uma string contendo um número de telefone digitado pelo usuário (ex:
(11) 98765-4321).
 O programa deve percorrer a string, remover todos os caracteres não numéricos (parênteses, espaços e
hifens) e gerar uma nova string limpa.
 Exiba na tela o resultado final contendo apenas os dígitos (ex: 11987654321).
Dica: função isdigit() retorna true se for um dígito. Ex: isdigit(texto[i])*/
#include <iostream>
using namespace std;
main()
{
    string telefone, telefoneLimpo;
    int i;
    cout << "Digite o numero de telefone: " << endl;
    getline(cin, telefone);
    for (i=0;i<telefone.size();i++)
    {
        if (isdigit(telefone[i]))
        {
            telefoneLimpo += telefone[i];
        }
    }
    cout << "Telefone: " << telefoneLimpo << endl;
}