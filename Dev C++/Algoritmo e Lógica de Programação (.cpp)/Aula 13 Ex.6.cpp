/*6) Elabore uma função que receba 3 notas de um aluno como parâmetro uma
letra. Se a letra for ‘A’, a função deve calcular a média aritmética das notas do
aluno; se a letra for ‘P’, deverá calcular a média ponderada, com pesos 5, 3 e 2.
Retorne a média calculada para o programa principal*/
#include <iostream>
using namespace std;
float media (float A, float B, float C)
{
    float soma=0;
    char op;
    cout << "Digite (A) para media aritimetica e (P) para media ponderada: " << endl;
    cin >> op;
    if (op == 'A' || op == 'a')
    {
        soma = (A + B + C) / 3;
    }
    else if (op == 'P' || op == 'p')
    {
        soma =((A * 5) + (B * 3) + (C * 2)) / 10;
    }
    return soma;
}
main ()
{
    float n1, n2, n3;
    cout << "Digite as notas do aluno: " << endl;
    cin >> n1 >> n2 >> n3;
    cout << media(n1,n2,n3);
}