/*Foi feita uma pesquisa entre os habitantes de uma região. Foram coletados os dados de idade, sexo
(M/F) e salário. Faça um programa que informe:
a) a média de salário do grupo;
b) a maior e a menor idade do grupo;
c) a quantidade de mulheres com salário até R$1100,00. Encerre a entrada de dados quando for digitada
uma idade negativa que não fará parte dos cálculos.*/
#include <iostream>
using namespace std;
main()
{
    int idade, maiorIdade, menorIdade, totalPessoas = 0;
    char sexo;
    float salario, somaSalario = 0;
    int mulheresBaixaRenda = 0;

    do
    {
        cout << "Digite a idade (negativa para encerrar): " << endl;
        cin >> idade;

        if (idade >= 0)
        {
            cout << "Digite o sexo (M/F): " << endl;
            cin >> sexo;

            cout << "Digite o salario: " << endl;
            cin >> salario;

            somaSalario = somaSalario + salario;
            totalPessoas++;

            if (totalPessoas == 1)
            {
                maiorIdade = menorIdade = idade;
            }
            else
            {
                if (idade > maiorIdade)
                {
                    maiorIdade = idade;
                }
                if ( idade < menorIdade)
                {
                    menorIdade = idade;
                }
            }
            if (sexo == 'F' && salario <= 1100)
            {
                mulheresBaixaRenda++;
            }
        }
    } while (idade >= 0);
    if (totalPessoas > 0)
    {
       float media = somaSalario / totalPessoas;

        cout << "==== RESULTADO ====" << endl;
        cout << "Media de Salario: " << media << endl;
        cout << "Maior idade: " << maiorIdade << endl;
        cout << "Menor idade: " << menorIdade << endl;
        cout << "Mulheres com salarios de ate R$1100,00: " << mulheresBaixaRenda << endl;
    }
    else
    {
        cout << "Nenhum dado foi informado." << endl;
    }
}

    