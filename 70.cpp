#include <iostream>
#include <locale>

using namespace std;


/*70) Faça um programa que lê um número inteiro N e mostra a soma dos números pares de 1
até N, sendo 2 ≤ N ≤ 20.
Observação: Caso o valor de N seja inválido, o programa deve mostrar uma mensagem de
erro e um novo valor deve ser lido, até que um valor válido seja digitado pelo usuário!
*/

int main() {
  setlocale (LC_ALL, "Portuguese");
  int n, soma=0, contador=0;

  do{
        cout << "Informe um número entre 2 e 20: ";
        cin >> n;
  }while(n<2 || n>20);

    while (contador<=n){
        if(contador%2 == 0)
        soma = soma + contador;
        contador++;
        }

    cout<<"Soma dos números pares de 1 a " << n << ": "<<soma<<endl;



}
