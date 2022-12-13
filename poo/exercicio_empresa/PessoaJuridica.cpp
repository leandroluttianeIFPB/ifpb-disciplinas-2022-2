#include "PessoaJuridica.hpp"

PessoaJuridica::PessoaJuridica(const string &n, const string &c, const string &nf)
              : Pessoa(n)
{
    setCNPJ(c);
    setNomeFantasia(nf);
}

string PessoaJuridica::getCNPJ() const
{
    return cnpj;
}

void PessoaJuridica::setCNPJ(const string &c)
{
    cnpj = c;
}

string PessoaJuridica::getNomeFantasia() const
{
    return nome_fantasia;
}

void PessoaJuridica::setNomeFantasia(const string &nf)
{
    nome_fantasia = nf;
}