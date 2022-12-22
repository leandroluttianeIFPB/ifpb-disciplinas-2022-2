// Arquivo de cabeçalho da classe Quadrado
#ifndef _QUADRADO_HPP_
#define _QUADRADO_HPP_

#include <iostream>
using namespace std;

#define LADO_PADRAO 10      // valor padrão para o lado

class Quadrado
{
    public:
        Quadrado(float l = LADO_PADRAO);        // construtor da classe

        float getLado() const;          // retorna o lado do Quadrado
        void setLado(float l);          // define o valor do lado do Quadrado

        float calculaArea() const;      // calcula e retorna a area do Quadrado

    private:
        float lado;     // lado do quadrado
};

#endif