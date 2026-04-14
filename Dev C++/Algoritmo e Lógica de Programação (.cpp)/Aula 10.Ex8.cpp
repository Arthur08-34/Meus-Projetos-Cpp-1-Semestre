/*8) Solicitar a idade de várias pessoas e imprimir: Total de pessoas com menos de 21 anos. Total de
pessoas com mais de 50 anos. O programa termina quando idade for =-99
*/
#include <iostream>
using namespace std;
main()
{
    int idade, total21 = 0, total50 = 0, total_entre_idades = 0;
    cout << "Digite a idade das pessoas:" << endl;
    cin >> idade;
    while (idade != -99)
    {
        if (idade <= 21)
        {
            total21++;
        }
        else if (idade >= 50)
        {
            total50++;
        }
        else if(22 <= idade && idade <=49)
        {
            total_entre_idades++;
        }
        cout << "Digite a idade das pessoas (digite -99 para encerrar):" << endl;
        cin >> idade;
    }
    cout << "O total de pessoas com menos de 21 e:" << endl << total21 << endl;
    cout << "O total de pessoas com mais de 50 e:" << endl << total50 << endl;
    cout << "O total de pessoas entre 21 e 50 e:" << endl << total_entre_idades << endl;
    
}