#include "PessoaFisica.hpp"

PessoaFisica::PessoaFisica(const string & n, const string & c)
             : Pessoa(n)        
{
    setCPF(c);
}

string PessoaFisica::getCPF() const
{
    return cpf;
}

void PessoaFisica::setCPF(const string & c)
{
    cpf = c;
}