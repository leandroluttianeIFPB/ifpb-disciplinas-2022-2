// Arquivo de teste de uso da classe Vetor

#include "Vetor.hpp"   // include do arquivo de definição da classe Vetor

int main(void)
{
    Vetor vet1 = Vetor(5);      // instanciando vetor de 5 elementos

    // definindo os valores de cada elemento do vetor, utilizando
    // o método setElemento
    for(int i = 0; i < vet1.getNElementos(); i++)
    {
        int valor;  
        cout << "\n Posicao " << i << ": ";
        cin >> valor;       // valor desejado para a posição i
                            // é informado pelo usuário

        vet1.setElemento(i,valor);  // atribui valor à posição i do vetor
    }

    vet1.imprimir();            // exibe elementos do objeto vet1 da classe Vetor
    
    vet1.adicaoEscalar(10);     // efetua a adição entre vet1 e o escalar 10  (vet1 = vet1 + 10)
    vet1.imprimir();            // exibe elementos do objeto vet1 da classe Vetor

    vet1.subtracaoEscalar(10);  // efetua a subtração entre vet1 e o escalar 10  (vet1 = vet1 - 10)
    vet1.imprimir();            // exibe elementos do objeto vet1 da classe Vetor

    return EXIT_SUCCESS;        // fim do programa de teste
}