#include <iostream>
#include <iomanip>
using namespace std;

/*3) Faça um programa que leia o salário de um funcionário e o valor total da venda feita por ele
mesmo no mês (em dinheiro). Considerando que esse vendedor recebe 15% sobre todos os
produtos vendidos, escreva o salário final (total) desse vendedor no final do mês.
Exemplo de entrada:
Salário do funcionário: 500
Valor total de vendas: R$ 1.230,30
Exemplo de saída:
Salário final: R$ 684,54*/

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    float salario, venda, saida;

    cout << "Informe o salário do funcionário em R$: ";
    cin >> salario;

    cout << "Informe o valor total de venda do funcionário no mês em R$: ";
    cin >> venda;

    saida = salario+venda*0.15;

    cout << fixed << setprecision(2);
    cout << "Salário final: R$ " << saida;

}
