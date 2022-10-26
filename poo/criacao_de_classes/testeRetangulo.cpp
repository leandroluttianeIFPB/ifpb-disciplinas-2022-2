// Arquivo de teste da classe Retangulo
#include <iostream>
#include "Retangulo.hpp"    // include do arquivo de definição da classe Retangulo

using namespace std;

int main()
{
    // uso do atributo estático antes mesmo de instanciar objeto
    // atributo estático está relacionado com a classe e é
    // compartilhado entre todos os objetos instanciados
    cout << "\n\n contRetangulos: " << Retangulo::getContRetangulos();
    cout << "\n Calculo area: "     << Retangulo::calculaArea(7,4) << "\n";

    Retangulo ret1 = Retangulo(5,2);  // instanciação de objeto
    Retangulo ret2;                   // instanciação com valores padrões
    Retangulo ret3;                   // instanciação com valores padrões  

    // exibe informaçõesde do objeto ret1
    cout << "\n **** RETANGULO 1 ***";
    ret1.imprimir();

    // exibe informaçõesde do objeto ret2
    cout << "\n\n **** RETANGULO 2 ***";
    ret2.imprimir();

    {   // criação de novo escopo
        // abre e fecha chaves delimita um escopo
        
        Retangulo ret4;    // instanciação de objeto com valores padrões    
    
        // exibe informações do objeto ret4
        cout << "\n\n **** RETANGULO 4 ***";
        ret4.imprimir();
    
        // exibe a quantidade de objetos Retangulo instanciados
        cout << "\n\n contRetangulos (escopo): " << Retangulo::getContRetangulos() << "\n";

        // ao finalizar o escopo, o objeto ret4 é destruído, pois
        // quando o escopo termina este objeto deixará de existir
    }

    // exibe valor do atributo contRetangulo
    // contados de objetos da classe Retangulo
    cout << "\n\n contRetangulos: " << Retangulo::getContRetangulos();

    // chamada de método estático calculaArea
    cout << "\n Calculo area: " << Retangulo::calculaArea(2,5);
    
    // chamada de método estático calculaArea
    // CUIDADO: apesar do método ter sido chamado a partir do objeto
    // ret1, o método não calcula a área do objeto Retangulo ret1.
    // O método calcula a área de um suposto retângulo (não objeto) 
    // de base 5 e altura 3 
    cout << "\n Calculo area: " << ret1.calculaArea(5,3);

    return 0;
}