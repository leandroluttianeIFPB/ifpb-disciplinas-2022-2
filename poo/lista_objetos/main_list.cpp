#include <iostream>
#include <list>
#include <iterator>

#include "Quadrado.hpp"

using namespace std;

int main(void)
{
    float lado;
    int continuar;

    list<Quadrado> listaQuadrados;

    while(true)
    {

        cout << "\n Deseja adicionar novo quadrado (1 - Sim, 0 - Nao): ";
        cin >> continuar;

        if (!continuar)
        {
            break;
        }

        cout << " Digite o lado do quadrado: ";
        cin >> lado;

        listaQuadrados.push_back(Quadrado(lado));
    }

    int nQuadrado = 1;

    for (list<Quadrado>::iterator quad = listaQuadrados.begin(); quad != listaQuadrados.end(); quad++ )
    {
        cout << "\n **** QUADRADO " << nQuadrado++ << " ****";
        cout << "\n  # Lado: " << quad->getLado();
        cout << "\n  # Area: " << quad->calculaArea() << endl;   
    }

    return EXIT_SUCCESS;
}