#include <iostream>
#include<string>

using namespace std;

/*5) Utilizando o comando switch, construa um programa que receba dois n�meros e execute as
opera��es listadas a seguir de acordo com a escolha do usu�rio:
Se a op��o digitada for inv�lida, mostrar uma mensagem de erro e terminar
a execu��o do programa.*/

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int escolha;
    float n1, n2, resultado;

    cout << "digite um n�mero: ";
    cin >> n1;

    cout << "digite outro n�mero: ";
    cin >> n2;

    cout<<"\n1 M�dia\n2 Subtra��o\n3 Multiplica��o\n4 Divis�o\n";

    cout<<"Digite o operador de acordo com a opera��o\n";
    cin>>escolha;

    switch(escolha)
    {
    case 1:
        resultado=(n1+n2)/2;
        cout<<"A m�dia entre os n�meros � "<<resultado<<endl;
        break;
    case 2:
         resultado=n1-n2;
         cout<<"A diferen�a entre os n�meros � "<<resultado<<endl;
        break;
    case 3:
        resultado=n1*n2;
        cout<<"O produto entre os n�meros � "<<resultado<<endl;
         break;
    case 4:
        resultado= (float) n1/n2;
        cout<<"A divis�o entre os n�meros � "<<resultado<<endl;
         break;
    default:
        cout<<"Operador n�o encontrado!"<<endl;
    }

}
