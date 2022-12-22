#ifndef _QUADRADO_HPP_
#define _QUADRADO_HPP_

#include <iostream>
using namespace std;

#define LADO_PADRAO 10

class Quadrado
{
    public:
        Quadrado(float l = LADO_PADRAO);

        float getLado() const;
        void setLado(float l);

        float calculaArea() const;

    private:
        float lado;
};

#endif