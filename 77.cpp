#include <iostream>
#include <ctime>
#include<iomanip>
#include <stdlib.h>
using namespace std;

/*Fa�a um algoritmo onde usu�rio ter� 6 chances para acertar um n�mero gerado pelo computador
(intervalo de 0 a 75) com base nos seguintes crit�rios:
a) O Computador ir� auxiliar o usu�rio durante as tentativas, informando se o valor digitado �
maior ou menor que o valor gerado pelo computador;
b) Caso o usu�rio n�o acerte depois de 6 tentativas, uma mensagem informar que as chances
acabaram e mostrar o n�mero gerado;
c) Caso o usu�rio acerte antes de acabar as chances, uma mensagem dever� ser exibida,
parabenizando o usu�rio.*/

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
        cout<<"Informe um n�mero ("<< tentativa <<" � tentativa):\n";
        cin>>numerodigitado;

        if(numerodigitado>numerogerado)
            cout<<"O n�mero digitado � maior que o n�mero gerado\n";
        if(numerodigitado<numerogerado)
            cout<<"O n�mero digitado � menor que o n�mero gerado\n";
    }

    while(tentativa<6 && numerodigitado!=numerogerado);
    if (numerodigitado==numerogerado){
        cout<<"Par�bens!!! Voc� acertou!!"<<tentativa<<endl;
    }
    else
    {
        cout<<"Voc� n�o acertou, o n�mero gerado �: "<<numerogerado<<endl;
    }




}
