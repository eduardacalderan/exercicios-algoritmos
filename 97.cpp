#include <iostream>
#include <ctime>

using namespace std;

#define TAM 80

/*97) Escrever um algoritmo que gere um vetor de 80 posi��es com valores no intervalo de 0 a
100. Encontrar o maior valor do vetor e sua posi��o/�ndice; mostr�-lo juntamente com sua
posi��o.
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
    cout << "Maior n�mero: " << maior << endl;
    cout << "Posi��o do maior n�mero: " << posicao << endl;
}


