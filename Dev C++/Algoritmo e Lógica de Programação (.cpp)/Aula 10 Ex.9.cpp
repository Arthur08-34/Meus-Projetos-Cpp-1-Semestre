/*Uma eleição possui 2 candidatos a prefeito: o candidato José, do Partido da Felicidade e o candidato
João, do Partido da Esperança. Os eleitores votam nos candidatos pelo número do partido. Para votar no
candidato José do Partido da Felicidade, precisam digitar o número 1. Para votar no candidato João, do
Partido da Esperança, precisam digitar o número 2. Faça um programa que simule uma urna eletrônica.
Para cada eleitor, deve ser lido o número do seu título e em seguida o eleitor poderá digitar o seu voto. A
eleição é encerrada quando um valor negativo (menor do que 0) para o título do eleitor é digitado. Informe
quantos votos cada candidato teve e qual deles ganhou a eleição.*/
#include <iostream>
using namespace std;
main()
{
    int titulo, voto;
    int votosJose = 0, votosJoao = 0;

    do
    {
        cout << "Digite o numero do Titulo (negativo para encerrar): " << endl;
        cin >> titulo;

        if (titulo >= 0)
        {
            cout << "Digite seu voto (1 - Jose | 2 - Joao): " << endl;
            cin >> voto;

            if (voto == 1)
            {
                votosJose++;
            }
            else if (voto == 2)
            {
                votosJoao++;
            }
            else
            {
                cout << "Voto invalido!" << endl;
            }
        }

    } while (titulo >= 0);

    cout << "\n==== RESULTADO ====" << endl;
    cout << "Votos para Jose: " << votosJose << endl;
    cout << "Votos para Joao: " << votosJoao << endl;

    if (votosJose > votosJoao)
    {
        cout << "O candidato Jose ganhou!" << endl;
    }
    else if (votosJoao > votosJose)
    {
        cout << "O candidato Joao ganhou!" << endl;
    }
    else
    {
        cout << "O resultado foi empate!" << endl;
    }

    return 0;
}