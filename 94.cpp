#include <iostream>
#include <ctime>

using namespace std;

#define TAM 10

/*94) Escrever um algoritmo que gere um vetor V[10] com valores no intervalo de 0 a 100 e
mostre os valores gerados. A seguir, contar quantos valores de V são maiores que 40.*/

int main() {

    setlocale (LC_ALL, "Portuguese");
    srand(time(NULL));
    int v[TAM], x, num=0;

    for (int i = 0; i<TAM; i++ ) {
        v[i] = rand()%101;
        x=v[i];
        cout<<"O vetor na posição "<< i<<" é igual a: "<< v[i] << ";"<< endl;
         if(x>40){
            num++;
         }
    }
    cout<< "A quantidade de numeros no vetor, maiores que 40 é: "<< num << endl;
}
