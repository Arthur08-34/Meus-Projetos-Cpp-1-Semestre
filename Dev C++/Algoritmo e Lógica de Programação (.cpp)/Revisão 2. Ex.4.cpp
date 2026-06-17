/*4) Um investidor possui diversos ativos digitais e precisa de um sistema para consolidar o valor total de sua
carteira de investimentos. Crie uma estrutura chamada Criptomoeda com os campos: nome (string),
quantidade (float) e precoUnitarioUSD (float).
 No programa principal, declare um vetor para armazenar 5 criptomoedas e peça para o usuário cadastrar
os dados de cada uma.
 Ao final, o programa deve calcular e exibir o valor total da carteira em dólares (somatório de quantidade
X precoUnitarioUSD de todas as moedas) e mostrar o nome da moeda na qual o usuário tem o maior
valor investido.
*/
#include <iostream>
#include <iomanip>
using namespace std;
main()
{
   struct Criptomoeda
   {
        string nome;
        float quantidade, precoUnitarioUSD;
   }cripto[5];
   int i;
   float valorTotalCarteira = 0, maiorValorInvestido = 0;
   string moedaMaiorInvestimento;
   for (i=0;i<5;i++)
   {
    cout << "Digite o nome da criptomoeda: " << endl;
    cin >> cripto[i].nome;
    cout << "Digite a quantidade dessa criptomoeda: " << endl;
    cin >> cripto[i].quantidade;
    cout << "Digite o preco da criptomoeda: " << endl;
    cin >> cripto[i].precoUnitarioUSD;
   }
   cout << fixed << setprecision(2);
   for (i=0;i<5;i++)
   {
    float valorInvestido = cripto[i].quantidade * cripto[i].precoUnitarioUSD;
    valorTotalCarteira += valorInvestido;
    if (i == 0 || valorInvestido > maiorValorInvestido)
    {
        maiorValorInvestido = valorInvestido;
        moedaMaiorInvestimento = cripto[i].nome;
    }
    cout << "Nome: " << cripto[i].nome << endl;
    cout << "Valor total: US$" << valorInvestido << endl;
    cout << endl;
   }
   cout << "Valor Total da Carteira: US$" << valorTotalCarteira << endl;
   cout << "Moeda com maior investimento: " << moedaMaiorInvestimento << endl;
   cout << "Maior valor investido: US$" << maiorValorInvestido << endl;
}