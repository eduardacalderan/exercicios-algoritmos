#include <iostream>
#include <iomanip>
using namespace std;

/*3) Fa�a um programa que leia o sal�rio de um funcion�rio e o valor total da venda feita por ele
mesmo no m�s (em dinheiro). Considerando que esse vendedor recebe 15% sobre todos os
produtos vendidos, escreva o sal�rio final (total) desse vendedor no final do m�s.
Exemplo de entrada:
Sal�rio do funcion�rio: 500
Valor total de vendas: R$ 1.230,30
Exemplo de sa�da:
Sal�rio final: R$ 684,54*/

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    float salario, venda, saida;

    cout << "Informe o sal�rio do funcion�rio em R$: ";
    cin >> salario;

    cout << "Informe o valor total de venda do funcion�rio no m�s em R$: ";
    cin >> venda;

    saida = salario+venda*0.15;

    cout << fixed << setprecision(2);
    cout << "Sal�rio final: R$ " << saida;

}
