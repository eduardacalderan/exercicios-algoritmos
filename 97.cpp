#include <iostream>
#include <ctime>

using namespace std;

#define TAM 80

/*97) Escrever um algoritmo que gere um vetor de 80 posições com valores no intervalo de 0 a
100. Encontrar o maior valor do vetor e sua posição/índice; mostrá-lo juntamente com sua
posição.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int i;
    float v[TAM], maior, posicao;

    for( i = 0; i < TAM; i++)
    {
        v[i] = rand()%101;


        cout << v[i] << endl;

        if(i==0)
        {
            maior=v[i];
            posicao=0;
        }
        else if (v[i]>maior)
        {
            maior=v[i];
            posicao=i;
            posicao++;
        }
    }
    cout << "Maior número: " << maior << endl;
    cout << "Posição do maior número: " << posicao << endl;
}


