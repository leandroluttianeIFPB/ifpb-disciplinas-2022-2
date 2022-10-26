// Arquivo de implementação da classe Retangulo
#include "Retangulo.hpp"  // include do arquivo de definição da classe

// Associação do atributo estático à classe Retangulo
// É necessária efetuar esta associação, assim como é
// realizado com os métodos da classe. Repare que o termo
// static não deve ser utilizado. Porém, pode-se fazer uso
// de comentário para explicitar que o atributo é estático
/* static */ int Retangulo::contRetangulos;

// Construtor da classe. Pela definição no arquivo .hpp, 
// os seus parâmetros possuem valor padrões BASE_PADRAO e ALTURA_PADRAO.
// Desta forma, se valores não forem atribuídos para os parâmetros b e a
// eles irão assumir estes valores por padrão.
// b: valor desejado para a base do Retangulo
// a: valor desejado para a altura do Retangulo
Retangulo::Retangulo(float b, float a)
{
    setBase(b);     // atribui b à base do Retangulo
    setAltura(a);   // atribui a à altura do Retangulo

    Retangulo::contRetangulos++;   // incrementa o contador de objetos Retangulo
                                   // os atributos estáticos estão vinculados à
                                   // classe, apresentando um comportamento
                                   // compartilhado entre os objetos instanciados 
}

// Retorna o valor da base do Retangulo
float Retangulo::getBase()
{
    return base;
}

// Retorna o valor da altura do Retangulo
float Retangulo::getAltura()
{
    return altura;
}

// Define valor da base do Retangulo
// b: valor desejado para a base do Retangulo
// Método realiza validação de b. Se valor for
// inválido, lança mensagem de erro e finaliza programa
void Retangulo::setBase(float b)
{
    if(b > 0)       // valor da base deve ser maior do que zero
    {
        base = b;   // atribui valor ao atributo base
    }
    else
    {
        // imprime mensagem de erro
        cerr << "\n ERROR: valor invalido de base!";
        
        exit(1);  // finaliza programa
    }
}

// Define valor da altura do Retangulo
// a: valor desejado para a altura do Retangulo
// Método realiza validação de a. Se valor for
// inválido, lança mensagem de erro e finaliza programa
void Retangulo::setAltura(float a)
{
    if(a > 0)           // valor da altura deve ser maior do que zero
    {
        altura = a;     // atribui valor ao atributo altura
    }
    else
    {
        // imprime mensagem de erro
        cerr << "\n ERROR: valor invalido de altura!";
        
        exit(1);       // finaliza programa
    }
}

// Calcula e retorna o valor da área do Retangulo
float Retangulo::area()
{
    return base * altura;
}

// Calcula e retorna o valor do perímetro do Retangulo
float Retangulo::perimetro()
{
    return 2 * (base + altura);
}

// Exibe em tela atributos e informações do Retangulo
void Retangulo::imprimir()
{
    cout << "\n Base: "      << base
         << "\n Altura: "    << altura
         << "\n Area: "      << area()
         << "\n Perimetro: " << perimetro();
}

// Método estático que calcula e retorna a área de um retângulo
// que possui base b e altura a
/*static*/ float Retangulo::calculaArea(float b, float a)
{
    return b * a;
}

// Método estático que retorna o valor do atributo
// contRetangulos, que é utilizado para contar o
// número de objetos da classe Retangulo instanciados
/*static*/ int Retangulo::getContRetangulos()
{
    return Retangulo::contRetangulos;
}

// Destrutor da classe Retangulo
// Quando um objeto vai ser destruído (deixar de existir)
// o contador de Retangulos é decrementado em uma unidade
Retangulo::~Retangulo()
{
    // decrementa contador de objetos Retangulo instanciados
    Retangulo::contRetangulos--;
}

