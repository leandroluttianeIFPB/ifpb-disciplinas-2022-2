#include "Esfera.hpp"
#include <iostream>

using namespace std;

int main()
{
    Esfera esfera1;         // instanciação: construtor sem parâmetros
    Esfera esfera2(10);     // instanciação: construtor com parâmetros

    cout << "\n *** ESFERA 1 ***";
    esfera1.imprimir();              // exibe estado de esfera1

    cout << "\n\n *** ESFERA 2 ***";
    esfera2.imprimir();              // exibe estado de esfera2

    cout << endl;
    
    // tentativa de calcular volume de preenchimento (valor inválido de altura),
    // pois a altura máxima da esfera é 20 cm (seu diâmetro)
    float preenchimento = esfera2.volumePreenchimento(30);
    
    // cálculo de volume de preenchimento
    // altura igual ao raio da Esfera, metade do diâmetro
    // logo, o volume de preenchimento deve ser a metade do volume total da Esfera
    preenchimento = esfera2.volumePreenchimento(10);
    cout << "\n Volume Preenchimento: " << preenchimento << " cm^3" << endl;

    // tentativa de modificar o raio de esfera1 com um valor inválido
    if(!esfera1.setRaio(-5))
    {
        cout << "\n Raio de esfera1 nao modificado!";
    }

    return EXIT_SUCCESS;
}