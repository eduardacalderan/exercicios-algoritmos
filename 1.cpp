#include <iostream>
using namespace std;

/*Utilizando o comando switch, construa um programa que receba o n�mero de metas de vendas
atingidas por um colaborador e mostre o valor da bonifica��o que ele ir� receber com base na tabela abaixo:
Observa��o: Se o n�mero de metas fornecido pelo usu�rio for inv�lido, ou seja, n�o est� listado na tabela,
mostrar uma mensagem de erro e terminar a execu��o do program*/


int main () {

    setlocale (LC_ALL, "Portuguese");

    int media;

    cout << "Digite um n�mero que corresponda �s metas de vendas atingidas por um colaborador:\n 1 se a meta for de 5 a 10\n 2 se a meta for de  11\n 3 se a meta for de  12\n 4 se a meta for de  13 ou 14 ou 15\n 5 se a meta for de  16 a 17\n Digite aqui: ";
    cin >> media;

    switch (media)
    {
    case 1:
        cout << "A bonifica��o do colaborador ser� de R$10,00";
        break;
    case 2:
        cout << "A bonifica��o do colaborador ser� de R$12,50";
        break;
    case 3:
        cout << "A bonifica��o do colaborador ser� de R$21,20";
        break;
    case 4:
        cout << "A bonifica��o do colaborador ser� de R$27,00";
        break;
    case 5:
        cout << "A bonifica��o do colaborador ser� de R$30,00";
        break;
    default:
        cout << "Erro: o n�mero de metas fornecido � inv�lido!";
    }

}
