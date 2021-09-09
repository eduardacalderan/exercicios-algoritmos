#include <iostream>
#include<string>

using namespace std;

/*5) Utilizando o comando switch, construa um programa que receba dois números e execute as
operações listadas a seguir de acordo com a escolha do usuário:
Se a opção digitada for inválida, mostrar uma mensagem de erro e terminar
a execução do programa.*/

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int escolha;
    float n1, n2, resultado;

    cout << "digite um número: ";
    cin >> n1;

    cout << "digite outro número: ";
    cin >> n2;

    cout<<"\n1 Média\n2 Subtração\n3 Multiplicação\n4 Divisão\n";

    cout<<"Digite o operador de acordo com a operação\n";
    cin>>escolha;

    switch(escolha)
    {
    case 1:
        resultado=(n1+n2)/2;
        cout<<"A média entre os números é "<<resultado<<endl;
        break;
    case 2:
         resultado=n1-n2;
         cout<<"A diferença entre os números é "<<resultado<<endl;
        break;
    case 3:
        resultado=n1*n2;
        cout<<"O produto entre os números é "<<resultado<<endl;
         break;
    case 4:
        resultado= (float) n1/n2;
        cout<<"A divisão entre os números é "<<resultado<<endl;
         break;
    default:
        cout<<"Operador não encontrado!"<<endl;
    }

}
