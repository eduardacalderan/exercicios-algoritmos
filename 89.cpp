#include <iostream>
#include <iomanip>

using namespace std;

/*89) Faça um programa que receba dez números inteiros e mostre a quantidade de números primos
dentre os números que foram digitados.*/

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int num, soma, resultado=0, div=2, primo=0;

    for(int i=1; i<=10; i++)
    {
        cout << "Informe o " << i << "° número: ";
        cin >> num;

        soma += num;

        if(num%div==0)
        {
            resultado++;
        }

        if(resultado==1)
        {
            cout<< num <<": É um número primo!"<< endl;
            primo++;
        }
        else
        {
            cout<< num << ": Não é um número primo!"<< endl;
        }
    }
}
