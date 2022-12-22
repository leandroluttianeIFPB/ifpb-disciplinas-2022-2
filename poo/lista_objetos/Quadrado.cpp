#include "Quadrado.hpp"

Quadrado::Quadrado(float l)
{
    setLado(l);
}

float Quadrado::getLado() const
{
    return lado;
}

void Quadrado::setLado(float l)
{
    if( l > 0)
    {
        lado = l;
    }
    else
    {
        cerr << " ERRO: valor invalido de lado!";
        lado = LADO_PADRAO;
    }
}

float Quadrado::calculaArea() const
{
    return lado * lado;
}