#include <iostream>
#include "Ponto.hpp"

using namespace std;

int main()
{
    Ponto pontoA;               // instancia objeto na origem
    Ponto pontoB = Ponto(5, 5); // instancia Ponto nas coordenadas x = 5 e y = 5

    pontoA.setCoord_X(-10); // define valor para coordenada X de pontoA
    pontoA.setCoord_Y(10);  // define valor para coordenada X de pontoA

    // exibe atributos de pontoA, utilizando métodos get
    cout << "\n Coord_X: " << pontoA.getCoord_X();
    cout << "\n Coord_Y: " << pontoA.getCoord_Y() << endl;

    // exibe estado do objeto pontA
    pontoA.printPonto();

    // calcula distância entre pontoA e pontoB que é igual a distância entre pontoB e pontoA
    cout << "\n Distancia entre A e B: " << pontoA.distanciaPonto(pontoB)
         << "\n Distancia entre B e A: " << pontoB.distanciaPonto(pontoA) << endl;

    return 0;
}