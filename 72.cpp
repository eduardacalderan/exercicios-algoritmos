#include <iostream>
#include <locale>
using namespace std;

/*72) Escrever um programa que l� um n�mero n�o determinado de valores inteiros e positivos, maiores
que 0 e menores que 5000 com base nos seguintes crit�rios:
a) O programa deve parar de ler quando o n�mero digitado for 0.
b) No final, o programa deve mostrar a quantidade de n�meros lidos, juntamente com a m�dia
destes.*/

using namespace std;
int main()

{
    setlocale(LC_ALL,"Portuguese");

    int numero,quantidade;
    float media,soma;

    quantidade=0;
    soma=0;
    do
    {
        cout<<"Informe um n�mero inteiro";
        cin>>numero;
        if (numero>0 && numero<5000);
        {
            quantidade++;
            soma=soma+numero;

        }
        else if (numero<0 && numero>5000);

        {
            cout<<"N�mero inv�lido.Digite no intervalo de 1 a 4999";
        }

    }
    while (numero!= 0);
    media=soma/quantidade;
    cout<<"A quantidade de n�meros lidos �\n"<<quantidade<<endl;
    cout<<"A m�dia �"<<media<<endl;
}

