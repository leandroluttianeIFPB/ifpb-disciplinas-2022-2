// Arquivo de definição ou de cabeçalho da classe Ponto
#ifndef _PONTO_HPP_
#define _PONTO_HPP_

#include <iostream> // include de biblioteca (cout, cin, endl)
#include <cmath>    // include de biblioteca (sqrt, pow)

using namespace std;

// Classe Ponto: implementa uma classe que representa um
// ponto no plano cartesiano
class Ponto
{
    public:
        Ponto();                 // construtor sem parâmetros da classe
        Ponto(float x, float y); // construtor com parâmetros da classe

        float getCoord_X(); // retorna o valor da coordenada X
        float getCoord_Y(); // retorna o valor da coordenada Y

        void setCoord_X(float x); // define valor da coordenada X
        void setCoord_Y(float y); // define valor da coordenada Y

        void printPonto(); // exibe em tela o estado do objeto

        int quadrante(); // calcula o quadrante do Ponto

        float distanciaOrigem();       // calcula a distância do Ponto para a origem
        float distanciaPonto(Ponto p); // calcula a distância entre Pontos

    private:
        float coord_X; // coordenada X do objeto Ponto
        float coord_Y; // coordenada Y do objeto Ponto
};

#endif