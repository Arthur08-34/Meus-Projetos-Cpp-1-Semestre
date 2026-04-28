/* Faça um programa que peça para n pessoas a sua idade, ao final o programa deverá verificar
se a média de idade da turma varia entre 0 e 25,26 e 60 e maior que 60; e então, dizer se a
turma é jovem, adulta ou idosa, conforme a média calculada.*/
#include <iostream>
using namespace std;
main()
{
    int idade, pessoas, i, soma = 0;
    float media;
    cout << "Digite o numero de pessoas em sua sala:" << endl;
    cin >> pessoas;
    for (i=0; i < pessoas; i++)
    {
        cout << "Digite a idade das pessoas:" << endl;
        cin >> idade;
        soma = soma + idade;
    }
    media = soma / pessoas;
    if (media >= 0 && media <= 25)
    {
        cout << "Sua turma e jovem." << endl;
    }
    else if ( media >= 26 && media <= 60)
    {
        cout << "Sua turma e adulta." << endl;
    }
    else if ( media > 60)
    {
        cout << "Sua turma e idosa" << endl;
    }
}
