#include <iostream>
using namespace std;



/*Crie um algoritmo para calcular o consumo de ração dos animais listados na tabela abaixo. Para realizar os cálculos tenha como base o consumo de ração no intervalo de 5 dias (segunda coluna da tabela).

a) Calcule e mostre a quantidade em quilogramas (kg) de ração consumida durante uma semana (7 dias) para cada animal.

b) Calcule e mostre a quantidade em gramas de ração consumida por todos os animais juntos durante 30 dias.*/


int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int animal;


    cout << "Digite o número do animal para receber a informação de quantos KG de ração ele consome em 7 dias:\n 1 para cão\n 2 para gato\n 3 para chinchila\n 4 para saber o consumo de ração em gramas de TODOS esses animais juntos em 1 MÊS (30 DIAS)\n ";
    cin >> animal;

    switch (animal)
    {
    case 1:
        cout << "Um cão consome " << (float) 7/5 * (2) << "kg de ração em 7 dias.";
        break;
    case 2:
        cout << "Um gato consome " << (float) 7/5 * (1.5) << "kg de ração em 7 dias.";
        break;
    case 3:
        cout << "Uma chinchila consome " << (float) 7/5 * (0.7) << "kg de ração em 7 dias.";
        break;
    case 4:
        cout << "Todos os animais juntos consomem " << (float) 4200/5 * (30) << " gramas de ração em 1 MÊS (30 DIAS).";
             break;
    default:
        cout << "Erro: o número fornecido não corresponde à nenhum animal!";

    }



}
