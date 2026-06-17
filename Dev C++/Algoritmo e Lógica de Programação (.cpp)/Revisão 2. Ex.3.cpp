/*3) Uma grande plataforma de compras online precisa calcular o valor final do carrinho de um cliente,
aplicando primeiro um cupom de desconto sobre o produto e, depois, adicionando o valor do frete baseado
na distância de entrega. Peça ao usuário o preço original do produto, o percentual de desconto do cupom (ex:
15 para 15%) e a distância até a sua casa em quilômetros.
 Crie a primeira função chamada aplicarCupom, que recebe o preço do produto e o percentual de
desconto, retornando o preço do produto atualizado.
 Crie a segunda função chamada calcularFrete, que recebe a distância em km e calcula o custo de
envio (considere o valor fixo de R$ 1,20 por quilômetro rodado).
 Na main, utilize o retorno das duas funções para exibir o preço do produto com desconto, o valor do
frete e o valor total final da compra.*/
#include <iostream>
#include <iomanip>
using namespace std;
double aplicarCupom(double total, double desconto)
{
    double resultado = 0;
    resultado = total * (desconto / 100);
    resultado = total - resultado;
    return resultado;
}
double calcularFrete(double km)
{
    double valorFrete;
    valorFrete = km * 1.20;
    return valorFrete;
}
main()
{
    double valorCompra = 0, cupom = 0, distancia = 0, totalDaCompra = 0;
    cout << fixed;
    cout << "Digite o valor do carrinho de compras: " << endl;
    cin >> valorCompra;
    cout << "Digite o cupom de desconto: " << endl;
    cin >> cupom;
    cout << "Digite quantos Km de distancia da entrega: " << endl;
    cin >> distancia;
    cout << setprecision(2) << "O valor com desconto eh: R$" << aplicarCupom(valorCompra, cupom) << endl;
    cout << setprecision(2) << "O valor do frete eh: R$" << calcularFrete(distancia) << endl;
    totalDaCompra = aplicarCupom(valorCompra, cupom) + calcularFrete(distancia);
    cout << setprecision(2) << "O total eh: R$" << totalDaCompra << endl;

}