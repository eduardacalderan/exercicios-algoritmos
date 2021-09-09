#include <iostream>
#include<iomanip>

using namespace std;

/*Fa�a um algoritmo que calcule o valor da parcela do empr�stimo a ser pago por um cliente.
O empr�stimo � concedido seguindo os crit�rios da tabela abaixo. O usu�rio dever� informar a sua idade, o tipo do cliente
(P - Prime ou C - Convencional), o valor do empr�stimo desejado e a quantidade de parcelas.
O programa deve mostrar se o valor do empr�stimo desejado est� dispon�vel, conforme o valor m�ximo do empr�stimo
(terceira coluna da tabela). Al�m disso, se o empr�stimo estiver dispon�vel, o programa dever� exibir o valor da parcela sem taxas
e o valor da parcela acrescidos de taxas (cliente Prime paga 4,2%, cliente Convencional paga 5,3%).*/

int main () {

    setlocale (LC_ALL, "Portuguese");
    char cliente;
    int idade, parcelas;
    float valor;


    cout << "Informe a sua idade: ";
    cin >> idade;

    cout << "Informe o tipo de cliente que �s (P: PRIME C: CONVENCIONAL): ";
    cin >> cliente;
    cliente = toupper(cliente);

    cout << "Informe o valor desejado para empr�stimo: ";
    cin >> valor;

    cout << "Informe a quantidade de parcelas desejadas: ";
    cin >> parcelas;

    if (idade >= 18 && idade <= 30 && cliente=='C' && valor <= 90000) {
        cout << "O valor de empr�stimo requerido est� dispon�vel" << endl;
        cout << "O valor da parcela sem taxas ser� de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, h� um acrescimo de 5,3% em cima de cada parcela. J� para clientes primes, esse acrescimo � de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas ser� de " << ((valor/parcelas)* 0.053) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade >= 18 && idade <= 30 && cliente=='P' && valor <= 110000) {
        cout << "O valor de empr�stimo requerido est� dispon�vel" << endl;
        cout << "O valor da parcela sem taxas ser� de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, h� um acrescimo de 5,3% em cima de cada parcela. J� para clientes primes, esse acrescimo � de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas ser� de " << ((valor/parcelas)* 0.042) + (valor/parcelas) << " reais" << endl;
    }

     else if (idade >= 31 && idade <= 45 && cliente=='C' && valor <= 67000) {
        cout << "O valor de empr�stimo requerido est� dispon�vel" << endl;
        cout << "O valor da parcela sem taxas ser� de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, h� um acrescimo de 5,3% em cima de cada parcela. J� para clientes primes, esse acrescimo � de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas ser� de " << ((valor/parcelas)* 0.053) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade >= 31 && idade <= 45 && cliente=='P' && valor <= 87000) {
        cout << "O valor de empr�stimo requerido est� dispon�vel" << endl;
        cout << "O valor da parcela sem taxas ser� de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, h� um acrescimo de 5,3% em cima de cada parcela. J� para clientes primes, esse acrescimo � de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas ser� de " << ((valor/parcelas)* 0.042) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade >= 46 && idade <= 60 && cliente=='C' && valor <= 39000) {
        cout << "O valor de empr�stimo requerido est� dispon�vel" << endl;
        cout << "O valor da parcela sem taxas ser� de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, h� um acrescimo de 5,3% em cima de cada parcela. J� para clientes primes, esse acrescimo � de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas ser� de " << ((valor/parcelas)* 0.053) + (valor/parcelas) << " reais" << endl;
    }

     else if (idade >= 46 && idade <= 60 && cliente=='P' && valor <= 59000) {
        cout << "O valor de empr�stimo requerido est� dispon�vel" << endl;
        cout << "O valor da parcela sem taxas ser� de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, h� um acrescimo de 5,3% em cima de cada parcela. J� para clientes primes, esse acrescimo � de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas ser� de " << ((valor/parcelas)* 0.042) + (valor/parcelas) << " reais" << endl;
    }

     else if (idade >= 61 && idade <= 80 && cliente=='C' && valor <= 26000) {
        cout << "O valor de empr�stimo requerido est� dispon�vel" << endl;
        cout << "O valor da parcela sem taxas ser� de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, h� um acrescimo de 5,3% em cima de cada parcela. J� para clientes primes, esse acrescimo � de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas ser� de " << ((valor/parcelas)* 0.053) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade >= 61 && idade <= 80 && cliente=='P' && valor <= 46000) {
        cout << "O valor de empr�stimo requerido est� dispon�vel" << endl;
        cout << "O valor da parcela sem taxas ser� de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, h� um acrescimo de 5,3% em cima de cada parcela. J� para clientes primes, esse acrescimo � de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas ser� de " << ((valor/parcelas)* 0.042) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade < 18 || idade > 80 && cliente == 'P' || cliente=='C') {
        cout << "Empr�stimo n�o dispon�vel para pessoas menores de 18 anos e maiores de 80 anos!";
    }

    else if (cliente != 'C' && cliente != 'P') {
        cout << "Erro: voc� n�o � um cliente convencional, nem um cliente prime!";
    }
    else {
        cout << "Valor de empr�stimo inv�lido!";
    }
}
