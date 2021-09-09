#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

 /*2) A Faça um algoritmo que leia o código do produto, a quantidade em estoque, o preço de custo
e o tipo (S – serviço, P - produto). Com base na quantidade de produtos em estoque (Qt.
Estoque) e preço de custo (Preço Custo), o programa deve calcular e mostrar o valor do total
de produtos em estoque (Valor Estoque), e também o preço de venda com base nas seguintes
informações:
• Se o tipo for P de Produto, o preço de venda é calculado com 90% sobre o preço de
custo.
• Se o tipo S de Serviço, o preço de venda é calculado com 65% sobre o preço de custo*/

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int cod, qt;
    float pcusto, venda, estoque;
    char tipo;

    cout << "Informe o código do produto: ";
    cin >> cod;

    cout << "Informe a quantidade de produtos em estoque: ";
    cin >> qt;

    cout << "Informe o preço de custo do produto: ";
    cin >> pcusto;

    cout << "Informe o tipo de produto: \n S - Serviços \n P - Produto \n";
    cin >> tipo;
    tipo = toupper(tipo);

    estoque = qt*pcusto;

    cout << fixed << setprecision(2);
    cout << "Valor total de produtos em estoque: R$ " << estoque << "\n";

    switch(tipo){
    case 'S':
    venda = pcusto*1.65;
    break;

    case 'P':
    venda = pcusto*1.9;
    break;

    default:
    cout << "Digite um tipo válido.";
    }

    cout << fixed << setprecision(2);
    cout << "Valor de venda:  R$ " << venda;

}
