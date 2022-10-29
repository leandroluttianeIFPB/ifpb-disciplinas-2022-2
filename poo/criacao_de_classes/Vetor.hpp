// Arquivo de definição da classe Vetor
#ifndef _VETOR_HPP_
#define _VETOR_HPP_

#include <iostream>    // include de biblioteca
using namespace std;

// Definição da classe Vetor
class Vetor
{
    public:
        Vetor(int n);               // construtor da classe

        int getNElementos() const;        // método get de número de elementos do vetor
        
        void setElemento(int indice, int valor);    // define valor de elemento
        int getElemento(int indice) const;          // retorna valor de elemento

        void adicaoEscalar(int escalar);        // efetua a adição escalar (vetor + escalar)
        void subtracaoEscalar(int escalar);     // efetua a subtração escalar (vetor - escalar)

        void imprimir() const;        // exibe em tela os elementos do vetor

        ~Vetor();                     // destrutor da classe

    private:
        int n_elementos;    // número de elementos do vetor
        int * elementos;    // vetor de elementos (via ponteiro)

        // método auxiliar (privado)
        bool indiceValido(int indice) const;   // verifica se um valor de índice é válido
};

#endif