#include <iostream>
using namespace std;

#define TAM 7

/*93) Escrever um algoritmo que l� um vetor A[7] com valores inteiros. A seguir, leia um n�mero
qualquer para a vari�vel �X�. Contar e mostrar quantas vezes a vari�vel �X� aparece no
vetor.
*/

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int a[TAM], quantidade=0;
    float x;

    cout << "Informe um n�mero: ";
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
         cout << x << " n�o apareceu!" << endl;
    } else if (quantidade==1) {
         cout << x << " apareceu " << quantidade << " vez.";
    } else {
         cout << x << " apareceu " << quantidade << " vezes.";
    }






}
