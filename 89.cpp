#include <iostream>
#include <iomanip>

using namespace std;

/*89) Fa�a um programa que receba dez n�meros inteiros e mostre a quantidade de n�meros primos
dentre os n�meros que foram digitados.*/

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int num, soma, resultado=0, div=2, primo=0;

    for(int i=1; i<=10; i++)
    {
        cout << "Informe o " << i << "� n�mero: ";
        cin >> num;

        soma += num;

        if(num%div==0)
        {
            resultado++;
        }

        if(resultado==1)
        {
            cout<< num <<": � um n�mero primo!"<< endl;
            primo++;
        }
        else
        {
            cout<< num << ": N�o � um n�mero primo!"<< endl;
        }
    }
}
