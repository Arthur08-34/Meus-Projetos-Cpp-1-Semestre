#include <iostream>
using namespace std;
main ()
{
/* Prato: 1 - vegetariano, 2 – Peixe, 3 – Frango, 4 – Carne; 
Sobremesa: 1 – Abacaxi, 2 – Sorvete diet, 3 – Mouse diet, 4 – Mouse chocolate; 
Bebida: 1 – Chá, 2 - Suco de laranja, 3 – Suco de melão, 4 – Refrigerante diet. 
*/
    int PRATO, SOBREMESA, BEBIDA; 
    int CALORIAS = 0;
    cout << "Siga os passos para saber a caloria da sua refeicao!" << endl;
    cout << "Informe um prato:" << endl;
    cout << "1 - vegetariano, 2 - Peixe, 3 - Frango, 4 - Carne;" << endl;
    cin >> PRATO;
    switch (PRATO)
    {
    case 1: CALORIAS += 180;
        break;
    case 2: CALORIAS += 230;
        break;
    case 3: CALORIAS += 250;
        break;
    case 4: CALORIAS += 350;
        break;
    default: cout << "Prato nao identificado";
        break;
    }
    cout << "Informe uma sobremesa" << endl;
    cout << "1 - Abacaxi, 2 - Sorvete diet, 3 - Mouse diet, 4 - Mouse chocolate" << endl;
    cin >> SOBREMESA;
    switch (SOBREMESA)
    {
    case 1: CALORIAS += 75;
        break;
    case 2: CALORIAS += 110;
        break;
    case 3: CALORIAS += 170;
        break;
    case 4: CALORIAS += 200;
        break;
    default: cout << "Sobremesa nao identificada";
        break;
    }
    cout << "Informe a bebida" << endl;
    cout << "1 -Cha, 2 - Suco de laranja, 3 - Suco de melao, 4 - Refrigerante diet" << endl;
    cin >> BEBIDA;
    switch (BEBIDA)
    {
    case 1: CALORIAS += 20;
        break;
    case 2: CALORIAS += 70;
        break;
    case 3: CALORIAS += 100;
        break;
    case 4: CALORIAS += 65;
        break;
    default: cout << "Bebida nao identificada";
        break;
    }
    cout << endl << "O numero total e de " << CALORIAS << " cal" << endl;
}