#include <iostream>
#include <ctime>

using namespace std;

#define TAM 30

/*98) Escrever um algoritmo e um programa que gere um vetor V[30] com valores no intervalo
de 0 a 100 e mostre os valores gerados. Contar quantos valores do vetor s�o pares e
quantos s�o �mpares. Mostrar estas informa��es, juntamente com a m�dia dos valores do
vetor.*/

int main () {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));

    int v[TAM], pares=0, impares=0, media=0;

    for(int i = 0; i < TAM; i++) {
        v[i] = rand()%101;
        cout << v[i] <<endl;

        if (v[i] % 2 == 0) {
           pares++;
        } else{
            impares++;
         }
         media+=v[i];
    }
    cout << "quantidade de n�meros pares: " << pares << endl;
    cout << "quantidade de n�meros �mpares: " << impares << endl;
    cout << "m�dia dos valores: " << media/30 << endl;;
}
