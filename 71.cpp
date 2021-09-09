#include <iostream>
#include <ctime>
using namespace std;

/*71) Crie um algoritmo que receba dois números X e Y, sendo X < Y. Calcule e mostre:
a) A soma dos números pares desse intervalo de números, incluindo os números digitados;
b) A multiplicação dos números ímpares desse intervalo, incluindo os digitados;
Observação: Caso o valor de X seja inválido, ou seja, X ≥ Y, o programa deve mostrar uma
mensagem de erro e um novo valor deve ser lido, até que um valor válido seja digitado
pelo usuário!*/
int main(){
    setlocale(LC_ALL, "Portuguese");

    int X,Y,soma=0,multiplicacao=0,contador;
    do
    {
        cout<<"Informe um número inteiro X:";
        cin>>X;
        cout<<"Informe um número inteiro Y:";
        cin>>Y;

        if(X>=Y)
        {
            cout<<"Valor inválido!\n";
            cout<<endl;

        }


    }
    while(X>=Y);
    contador=X;
    soma=0;
    multiplicacao=1;
    while(contador<=Y)
    {

        if (contador%2==0)
        {
            soma=soma+contador;
        }
        else
        {
            multiplicacao=multiplicacao *contador;
        }
        contador++;
    }
    cout<<"Soma dos pares no intervalo de X e Y "<<soma<<endl;
    cout<<"Multiplicação dos impares no intervalo de X e Y "<<multiplicacao<<endl;
}
