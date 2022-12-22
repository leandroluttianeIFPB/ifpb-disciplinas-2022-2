#include <iostream>
#include <list>         // include para utilização de lista
#include <iterator>     // include para uso de iterator (percorrer lista)

#include "Quadrado.hpp"  // include da classe Quadrado

using namespace std;

int main(void)
{
    float lado;     // armazena lado informado pelo usuário
    int continuar;  // utilizado para definir condição de parada

    list<Quadrado> listaQuadrados;  // lista de objetos da classe Quadrado

    while(true)     // laço infinito (vai ser finalizado com break)
    {
        // Deseja inserir novo quadrado na lista?
        cout << "\n Deseja adicionar novo quadrado (1 - Sim, 0 - Nao): ";
        cin >> continuar;

        if (!continuar)   // se não deseja adicionar
        {
            break;  // comando break, finaliza o laço while
        }

        // solicita valor do lado do Quadrado
        cout << " Digite o lado do quadrado: ";
        cin >> lado;

        // adiciona novo objeto Quadrado na lista
        listaQuadrados.push_back(Quadrado(lado));
    }

    int nQuadrado = 1;   // número do quadrado exibido

    // for com uso de iterador para percorrer a lista e exibir
    // informações dos objetos (quad é um ponteiro, begin retorna ponteiro para o primeiro,
    // end retorna ponteiro para o último)
    for (list<Quadrado>::iterator quad = listaQuadrados.begin(); quad != listaQuadrados.end(); quad++)
    {
        cout << "\n **** QUADRADO " << nQuadrado++ << " ****";

        // como quad é ponteiro, utiliza-se o operador "->" para efetuar
        // a chamada dos métodos dos objetos
        cout << "\n  # Lado: " << quad->getLado();
        cout << "\n  # Area: " << quad->calculaArea() << endl;   
    }

    return EXIT_SUCCESS;
}