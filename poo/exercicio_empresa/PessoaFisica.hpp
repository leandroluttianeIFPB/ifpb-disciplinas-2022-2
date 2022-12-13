#ifndef _PESSOA_FISICA_
#define _PESSOA_FISICA_

#include "Pessoa.hpp"

class PessoaFisica : public Pessoa
{
    public:
        PessoaFisica(const string & n, const string & c);

        string getCPF() const;
        void setCPF(const string & c);

    private:
        // atributo nome herdado de Pessoa
        string cpf;
};

#endif