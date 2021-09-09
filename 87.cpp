#include <iostream>

using namespace std;

/*87) Escrever um algoritmo que leia um número inteiro e positivo M e um valor para a variável N.
Escrever o valor da potência de N
M. Deve-se apenas utilizar multiplicações.*/

int main(){

        setlocale(LC_ALL, "Portuguese");

        int m;
        float n, potencia=1;

        cout << "Digite um número inteiro e positivo: ";
        cin >> m;

        cout << "Digite um valor qualquer: ";
        cin >> n;

        for(int i=1; i<=m; i++) {
            potencia = potencia*n;
            cout << potencia << endl;
        }



}

