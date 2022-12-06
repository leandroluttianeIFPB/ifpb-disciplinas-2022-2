// Arquivo de implementação da classe Complexo
#include "Complexo.hpp"     // include do arquivo de definição da Classe

// Construtor sem parâmetros da classe
// Define de forma aleatória os valores das partes real
// e imaginária do número Complexo entre -50 e 50
Complexo::Complexo()
{
    real = aleatorio(MIN, MAX);         // atribui valor aleatório para parte real
    imaginario = aleatorio(MIN, MAX);   // atribui valor aleatório para parte imaginaria
}

// Construtor com parâmetros
// Inicializa o objeto com valores desejados para os
// atributos real e imaginário
Complexo::Complexo(float r, float i)
{
    real = r;
    imaginario = i;
}

// Sobrecarga do operador == (objComplexo1 == objComplexo2)
// Retorna true se dois objetos Complexo são iguais,
// false caso contrário
bool Complexo::operator==(const Complexo & c) const
{
    // as partes real e imaginaria devem ser iguais para que
    // os números complexo sejam iguais
    return real == c.real && imaginario == c.imaginario;
}

// Sobrecarga do operador != (objComplexo1 != objComplexo2)
// Retorna true se dois objetos Complexo são diferentes,
// false caso contrário
bool Complexo::operator!=(const Complexo & c) const
{
    // faz uso da sobrecarga de == já implementada
    // this é um ponteiro que aponta para o objeto que
    // efetua a chamada do método. *this é o próprio objeto
    // que efetua a chamada. *this corresponde ao conteúdo
    // do endereço de memória apontada pelo ponteiro this
    return !(*this == c);
}

// Retorna o módulo do objeto Complexo
float Complexo::modulo() const
{
    // calculo e retorno do módulo do número Complexo
    return sqrt(pow(real,2) + pow(imaginario,2));
}

// Exibe em tela o estado do objeto Complexo
void Complexo::imprimir() const
{
    // define três casas decimais
    cout << fixed << setprecision(3) << real;

    // ajuste de exibição do sinal da parte imaginária
    if(imaginario < 0)
    {
        cout << " - ";
    }
    else
    {
        cout << " + ";
    }

    // exibe o módulo da parte imaginária (o sinal já
    // foi exibido anteriormente)
    cout << "j" << abs(imaginario);
}

// Sobrecarga do operador << (cout << objComplexo)
// Exibe em tela o estado do objeto Complexo
// Retorna referência de objeto ostream para permitir
// concatenação de chamadas
ostream & operator<<(ostream & out, const Complexo & c)
{
    c.imprimir();

    return out;
}

// Sobrecarga do operador >> (cin >> objComplexo)
// Permite entrada de valores para os atributos do objeto
// Retorna referência de objeto istream para permitir
// concatenação de chamadas
istream & operator>>(istream & in, Complexo & c)
{
    in >> c.real >> c.imaginario;

    return in;
}

// Gera número real pseudoaleatório entre min e max
float Complexo::aleatorio(float min, float max)
{
    return (rand() / (float) RAND_MAX) * (max - min) + min;
}

