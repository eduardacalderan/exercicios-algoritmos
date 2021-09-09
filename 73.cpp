#include <iostream>
#include <iomanip>
using namespace std;

/*João possui R$ 1.800,00. Gostaria de comprar um computador que custa R$ 2.000. Ele gosta de
aplicar seu dinheiro na caderneta de poupança, que paga sempre 1,5% ao mês. Supondo que o
preço do computador não mude, escreva um algoritmo que calcule em quantos meses João irá
poder comprar o computador, mostrando a evolução de seu saldo na poupança, conforme o modelo abaixo:*/

using namespace std;
int main()

{
    setlocale(LC_ALL,"Portuguese");

    int mes=0;
    float juros,dinJoao=1800;

    cout<<fixed<<setprecision(2);
    cout<<"Mês\tSaldo \tJuros \t\Saldo Atual\n";

    do
    {
        mes++;
        juros=(1.5/100.0)*dinJoao;

        cout << mes << "º\t"<< dinJoao << "\t\t" << juros << "\t\t";
        dinJoao=dinJoao+juros;
        cout<<dinJoao<<endl;
    }
    while(dinJoao<2000);
    cout<<"Serão necessários "<<mes<<" para comprar o pc";
}
