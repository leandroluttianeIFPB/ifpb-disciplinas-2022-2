#ifndef _PESSOA_HPP_
#define _PESSOA_HPP_

#include <string>

using namespace std;

class Pessoa
{
    public:
        Pessoa(const string & n);

        string getNome() const;
        void setNome(const string & n);

    protected:
        string nome;
};

#endif