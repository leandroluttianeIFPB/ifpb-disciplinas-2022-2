// Arquivo de implementação da classe Quadrado
#include "Quadrado.hpp"

// Construtor da classe Quadrado
// l: valor do lado do Quadrado
Quadrado::Quadrado(float l)
{
    setLado(l);     // set do atributo lado
}

// Retorna o valor do lado do Quadrado
float Quadrado::getLado() const
{
    return lado;        // retorno do valor do atributo
}

// Define valor do lado do Quadrado
// l: valor que se deseja atribuir ao lado do Quadrado
void Quadrado::setLado(float l)
{
    if(l > 0)       // teste de valor válido
    {
        lado = l;   // atribuição de valor para o atributo lado
    }
    else
    {
        // valor inválido de l
        cerr << " ERRO: valor invalido de lado!";
        lado = LADO_PADRAO;     // atribui-se o valor padrão para o atributo
    }
}

// Calcula e retorna o valor da área do Quadrado
float Quadrado::calculaArea() const
{
    return lado * lado; // retorno da área do Quadrado
}