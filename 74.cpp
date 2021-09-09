#include <iostream>

#include <iomanip> //para formatar as casas decimais

using namespace std;

/*74) Fa�a um programa que receba o sal�rio de um funcion�rio chamado Carlos. Sabe-se que outro
funcion�rio chamado Jo�o, tem sal�rio equivalente a um ter�o do sal�rio de Carlos. Carlos aplicar�
seu sal�rio integralmente na caderneta de poupan�a, que est� rendendo 2 % ao m�s, e Jo�o
aplicar� seu sal�rio integralmente no fundo de renda fixa, que est� rendendo 5% ao m�s. O
programa dever� calcular e mostrar a quantidade de meses necess�rios para que o valor
pertencente a Jo�o iguale ou ultrapasse o valor pertencente a Carlos.*/

int main ()
{

    setlocale(LC_ALL, "Portuguese");
    float salarioCarlos, salarioJoao, rendimentoCarlos, rendimentoJoao;
    int meses;
    meses = 0;
    salarioJoao = salarioCarlos / 3;
    rendimentoCarlos = (salarioCarlos * 0.02) + salarioCarlos;
    rendimentoJoao = (salarioJoao * 0.05) + salarioJoao;

    cout << "Sal�rio de Carlos: ";
    cin >> salarioCarlos;


    salarioJoao = salarioCarlos / 3;
    cout << "O sal�rio de Jo�o � " << salarioJoao << " reais." << endl;


    rendimentoJoao = (salarioJoao * 0.05) + salarioJoao;
    rendimentoCarlos = (salarioCarlos * 0.02) + salarioCarlos;
    do
    {
        rendimentoJoao = (rendimentoJoao * 0.05) + rendimentoJoao;
        rendimentoCarlos = (rendimentoCarlos * 0.02) + rendimentoCarlos;
        meses++;

    }while(rendimentoJoao<rendimentoCarlos);

     cout << "Em " << meses << " meses, o valor pertencente a Jo�o passar� a ser de " << rendimentoJoao << " reais. Enquanto o valor pertencente a Carlos ser� de \n" << rendimentoCarlos << " reais." << endl;
     cout << "Ou seja, ap�s " << meses << " meses, Jo�o chegar� ou ultrapassar� o valor de Carlos.";

}

