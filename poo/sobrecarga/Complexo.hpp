// Arquivo de definição da classe Complexo
// representação de um número completo
#ifndef _COMPLEXO_HPP_
#define _COMPLEXO_HPP_

#include <cstdlib>      // rand e srand
#include <time.h>       // funcao time
#include <cmath>        // funcao sqrt
#include <iostream>     // cin, cout, endl
#include <iomanip>      // setprecision

#define MAX  50     // constante limite máximo
#define MIN -50     // constante limite mínimo

using namespace std;

class Complexo
{
    // função amiga da classe
    // sobrecarga do operador <<: utilização do objeto com cout
    friend ostream & operator<<(ostream & out, const Complexo & c);
    
    // função amiga da classe
    // sobrecarga do operador <<: utilização do objeto com cout    
    friend istream & operator>>(istream & in, Complexo & c);

    public:
        Complexo();                     // construtor sem parâmetros
        Complexo(float r, float i);     // construtor com parâmetros

        bool operator==(const Complexo & c) const;  // sobrecarga do operador ==
        bool operator!=(const Complexo & c) const;  // sobrecarga do operador !=

        float modulo() const;       // calcula o módulo do número complexo

    private:
        float real, imaginario;     // parte real de imaginária do número complexo
        
        float aleatorio(float min, float max);  // método auxiliar: gera número "aleatório"        
        void imprimir() const;                  // método auxiliar: imprime número Complexo
};

#endif