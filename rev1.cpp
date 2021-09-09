#include <iostream>
#include<string>

using namespace std;

/*1) Construa um algoritmo que leia o peso do produto e o estado de destino. Em seguida, calcule
o valor de frete, segundo a tabela abaixo.*/

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    float pp;
    int ed;

    cout << "Informe o peso do produto em kg: ";
    cin >> pp;

    cout << "Informe o estado de destino: \n 1- RS \n 2- SC \n 3- PR \n";
    cin >> ed;

    switch(ed){
    case 1:
    if (pp < 2){
        cout << "Valor do frete: R$ 8,10";
    } else if (pp >=2 && pp < 3){
        cout << "Valor do frete: R$ 8,70";
    } else if (pp >= 3 && pp < 4){
        cout << "Valor do frete: R$ 9,20";
    }
    break;

    case 2:
    if (pp < 2){
        cout << "Valor do frete: R$ 9,40";
    } else if (pp >= 2 && pp < 3){
        cout << "Valor do frete: R$ 10,30";
    } else if (pp >= 3 && pp < 4){
        cout << "Valor do frete: R$ 11,20";
    }
    break;

    case 3:
    if (pp < 2){
        cout << "Valor do frete: R$ 11,10";
    } else if (pp >=2 && pp < 3){
        cout << "Valor do frete: R$ 12,20";
    } else if (pp >= 3 && pp < 4){
        cout << "Valor do frete: R$ 13,40";
    }
    break;

    default:
    cout << "Digite um estado válido.";
    }
}
