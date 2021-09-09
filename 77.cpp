#include <iostream>
#include <ctime>
#include<iomanip>
#include <stdlib.h>
using namespace std;

/*Faça um algoritmo onde usuário terá 6 chances para acertar um número gerado pelo computador
(intervalo de 0 a 75) com base nos seguintes critérios:
a) O Computador irá auxiliar o usuário durante as tentativas, informando se o valor digitado é
maior ou menor que o valor gerado pelo computador;
b) Caso o usuário não acerte depois de 6 tentativas, uma mensagem informar que as chances
acabaram e mostrar o número gerado;
c) Caso o usuário acerte antes de acabar as chances, uma mensagem deverá ser exibida,
parabenizando o usuário.*/

int main()
{
    setlocale(LC_ALL,"Portuguese");
    srand(time(NULL));
    int numerogerado,numerodigitado,tentativa;
    numerogerado= rand () %76;
    tentativa=0;

    do
    {
        tentativa++;
        cout<<"Informe um nùmero ("<< tentativa <<" ª tentativa):\n";
        cin>>numerodigitado;

        if(numerodigitado>numerogerado)
            cout<<"O número digitado é maior que o número gerado\n";
        if(numerodigitado<numerogerado)
            cout<<"O número digitado é menor que o número gerado\n";
    }

    while(tentativa<6 && numerodigitado!=numerogerado);
    if (numerodigitado==numerogerado){
        cout<<"Parábens!!! Você acertou!!"<<tentativa<<endl;
    }
    else
    {
        cout<<"Você não acertou, o número gerado é: "<<numerogerado<<endl;
    }




}
