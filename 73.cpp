#include <iostream>
#include <iomanip>
using namespace std;

/*Jo�o possui R$ 1.800,00. Gostaria de comprar um computador que custa R$ 2.000. Ele gosta de
aplicar seu dinheiro na caderneta de poupan�a, que paga sempre 1,5% ao m�s. Supondo que o
pre�o do computador n�o mude, escreva um algoritmo que calcule em quantos meses Jo�o ir�
poder comprar o computador, mostrando a evolu��o de seu saldo na poupan�a, conforme o modelo abaixo:*/

using namespace std;
int main()

{
    setlocale(LC_ALL,"Portuguese");

    int mes=0;
    float juros,dinJoao=1800;

    cout<<fixed<<setprecision(2);
    cout<<"M�s\tSaldo \tJuros \t\Saldo Atual\n";

    do
    {
        mes++;
        juros=(1.5/100.0)*dinJoao;

        cout << mes << "�\t"<< dinJoao << "\t\t" << juros << "\t\t";
        dinJoao=dinJoao+juros;
        cout<<dinJoao<<endl;
    }
    while(dinJoao<2000);
    cout<<"Ser�o necess�rios "<<mes<<" para comprar o pc";
}
