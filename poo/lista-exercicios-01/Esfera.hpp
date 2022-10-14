// Arquivo de definição da classe Esfera
#ifndef __ESFERA_HPP_
#define _ESFERA_HPP_

#include <iostream>
#include <cmath>

using namespace std;

#define RAIO_PADRAO 5      // raio padrão da Esfera de 5 centímetros
#define PI 3.14159265359   // valor de PI (é possível obter o valor de PI da biblioteca)
                           // por meio de constante ou biblioteca numbers

class Esfera
{
    public:
        Esfera();         // construtor sem parâmetros da classe
        Esfera(float r);  // construtor com parâmetro (inicializa atributo)

        float getRaio();         // método get para o atributo raio_cm
        bool  setRaio(float r);  // método set para o atributo raio_cm

        float volume();  // calcula o volume do objeto Esfera
        float area();    // calcula o area do objeto Esfera

        float volumePreenchimento(float altura);  // calcula volme de preenchimento

        void imprimir();    // imprime em tela estado do objeto Esfera

    private:
        float raio_cm;  // raio da esfera em centímetros
};

#endif
