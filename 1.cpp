#include <iostream>
using namespace std;

/*Utilizando o comando switch, construa um programa que receba o número de metas de vendas
atingidas por um colaborador e mostre o valor da bonificação que ele irá receber com base na tabela abaixo:
Observação: Se o número de metas fornecido pelo usuário for inválido, ou seja, não está listado na tabela,
mostrar uma mensagem de erro e terminar a execução do program*/


int main () {

    setlocale (LC_ALL, "Portuguese");

    int media;

    cout << "Digite um número que corresponda às metas de vendas atingidas por um colaborador:\n 1 se a meta for de 5 a 10\n 2 se a meta for de  11\n 3 se a meta for de  12\n 4 se a meta for de  13 ou 14 ou 15\n 5 se a meta for de  16 a 17\n Digite aqui: ";
    cin >> media;

    switch (media)
    {
    case 1:
        cout << "A bonificação do colaborador será de R$10,00";
        break;
    case 2:
        cout << "A bonificação do colaborador será de R$12,50";
        break;
    case 3:
        cout << "A bonificação do colaborador será de R$21,20";
        break;
    case 4:
        cout << "A bonificação do colaborador será de R$27,00";
        break;
    case 5:
        cout << "A bonificação do colaborador será de R$30,00";
        break;
    default:
        cout << "Erro: o número de metas fornecido é inválido!";
    }

}
