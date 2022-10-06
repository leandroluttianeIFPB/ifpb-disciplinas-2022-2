#include <iostream> // include de biblioteca: uso de cin, cout e endl
#include <string>   // include de biblioteca: uso da classe string

using namespace std; // utilização no namespace std

// definição da classe Aluno
class Aluno
{
    public:
        // Os construtores possuem o mesmo nome da classe
        // e não possuem tipo de retorno. Uma classe pode ter
        // mais de um construtor. Caso não haja implementação de
        // construtor em uma classe, o compilador cria um construtor
        // padrão, sem parâmetros, que realiza nada.
        // Sempre que um objeto é instanciado, um construtor é chamado

        Aluno();                               // construtor da classe sem parâmetros
        Aluno(string n, float n1, float n2);   // construtor com parâmetros

        // Para os próximos métodos são apresentados na
        // definição da classe apenas as assinaturas dos métodos
        // sem as suas implementações.

        void setNota1(float n1);  // método que define o valor do atributo nota1
        void setNota2(float n2);  // método que define o valor do atributo nota2
        void setNome(string n);   // método que define o valor do atributo nome

        string getNome();  // método que retorna valor do atributo nome
        float getNota1();  // método que retorna valor do atributo nota1
        float getNota2();  // método que retorna valor do atributo nota2
 
        float calcularMedia();   // calcula a média das notas do Aluno
        void imprimeAluno();     // imprime estado do Aluno

    private:
        string nome; // atributo que define o nome do aluno
        float nota1; // atributo que define o valor de uma nota
        float nota2; // atributo que define o valor de uma nota
};

int main()
{
    Aluno aluno1("Pedro Henrique",70,85);   // instaciação do objeto aluno1
                                            // construtor com parâmetros 
    
    Aluno aluno2 = Aluno("Joao Claudio",80,70); // instaciação de aluno2
                                                // construtor com parâmetros
    
    Aluno aluno3;   // instanciação de aluno3
                    // construtor sem parâmetros

    aluno1.imprimeAluno();      // exibe informações do aluno1
    aluno2.imprimeAluno();      // exibe informações do aluno2
    aluno3.imprimeAluno();      // exibe informações do aluno3

    // definindo valores para os atributos
    // do objeto por meio dos métodos set
    aluno1.setNome("Pedro"); // aluno1.nome = "Pedro"; (gera erro)
    aluno1.setNota1(80);
    aluno1.setNota2(75);

    // definindo valores para os atributos
    // do objeto por meio dos métodos set
    aluno2.setNome("Erick");
    aluno2.setNota1(80);
    aluno2.setNota2(70);

    // obtendo valores dos atributos do objeto por
    // meio dos métodos get, com o objetivo de exibir em tela
    cout << "\n Nome: " << aluno1.getNome();
    cout << "\n Nota1: " << aluno1.getNota1();
    cout << "\n Nota2: " << aluno1.getNota2();
    cout << "\n Media: " << aluno1.calcularMedia();

    // chamada do método que exibe em tela o
    // estado de um objeto, no caso, do objeto aluno2
    aluno2.imprimeAluno();

    return EXIT_SUCCESS; // fim do programa com sucesso
}

// Observação: a seguir seguem as implementações dos métodos
// de foram definidos na definição da classe
// Antes de cada método deve-se inserir o nome da classe
// seguido de ::. Assim, associa-se a função/método à classe

// Implementação do construtor com parâmetros
// Permite instanciar um objeto da classe e inicializar
// os seus atributos com os valores passados como parâmetros
// n: valor a ser atribuído ao atributo n
// n1: valor a ser atribuído ao atributo nota1
// n2: valor a ser atribuído ao atributo nota2
Aluno::Aluno(string n, float n1, float n2)
{
    setNome(n);     // atribuição de n ao atributo nome
    setNota1(n1);   // atribuição de n1 ao atributo nota1 (possui validação)
    setNota2(n2);   // atribuição de n ao atributo nota2 (possui validação)
}

// Implementação do construtor sem parâmetros
// Inicializa os atributos do objeto com valores "padrões" e válidos
Aluno::Aluno()
{
    setNome("");   // define nome como sendo vazio
    setNota1(0);   // define nota1 como sendo 0
    setNota2(0);   // define nota2 como sendo 0
}

// Método set do atributo nota1
// Permite atribuir valor ao atributo de forma indireta
void Aluno::setNota1(float n1)
{
    // efetua validação da nota (n1)
    if (n1 >= 0 && n1 <= 100)
        nota1 = n1; // se nota válida efetua a atribuição
    else
        nota1 = 0; // se nota inválida, atribui zero
}

// Método set do atributo nota2
// Permite atribuir valor ao atributo de forma indireta
void Aluno::setNota2(float n2)
{
    // efetua validação da nota (n2)
    if (n2 >= 0 && n2 <= 100)
        nota2 = n2; // se nota válida efetua a atribuição
    else
        nota2 = 0; // se nota inválida, atribui zero
}

// Método set do atributo nome
// Permite atribuir valor ao atributo de forma indireta
void Aluno::setNome(string n)
{
    nome = n; // atribui valor ao atributo
}

// Método get do atributo nome
// Permite obter o valor do atributo de forma indireta
string Aluno::getNome()
{
    return nome; // retorna valor do atributo
}

// Método get do atributo nota1
// Permite obter o valor do atributo de forma indireta
float Aluno::getNota1()
{
    return nota1; // retorna valor do atributo
}

// Método get do atributo nota2
// Permite obter o valor do atributo de forma indireta
float Aluno::getNota2()
{
    return nota2; // retorna valor do atributo
}

float Aluno::calcularMedia()
{
    return (nota1 + nota2) / 2;
}

// Método que exibe em tela o estado do objeto Aluno
void Aluno::imprimeAluno()
{
    cout << "\n **********************\n"
         << " Nome: " << nome << endl
         << " Nota1: " << nota1 << endl
         << " Nota2:" << nota2 << endl
         << " Media: " << calcularMedia() << endl;
}