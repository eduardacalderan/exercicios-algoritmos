#include <iostream>


using namespace std;

/*86) Faça um programa que receba a idade e o peso de quinze pessoas. O programa deve calcular e
mostrar o valor médio de idade e o valor médio de peso das pessoas da mesma faixa etária. As
faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a 30 anos e de 31 anos para cima.
*/

int main()
{

    setlocale(LC_ALL, "Portuguese");
    int idade;
    float somaIdade1, somaIdade2, somaIdade3, somaIdade4;
    float somaIdade, somaPeso, peso, primeiraMI, segundaMI, terceiraMI, quartaMI, somaPrimeiroPeso, somaSegundoPeso, somaTerceiroPeso, somaQuartoPeso;
    float mediaIdade1, mediaIdade2, mediaIdade3, mediaIdade4;
    float somaMI1, somaMI2, somaMI3, somaMI4, mediaPeso1, mediaPeso2, mediaPeso3, mediaPeso4;
    for(int i=1; i<=15; i++)
    {
        cout << "Idade da " << i << "° pessoa: ";
        cin >> idade;
        cout << "Peso da " << i << "° pessoa: ";
        cin >> peso;


        if(idade < 11)
        {
            somaIdade1 += idade;
            somaPrimeiroPeso += peso;
            primeiraMI++;
        }
        else if(idade >= 11 && idade <= 20)
        {
            somaIdade2 += idade;
            somaSegundoPeso += peso;
            segundaMI++;
        }
        else if(idade >= 21 && idade <= 30)
        {
            somaIdade3 += idade;
            somaTerceiroPeso += peso;
            terceiraMI++;
        }
        else
        {
            somaIdade4 += idade;
            somaQuartoPeso += peso;
            quartaMI++;
        }
    }

    if(primeiraMI>0)
    {
        mediaPeso1 = somaPrimeiroPeso / primeiraMI;
        somaMI1 = somaIdade1 / primeiraMI;
        cout << "Média de idade entre 1 e 10 anos: " << somaMI1  << endl;
        cout << "Média de peso entre 1 e 10 anos: " << mediaPeso1  << endl;


    }

    else if (segundaMI>0)
    {
        mediaPeso2 = somaSegundoPeso / segundaMI;
        somaMI2 = somaIdade2 / segundaMI;
        cout << "Média de idade entre 11 e 20 anos: " <<  somaMI2  << endl;
        cout << "Média de peso entre 11 e 20 anos: " << mediaPeso2  << endl;
    }

    else if (terceiraMI>0)
    {
        somaMI3 = somaIdade3 / terceiraMI;
        mediaPeso3 = somaTerceiroPeso /terceiraMI;
        cout << "Média de idade entre 21 e 30 anos: " << somaMI3  << endl;
        cout << "Média de peso entre 21 e 30 anos: " << mediaPeso3  << endl;
    }

    else if  (quartaMI>0)
    {

        somaMI4 = somaIdade4 / quartaMI;
        mediaPeso4 = somaQuartoPeso / quartaMI;
        cout << "Média de idade com mais de 30 anos: " << somaIdade4  << endl;
        cout << "Média de peso com mais de 30  30 anos: " << mediaPeso4  << endl;
    }

}


