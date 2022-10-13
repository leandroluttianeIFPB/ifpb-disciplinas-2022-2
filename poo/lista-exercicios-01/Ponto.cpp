// Arquivo de implementação da classe Ponto
// Realiza a implementação dos métodos da classe

#include "Ponto.hpp" // include do arquivo de definição da classe

// Construtor sem parâmetros da classe
// Instancia um objeto com coordenadas na origem (x e y iguais a zero)
Ponto::Ponto()
{
    coord_X = 0; // coordenada x igual a zero
    coord_Y = 0; // coordenada y igual a zero
}

// Construtor com parâmetros da classe
// Instancia um objeto com as coordenadas desejadas (x e y)
// x: valor a ser atribuído à coordenada x do objeto Ponto
// y: valor a ser atribuído à coordenada y do objeto Ponto
Ponto::Ponto(float x, float y)
{
    coord_X = x; // atribui x à coordenada X do objeto
    coord_Y = y; // atribui y à coordenada Y do objeto
}

// retorna o valor da coordenada X
float Ponto::getCoord_X()
{
    return coord_X;
}

// retorna o valor da coordenada Y
float Ponto::getCoord_Y()
{
    return coord_Y;
}

// define valor da coordenada X
void Ponto::setCoord_X(float x)
{
    coord_X = x;
}

// define valor da coordenada Y
void Ponto::setCoord_Y(float y)
{
    coord_Y = y;
}

// Retorna o quadrante do objeto Ponto
int Ponto::quadrante()
{
    if (coord_X == 0 && coord_Y == 0)
    {
        return 0; // ponto localizado na origem
    }
    else if (coord_X > 0 && coord_Y > 0)
    {
        return 1; // ponto localizado no primeiro quadrante
    }
    else if (coord_X < 0 && coord_Y > 0)
    {
        return 2; // ponto localizado no segundo quadrante
    }
    else if (coord_X < 0 && coord_Y < 0)
    {
        return 3; // ponto localizado no terceiro quadrante
    }
    else if (coord_X > 0 && coord_Y < 0)
    {
        return 4; // ponto localizado no quarto quadrante
    }
    if (coord_Y == 0)
    {
        return 5; // ponto localizado no eixo das abscissas
    }
    else
    {
        return 6; // ponto localizado no eixo das ordenadas
    }
}

// Calcula a distância do Ponto para a origem
float Ponto::distanciaOrigem()
{
    // instancia um objeto na origem (ver construtor sem parâmetros)
    Ponto origem;

    // retorna o valor da distância entre o objeto que efetua a chamada
    // do método e um Ponto localizado na origem do plano cartesiano
    return distanciaPonto(origem);
}

// Calcula a distância entre Pontos (objeto que chama o método e objeto como parâmetro)
// p: objeto Ponto
float Ponto::distanciaPonto(Ponto p)
{
    // cálculo da distância
    // coord_X e coord_Y se referem aos atributos do objeto Ponto que
    // efetuar a chamada do método

    // para acessar os atributos do objeto p, pode-se fazer o acesso direto, uma
    // vez que dentro da classe (no código de seus métodos) todos os atributos e
    // métodos são acessíveis, sejam públicos ou privados. Uma outra alternativa
    // seria utilizar os métodos get dos atributos coord_X e coord_Y
    return sqrt(pow((coord_X - p.coord_X), 2) + pow((coord_Y - p.coord_Y), 2));
}

// Exibe o estado do objeto (valor de seus atributos)
// e a sua distância para a origem do plano cartesiano
void Ponto::printPonto()
{
    cout << "\n Coordenada X: " << coord_X;
    cout << "\n Coordenada Y: " << coord_Y << endl;
    cout << "\n Distancia para origem: " << distanciaOrigem() << endl;
}