#ifndef _PESSOA_JURIDICA_
#define _PESSOA_JURIDICA_

#include "Pessoa.hpp"

class PessoaJuridica : public Pessoa
{
    public:
        PessoaJuridica(const string & n, const string & c, const string & nf);

        string getCNPJ() const;
        void setCNPJ(const string & c);

        string getNomeFantasia() const;
        void setNomeFantasia(const string & nf);

    private:
        string cnpj;
        string nome_fantasia;
};

#endif