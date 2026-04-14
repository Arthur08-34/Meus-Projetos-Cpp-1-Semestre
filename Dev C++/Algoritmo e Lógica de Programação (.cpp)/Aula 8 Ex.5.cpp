#include <iostream>
using namespace std;
main()
{
    int PESSOAS, VIAGEM, TIPO;
    float TOTAL, VALOR = 0;
    cout << "Digite a opcao preferia:" << endl;
    cout << "1 - Viagens no Brasil" << endl;
    cout << "2 - Viagens para o Exterior" << endl;
    cin >> TIPO;
    switch (TIPO)
    {
    case 1 : cout << "Viagens do Brasil" << endl;
    cout << "1 - Rio de Janeiro (700)" << endl;
    cout << "2 - Salvador (900)" << endl;
    cout << "3 - Porto Alegre (880)" << endl;
    cout << "Escolha a Cidade:" << endl;
    cin >> VIAGEM;
        switch (VIAGEM)
        {
            case 1 : VALOR = 700;
                break;
            case 2 : VALOR = 900;
                break;
            case 3 : VALOR = 880;
                break;
            default : cout << "Cidade nao encontrada";
                break;
        }
    case 2 : cout << "Viagens do Exterior" << endl;
    cout << "1 - Nova York (2200)" << endl;
    cout << "2 - Franca (3550)" << endl;
    cout << "3 - Cancun (3900)" << endl;
    cout << "4 - Madri (4000)" << endl;
    cout << "Escolha o Pais:" << endl;
    cin >> VIAGEM;
        switch (VIAGEM)
        {
            case 1 : VALOR = 2200;
                break;
            case 2 : VALOR = 3550;
                break;
            case 3 : VALOR = 3900;
                break;
            case 4 : VALOR = 4000;
                break;
            default: cout << "Pais nao encontrado";
                break;

        }
        break;
    
    default: cout << "Opcao nao identificada";
        break;
    }
    cout << "Digite o numero de pessoas para a viagem:" << endl;
    cin >> PESSOAS;
    TOTAL = VALOR * PESSOAS;
    cout << "O valor total da viagem e R$ " << TOTAL << endl;
    return 0;
}