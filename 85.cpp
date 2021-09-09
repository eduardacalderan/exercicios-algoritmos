#include <iostream>
#include <iomanip>

using namespace std;

/*85) Construa um algoritmo que para uma turma de 10 alunos determine:
a) A média geral da turma.
b) A quantidade de alunos aprovados com média > 7*/

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int quantidadeDeAlunos;
    float soma, mediaGeralDaTurma, nota, aprovados;

    for(int i=1; i<=10; i++)
    {
        cout << "Informe a nota do " << i << "° aluno: ";
        cin >> nota;

        soma += nota; /*soma = soma +nota*/

        if(nota==7)
        {
            aprovados++; //::: aprovados = aprovados + 1
        }

    }

    quantidadeDeAlunos = 10;
    mediaGeralDaTurma = soma / quantidadeDeAlunos;

    cout << "Média geral da turma: " << mediaGeralDaTurma << endl;

    if(nota==7)
        {
            cout << "Quantidade de alunos aprovados com média 7: " << aprovados << endl;
        }

}
