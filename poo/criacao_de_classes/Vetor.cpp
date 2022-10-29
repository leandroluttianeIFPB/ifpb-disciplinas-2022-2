// Arquivo de implementação da classe Vetor

#include "Vetor.hpp"        // include do arquivo de definição da classe

// Construtor da classe
// n: número de elementos desejado para o vetor
Vetor::Vetor(int n)
{
    if (n > 0)  // validação de n (número válido de elementos)
    {        
        n_elementos = n;                    // atribuição do número de elementos
        elementos = new int[n_elementos];   // alocalçao dinâmica de memória (vetor)
    }
    else
    {
        // valor inválido de n (número de elementos para o vetor)
        cerr << "\n ERRO: tamanho invalido para o vetor!";
        exit(1);    // sai do programa
    }
}

// Método get de número de elementos
// Retorna o valor do atributo n_elementos, que indica o número
// de elementos do vetor
int Vetor::getNElementos() const
{
    return n_elementos;     
}

// Define o valor do elemento do vetor na posição index
// indice: posição/índice do vetor
// valor: valor que se deseja atribuir ao elemento de posição indice
void Vetor::setElemento(int indice, int valor)
{
    // verifica se valor do índice é válido
    // os índices de um vetor vão de 0 até (n_elementos - 1)
    if (indiceValido(indice))
    {
        elementos[indice] = valor;  // atribui valor à posição
    }
    else
    {
        cerr << "\n ERROR: indice " << indice << " e invalido!";
    }    
}

// Retorna o valor de elemento de determinada posição do vetor
// indice: posição do vetor que se deseja obter o elemento
int Vetor::getElemento(int indice) const
{
    // validação do índice
    // os índices de um vetor vão de 0 até (n_elementos - 1)
    if(indiceValido(indice))
    {
        return elementos[indice];  // retorna valor do elemento na posicao indice
    }
    else
    {
        cerr << "\n ERROR: indice " << indice << " e invalido!";
        exit(1);        // finaliza o programa
    }
}

// Realiza a soma do objeto Vetor com um número escalar
// a operação altera o valor do objeto
// escalar: número a ser adicionado ao vetor
void Vetor::adicaoEscalar(int escalar)
{
    // efetua a operação de adição de um vetor por um escalar
    for(int i = 0; i <n_elementos; i++)
    {
        // adição de cada elemento do vetor pelo escalar
        elementos[i] = elementos[i] + escalar;
    }
}

// Realiza a subtração do objeto Vetor com um número escalar
// a operação altera o valor do objeto
// escalar: número a ser subtraído do vetor
void Vetor::subtracaoEscalar(int escalar)
{
    // efetua a chamada do método adicaoEscalar, invertendo o
    // sinal do escalar para realizar a operação de subtração
    // dos elemenetos de um um vetor pelo escalar
    adicaoEscalar(-escalar);
}

// Exibe em tela os elementos do objeto Vetor
void Vetor::imprimir() const
{
    cout << "\n VETOR: ";

    // percorre o vetor, exibindo o valor de seus elementos
    for(int i = 0; i < n_elementos; i++)
    {
        cout << elementos[i] << " ";
    }
}

// destrutor da classe
Vetor::~Vetor() 
{
    delete [] elementos;    // desaloca a memória alocada no construtor
}

// Método auxiliar (privado) que verifica se um índice é válido
// indice: valor de índice que se deseja avaliar
// Retorna true se o índice é válido, false caso contrário
bool Vetor::indiceValido(int indice) const
{
    // os índices de um vetor vão de 0 até (n_elementos - 1)
    // retorna resultado do teste de validação do índice
    return (indice >= 0 && indice < n_elementos);
}