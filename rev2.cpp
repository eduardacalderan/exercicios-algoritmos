#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

 /*2) A Fa�a um algoritmo que leia o c�digo do produto, a quantidade em estoque, o pre�o de custo
e o tipo (S � servi�o, P - produto). Com base na quantidade de produtos em estoque (Qt.
Estoque) e pre�o de custo (Pre�o Custo), o programa deve calcular e mostrar o valor do total
de produtos em estoque (Valor Estoque), e tamb�m o pre�o de venda com base nas seguintes
informa��es:
� Se o tipo for P de Produto, o pre�o de venda � calculado com 90% sobre o pre�o de
custo.
� Se o tipo S de Servi�o, o pre�o de venda � calculado com 65% sobre o pre�o de custo*/

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    int cod, qt;
    float pcusto, venda, estoque;
    char tipo;

    cout << "Informe o c�digo do produto: ";
    cin >> cod;

    cout << "Informe a quantidade de produtos em estoque: ";
    cin >> qt;

    cout << "Informe o pre�o de custo do produto: ";
    cin >> pcusto;

    cout << "Informe o tipo de produto: \n S - Servi�os \n P - Produto \n";
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
    cout << "Digite um tipo v�lido.";
    }

    cout << fixed << setprecision(2);
    cout << "Valor de venda:  R$ " << venda;

}
