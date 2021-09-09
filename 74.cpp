#include <iostream>

#include <iomanip> //para formatar as casas decimais

using namespace std;

/*74) Faça um programa que receba o salário de um funcionário chamado Carlos. Sabe-se que outro
funcionário chamado João, tem salário equivalente a um terço do salário de Carlos. Carlos aplicará
seu salário integralmente na caderneta de poupança, que está rendendo 2 % ao mês, e João
aplicará seu salário integralmente no fundo de renda fixa, que está rendendo 5% ao mês. O
programa deverá calcular e mostrar a quantidade de meses necessários para que o valor
pertencente a João iguale ou ultrapasse o valor pertencente a Carlos.*/

int main ()
{

    setlocale(LC_ALL, "Portuguese");
    float salarioCarlos, salarioJoao, rendimentoCarlos, rendimentoJoao;
    int meses;
    meses = 0;
    salarioJoao = salarioCarlos / 3;
    rendimentoCarlos = (salarioCarlos * 0.02) + salarioCarlos;
    rendimentoJoao = (salarioJoao * 0.05) + salarioJoao;

    cout << "Salário de Carlos: ";
    cin >> salarioCarlos;


    salarioJoao = salarioCarlos / 3;
    cout << "O salário de João é " << salarioJoao << " reais." << endl;


    rendimentoJoao = (salarioJoao * 0.05) + salarioJoao;
    rendimentoCarlos = (salarioCarlos * 0.02) + salarioCarlos;
    do
    {
        rendimentoJoao = (rendimentoJoao * 0.05) + rendimentoJoao;
        rendimentoCarlos = (rendimentoCarlos * 0.02) + rendimentoCarlos;
        meses++;

    }while(rendimentoJoao<rendimentoCarlos);

     cout << "Em " << meses << " meses, o valor pertencente a João passará a ser de " << rendimentoJoao << " reais. Enquanto o valor pertencente a Carlos será de \n" << rendimentoCarlos << " reais." << endl;
     cout << "Ou seja, após " << meses << " meses, João chegará ou ultrapassará o valor de Carlos.";

}

