#include "Pessoa.hpp"

Pessoa::Pessoa(const string & n)
{
    setNome(n);
}

string Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const string & n)
{
    nome = n;
}