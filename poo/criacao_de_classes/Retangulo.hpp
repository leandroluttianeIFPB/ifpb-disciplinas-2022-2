// Arquivo de definicao/cabeçalho da classe Retangulo
#ifndef _RETANGULO_HPP_
#define _RETANGULO_HPP_

#include <iostream>   // include de biblioteca iostream
using std::cout;      // utilização de cout sem uso do termo std
using std::cerr;      // utilização de cerr sem uso do termo std

#define BASE_PADRAO   10     // valor de base padrão do Retangulo
#define ALTURA_PADRAO 10     // valor de altura padrão do Retangulo

// Definição da classe Retangulo
class Retangulo
{
    public:
        // construtor da classe Retangulo, parâmetros com valores padrões
        Retangulo(float b = BASE_PADRAO, float a = ALTURA_PADRAO);

        float getBase();        // retorna valor da base do Retangulo
        float getAltura();      // retorna valor da altura do Retangulo

        void setBase(float b);      // define valor da base do Retangulo
        void setAltura(float a);    // define valor da altura do Retangulo

        float area();           // calcula a area do Retangulo
        float perimetro();      // calcula o perimetro do Retangulo

        void imprimir();        // exibe em tela atributos e características
                                // do Retangulo    

        // método estático, calcula área de um retangulo
        // de base b e área a
        static float calculaArea(float b, float a);
    
        // método estático que retorna o valor do atributo
        // estático contRetangulo
        static int getContRetangulos(); 

        ~Retangulo();   // destrutor da classe. Um destrutor deve possuir
                        // o mesmo nome da classe, precedida de ~
                        // uma classe possui um único construtor. Ou ele
                        // é o destrutor padrão, criado pelo compilador e
                        // que nada realiza, ou ele é o implementado pelo
                        // desenvolvedor.
                        // Outro ponto importante é que destrutores não
                        // possuem parâmetros

    private:
        float base;     // base do Retangulo
        float altura;   // altura do Retangulo

        // ao se tornar público, apenas os métodos construtor e
        // destrutor da classe realizam a alteração do valor 
        // deste atributo
        static int contRetangulos;   // atributo estatico, contador de objetos
                                     // da classe
};

#endif


