#include <iostream>
using namespace std;

#define TAM 7

/*93) Escrever um algoritmo que lê um vetor A[7] com valores inteiros. A seguir, leia um número
qualquer para a variável “X”. Contar e mostrar quantas vezes a variável “X” aparece no
vetor.
*/

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int a[TAM], quantidade=0;
    float x;

    cout << "Informe um número: ";
    cin >> x;

    for(int i= 0; i<TAM; i++)
    {

        cout << a[i] << endl;


        if (x==a[i])
        {
            quantidade++;

        }
    }

    if(quantidade==0) {
         cout << x << " não apareceu!" << endl;
    } else if (quantidade==1) {
         cout << x << " apareceu " << quantidade << " vez.";
    } else {
         cout << x << " apareceu " << quantidade << " vezes.";
    }






}
