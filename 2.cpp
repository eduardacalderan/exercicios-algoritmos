#include <iostream>
#include<iomanip>

using namespace std;

/*Faça um algoritmo que calcule o valor da parcela do empréstimo a ser pago por um cliente.
O empréstimo é concedido seguindo os critérios da tabela abaixo. O usuário deverá informar a sua idade, o tipo do cliente
(P - Prime ou C - Convencional), o valor do empréstimo desejado e a quantidade de parcelas.
O programa deve mostrar se o valor do empréstimo desejado está disponível, conforme o valor máximo do empréstimo
(terceira coluna da tabela). Além disso, se o empréstimo estiver disponível, o programa deverá exibir o valor da parcela sem taxas
e o valor da parcela acrescidos de taxas (cliente Prime paga 4,2%, cliente Convencional paga 5,3%).*/

int main () {

    setlocale (LC_ALL, "Portuguese");
    char cliente;
    int idade, parcelas;
    float valor;


    cout << "Informe a sua idade: ";
    cin >> idade;

    cout << "Informe o tipo de cliente que és (P: PRIME C: CONVENCIONAL): ";
    cin >> cliente;
    cliente = toupper(cliente);

    cout << "Informe o valor desejado para empréstimo: ";
    cin >> valor;

    cout << "Informe a quantidade de parcelas desejadas: ";
    cin >> parcelas;

    if (idade >= 18 && idade <= 30 && cliente=='C' && valor <= 90000) {
        cout << "O valor de empréstimo requerido está disponível" << endl;
        cout << "O valor da parcela sem taxas será de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, há um acrescimo de 5,3% em cima de cada parcela. Já para clientes primes, esse acrescimo é de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas será de " << ((valor/parcelas)* 0.053) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade >= 18 && idade <= 30 && cliente=='P' && valor <= 110000) {
        cout << "O valor de empréstimo requerido está disponível" << endl;
        cout << "O valor da parcela sem taxas será de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, há um acrescimo de 5,3% em cima de cada parcela. Já para clientes primes, esse acrescimo é de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas será de " << ((valor/parcelas)* 0.042) + (valor/parcelas) << " reais" << endl;
    }

     else if (idade >= 31 && idade <= 45 && cliente=='C' && valor <= 67000) {
        cout << "O valor de empréstimo requerido está disponível" << endl;
        cout << "O valor da parcela sem taxas será de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, há um acrescimo de 5,3% em cima de cada parcela. Já para clientes primes, esse acrescimo é de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas será de " << ((valor/parcelas)* 0.053) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade >= 31 && idade <= 45 && cliente=='P' && valor <= 87000) {
        cout << "O valor de empréstimo requerido está disponível" << endl;
        cout << "O valor da parcela sem taxas será de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, há um acrescimo de 5,3% em cima de cada parcela. Já para clientes primes, esse acrescimo é de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas será de " << ((valor/parcelas)* 0.042) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade >= 46 && idade <= 60 && cliente=='C' && valor <= 39000) {
        cout << "O valor de empréstimo requerido está disponível" << endl;
        cout << "O valor da parcela sem taxas será de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, há um acrescimo de 5,3% em cima de cada parcela. Já para clientes primes, esse acrescimo é de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas será de " << ((valor/parcelas)* 0.053) + (valor/parcelas) << " reais" << endl;
    }

     else if (idade >= 46 && idade <= 60 && cliente=='P' && valor <= 59000) {
        cout << "O valor de empréstimo requerido está disponível" << endl;
        cout << "O valor da parcela sem taxas será de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, há um acrescimo de 5,3% em cima de cada parcela. Já para clientes primes, esse acrescimo é de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas será de " << ((valor/parcelas)* 0.042) + (valor/parcelas) << " reais" << endl;
    }

     else if (idade >= 61 && idade <= 80 && cliente=='C' && valor <= 26000) {
        cout << "O valor de empréstimo requerido está disponível" << endl;
        cout << "O valor da parcela sem taxas será de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, há um acrescimo de 5,3% em cima de cada parcela. Já para clientes primes, esse acrescimo é de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas será de " << ((valor/parcelas)* 0.053) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade >= 61 && idade <= 80 && cliente=='P' && valor <= 46000) {
        cout << "O valor de empréstimo requerido está disponível" << endl;
        cout << "O valor da parcela sem taxas será de " << valor / parcelas << " reais" << endl;
        cout << "Para clientes convencionais, há um acrescimo de 5,3% em cima de cada parcela. Já para clientes primes, esse acrescimo é de 4,2% em cima de cada parcela" << endl;
        cout << "O valor da parcela com taxas será de " << ((valor/parcelas)* 0.042) + (valor/parcelas) << " reais" << endl;
    }

    else if (idade < 18 || idade > 80 && cliente == 'P' || cliente=='C') {
        cout << "Empréstimo não disponível para pessoas menores de 18 anos e maiores de 80 anos!";
    }

    else if (cliente != 'C' && cliente != 'P') {
        cout << "Erro: você não é um cliente convencional, nem um cliente prime!";
    }
    else {
        cout << "Valor de empréstimo inválido!";
    }
}
