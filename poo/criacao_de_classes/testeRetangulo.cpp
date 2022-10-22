// Arquivo de teste da classe Retangulo
#include <iostream>
#include "Retangulo.hpp"    // include do arquivo de definição da classe Retangulo

using namespace std;

int main()
{
    // uso do atributo estático antes mesmo de instanciar objeto
    // atributo estático está relacionado com a classe e é
    // compartilhado entre todos os objetos instanciados
    cout << "\n\n contRetangulos: " << Retangulo::contRetangulos;

    Retangulo ret1 = Retangulo(5,2);  // instanciação de objeto
    Retangulo ret2;                   // instanciação com valores padrões
    Retangulo ret3;                   // instanciação com valores padrões  

    // exibe informaçõesde do objeto ret1
    cout << "\n **** RETANGULO 1 ***";
    ret1.imprimir();

    // exibe informaçõesde do objeto ret2
    cout << "\n\n **** RETANGULO 2 ***";
    ret2.imprimir();

    // exibe valor do atributo contRetangulo
    // contados de objetos da classe Retangulo
    cout << "\n\n contRetangulos: " << Retangulo::contRetangulos;

    return 0;
}





