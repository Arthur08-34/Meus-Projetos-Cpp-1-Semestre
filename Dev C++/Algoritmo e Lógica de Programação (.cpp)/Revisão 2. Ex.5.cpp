/*5) Um hospital utiliza um sistema para organizar a fila de pacientes com base no protocolo de Manchester
(gravidade por cores). Defina uma struct Paciente contendo: nome (string), idade (inteiro) e gravidade
(string, que pode ser "VERDE" ou "VERMELHO").
 Cadastre um vetor de 6 pacientes no sistema.
 O programa deve processar esse vetor e imprimir primeiro todos os pacientes com gravidade
"VERMELHO" (emergência) e, depois, todos os pacientes com gravidade "VERDE" (não urgente).
*/
#include <iostream>
using namespace std;
main()
{
    struct pessoa
    {
        string pessoa, gravidade;
        int idade;
    }pacientes[6];
    int i;
    for (i=0;i<6;i++)
    {
        cout << "Digite o nome do paciente: " << endl;
        cin >> pacientes[i].pessoa;
        cout << "Digite a idade do paciente: " << endl;
        cin >> pacientes[i].idade;
        cout << "Digite a gravidade do paciente (VERDE ou VERMELHO): " << endl;
        cin >> pacientes[i].gravidade;
        cout << endl;
    }
    cout << "PACIENTES VERMELHOS: " << endl; 
    for(i=0;i<6;i++)
    {
        if (pacientes[i].gravidade == "VERMELHO" || pacientes[i].gravidade == "vermelho")
        {
            cout << "Nome do paciente: " << pacientes[i].pessoa << endl;
            cout << "Idade do paciente: " << pacientes[i].idade << endl;
            cout << "Gravidade do paciente: " << pacientes[i].gravidade << endl;
            cout << endl;
        }
    }
    cout << "PACIENTES VERDES: " << endl;
    for (i=0;i<6;i++)
    {
        if (pacientes[i].gravidade == "VERDE" || pacientes[i].gravidade == "verde")
        {
            cout << "Nome do paciente: " << pacientes[i].pessoa << endl;
            cout << "Idade do paciente: " << pacientes[i].idade << endl;
            cout << "Gravidade do paciente: " << pacientes[i].gravidade << endl;
            cout << endl;
        }
    }
    
}