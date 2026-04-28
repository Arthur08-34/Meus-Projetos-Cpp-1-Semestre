//Calcule e mostre a soma dos números impares entre 30 e 100, inclusive
#include <iostream>
using namespace std;
main()
{
    int num = 30;
    int soma = 0;
    while (num <= 100)
    {
        if (num % 2 != 0)
        {
            soma = soma + num;
        }
        num++;
    }
    cout << "A soma dos numeros impares de 30 ate 100 e: " << soma << endl;
    
}