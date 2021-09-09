#include <iostream>
#include <iomanip>

using namespace std;
/*75) Supondo que a popula��o de uma cidade �A� seja de 90000, com taxa de crescimento de 3,1% ao
m�s, e que a popula��o de uma cidade �B� seja de 200000, com taxa de crescimento de 1,5% ao
m�s. Escrever um algoritmo que calcule e escreva com quantos meses a cidade �A� ultrapassaria
em popula��o da cidade �B�, mantendo as taxas atuais de crescimento. Mostrar as popula��es das
cidades.*/

int main (){

    setlocale(LC_ALL, "Portuguese");

    int populacaoCidadeA, populacaoCidadeB, aumentoPopulacaoA, aumentoPopulacaoB, meses;
    meses=1;
    populacaoCidadeA = 90000;
    populacaoCidadeB = 200000;

    aumentoPopulacaoA = (populacaoCidadeA * 0.031) + populacaoCidadeA;
    aumentoPopulacaoB = (populacaoCidadeB * 0.015) + populacaoCidadeB;
    do{
        aumentoPopulacaoA = (aumentoPopulacaoA*0.031) + aumentoPopulacaoA;
        aumentoPopulacaoB = (aumentoPopulacaoB*0.015) + aumentoPopulacaoB;
        meses++;
    }while(aumentoPopulacaoA<aumentoPopulacaoB);

    cout << "Em " << meses << " meses, a cidade A ultrapassar� a cidade B em popula��o. A cidade A ter� " << aumentoPopulacaoA << " habitantes, \nenquanto a cidade B ter� " << aumentoPopulacaoB << " habitantes";

}
