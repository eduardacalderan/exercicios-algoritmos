#include <iostream>

using namespace std;

/*87) Escrever um algoritmo que leia um n�mero inteiro e positivo M e um valor para a vari�vel N.
Escrever o valor da pot�ncia de N
M. Deve-se apenas utilizar multiplica��es.*/

int main(){

        setlocale(LC_ALL, "Portuguese");

        int m;
        float n, potencia=1;

        cout << "Digite um n�mero inteiro e positivo: ";
        cin >> m;

        cout << "Digite um valor qualquer: ";
        cin >> n;

        for(int i=1; i<=m; i++) {
            potencia = potencia*n;
            cout << potencia << endl;
        }



}

