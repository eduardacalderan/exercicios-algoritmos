#include <iostream>
#include <ctime>
using namespace std;

#define TAM 50

/*95) Escrever um algoritmo que gere um vetor B[50] com valores no intervalo de 0 a 100 e
mostre os valores gerados. A seguir, encontrar o menor e o maior armazenados no vetor.
Mostrar os valores encontrados.*/

int main()
{

    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    float b[TAM], menor, maior;

    for(int i = 0; i < TAM; i++)
    {
        b[i] = rand()%101;
        cout << b[i] << endl;
        if(i==0)
        {
            maior=b[i];
            menor=b[i];
        }
        else
        {
            if(b[i]>maior)
            {
                maior=b[i];
            }
            else if(b[i]<menor)
            {
                menor=b[i];
            }


        }

    }
    cout << "O maior valor encontrado é: " << maior << endl;
    cout << "O menor valor encontrado é: " << menor << endl;
}
