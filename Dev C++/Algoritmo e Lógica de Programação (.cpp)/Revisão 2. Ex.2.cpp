/*2) Você irá programar um sistema de sensores monitora o volume de água em um reservatório de condomínio.
O síndico precisa receber alertas caso o nível chegue a patamares críticos. O usuário deve digitar a capacidade
máxima do reservatório (em litros) e a quantidade atual de água armazenada (em litros).
 Crie uma função chamada verificarNivel que receba a capacidade máxima e o nível atual, calculando a
porcentagem de água restante.
 No programa principal, avalie o retorno: se a porcentagem for menor ou igual a 20%, exiba a mensagem
"ALERTA: Ligar bomba - Nível crítico!". Se for maior ou igual a 95%, exiba "ALERTA: Reservatório
cheio - Risco de transbordo!". Caso contrário, exiba "Status: Nível seguro".*/
#include <iostream>
#include <iomanip>
using namespace std;
double verificarnivel(double total, double quantidade)
{
    double resultado = 0;
    resultado = quantidade / total;
    resultado = resultado * 100;
    return resultado;
}
main()
{
    double reservatorio = 0, qtde_armazenada = 0, nivel;
    cout << fixed;
    cout << "Digite quantos litros tem o reservatorio: " << endl;
    cin >> reservatorio;
    cout << "Digite quantos litros de agua tem armazenado no rezervatorio: " << endl;
    cin >> qtde_armazenada;
    cout << setprecision(2) << "Porcentagem utilizada: " << verificarnivel(reservatorio, qtde_armazenada) << "%" << endl;
    if (verificarnivel(reservatorio, qtde_armazenada) < 95 && verificarnivel(reservatorio, qtde_armazenada) > 20)
    {
        cout << "Status: Nivel Seguro" << endl;
    }
    else if (verificarnivel(reservatorio, qtde_armazenada) >= 95)
    {
        cout << "ALERTA: Reservatorio cheio - Risco de transbordo!" << endl;
    }
    else if (verificarnivel(reservatorio, qtde_armazenada) <= 20)
    {
        cout << "ALERTA: Ligar bomba - Nivel critico!";
    }
}