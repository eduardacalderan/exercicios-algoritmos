#include <iostream>
using namespace std;

/*4) Criar um algoritmo que a partir da idade e peso do paciente calcule a dosagem de determinado
medicamento e mostre a receita informando quantas gotas do medicamento o paciente deve
tomar por dose. Considere que o medicamento em questão possui 500 mg por ml, e que cada
ml corresponde a 20 gotas.
-Adultos ou adolescente desde 12 anos, inclusive,
 se tiver peso igual ou acima de 60 kg devem tomar 1000 mg
 com peso abaixo de 60 kg devem tomar 875 mg.
- Para crianças e adolescente abaixo de 12 anos a dosagem é calculada pelo peso corpóreo
conforme a tabela a seguir:*/

int main ()
{
    setlocale (LC_ALL, "Portuguese");
    float peso, dosagem, gotas;
    int idade;

    cout << "Informe a idade do paciente: ";
    cin >> idade;

    cout << "Informe o peso do paciente em kg: ";
    cin >> peso;

    if(idade < 12){
        if(peso>=5 && peso<=9){
            dosagem = 125.0/500.0;
            gotas = 20.0*dosagem;
            cout << dosagem << " ml e " << gotas << " gotas.";
        } else if(peso>9 && peso<=16){
            dosagem = 250.0/500.0;
            gotas = 20.0*dosagem;
            cout << dosagem << " ml e " << gotas << " gotas.";
        } else if(peso> 16 && peso<=24){
            dosagem = 375.0/500.0;
            gotas = 20.0*dosagem;
            cout << dosagem << " ml e " << gotas << " gotas.";
        } else if(peso>=24 && peso<=30){
            dosagem = 500.0/500.0;
            gotas = 20.0*dosagem;
            cout << dosagem << " ml e " << gotas << " gotas.";
        } else if(peso>30){
            dosagem = 750.0/500.0;
            gotas = 20.0*dosagem;
            cout << dosagem << " ml e " << gotas << " gotas.";
        }
    } else {
        if(peso>=60){
            dosagem = 1000.0/500.0;
            gotas = 20.0*dosagem;
            cout << dosagem << " ml e " << gotas << " gotas.";
        } else {
            dosagem = 875.0/500.0;
            gotas = 20.0*dosagem;
            cout << dosagem << " ml e " << gotas << " gotas.";
        }
    }
}
