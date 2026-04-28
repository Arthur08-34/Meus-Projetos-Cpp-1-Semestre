/*Faça um programa que leia informações de alunos (Matricula, Nota1, Nota2 , Nota3) com o fim das
informações indicado por Matricula = 9999. Para cada aluno deve ser calculada a média aritmética. Se a média
final for igual ou superior a 5, o programa deve mostrar Matrícula, Média Final e a mensagem "APROVADO" ; se a
média final for inferior a 5, o programa deve mostrar Matricula, Média Final e a mensagem "REPROVADO". Ao
final devem ser mostrados o total de aprovados, o total de alunos da turma e o total de reprovados.*/
#include <iostream>
using namespace std;
main()
{
    int matricula;
    float nota1, nota2, nota3, media;
    int aprovados = 0, reprovados = 0, total = 0;
    cout << "Digite o numero da matricula (Digite 9999 para encerrar): " << endl;
    cin >> matricula;
    while (matricula != 9999)
    {
        cout << "Digite a nota 1: " << endl;
        cin >> nota1;

        cout << "Digite a nota 2: " << endl;
        cin >> nota2;

        cout << "Digite a nota 3: " << endl;
        cin >> nota3;

        media = (nota1 + nota2 + nota3) / 3;

        cout << "Matricula " << matricula << endl;
        cout << "Media " << media << endl;

        if (media >= 5)
        {
            cout << "APROVADO" << endl;
            aprovados++;
        }
        else
        {
            cout << "REPROVADO" << endl;
            reprovados++;
        }
        total++;

        cout << "Digite o numero da matricula (Digite 9999 para encerrar): " << endl;
        cin >> matricula;
    }
    cout << "======RESULTADO FINAL======" << endl;
    cout << "Total de alunos: " << total << endl;
    cout << "Total de aprovados: " << aprovados << endl;
    cout << "Total de reprovados: " << reprovados << endl;
}