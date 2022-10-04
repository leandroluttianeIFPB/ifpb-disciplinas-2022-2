#include <iostream>   // include de biblioteca: uso de cin, cout e endl
#include <string>     // include de biblioteca: uso da classe string

using namespace std;  // utilização no namespace std

// definição da classe Aluno
class Aluno
{
    
    public: 
        // especificador de acesso público
        // os atributos e métodos públicos podem ser acessados
        // diretamente a partir do objeto da classe Aluno

        // Método set do atributo nota1
        // Permite atribuir valor ao atributo de forma indireta
        void setNota1(float n1)
        {
            // efetua validação da nota (n1)
            if (n1 >= 0 && n1 <= 100)
                nota1 = n1;   // se nota válida efetua a atribuição
            else 
                nota1 = 0;    // se nota inválida, atribui zero
        }
        
        // Método set do atributo nota2
        // Permite atribuir valor ao atributo de forma indireta
        void setNota2(float n2)
        {
            // efetua validação da nota (n2)
            if (n2 >= 0 && n2 <= 100)
                nota2 = n2;      // se nota válida efetua a atribuição
            else   
                nota2 = 0;       // se nota inválida, atribui zero
        }

        // Método set do atributo nome
        // Permite atribuir valor ao atributo de forma indireta
        void setNome(string n)
        {
            nome = n;       // atribui valor ao atributo
        }

        // Método get do atributo nome
        // Permite obter o valor do atributo de forma indireta
        string getNome()
        {
            return nome;   // retorna valor do atributo
        }

        // Método get do atributo nota1
        // Permite obter o valor do atributo de forma indireta
        float getNota1()
        {
            return nota1;   // retorna valor do atributo
        }

        // Método get do atributo nota2
        // Permite obter o valor do atributo de forma indireta
        float getNota2()
        {
            return nota2;  // retorna valor do atributo
        }

        // Observação: os métodos get e set são chamados de métodos
        //             acessores e eles permitem a implementação
        //             do princípio do encapsulamento

        // Método que exibe em tela o estado do objeto Aluno
        void imprimeAluno()
        {
            cout << "\n **********************\n"
                 << " Nome: "  << nome       << endl
                 << " Nota1: " << getNota1() << endl
                 << " Nota2:"  << nota2      << endl;

            // Observação: os atributos podem ser acessados tanto
            // diretamente quanto por meio de métodos get.
            // Métodos da classe podem ser chamados por outros métodos
            // da classe (privados ou públicos). Os atributos da classe 
            // são acessíveis em toda a implementação da classe (privados ou públicos).
        }

    private:
        // especificador de acesso privado
        // os atributos e métodos privados não podem ser
        // acessados diretamente pelos objetos da classe
        // desta forma, eles devem ser acessados indiretamente
        // por meio de métodos públicos

        string nome;    // atributo que define o nome do aluno
        float nota1;    // atributo que define o valor de uma nota
        float nota2;    // atributo que define o valor de uma nota

    // Observação: todos os atributos e métodos, sejam eles privados
    //             ou públicos são acessíveis no interior da implementação
    //             da classe
};

int main()
{
    Aluno aluno1;   // instaciação do objeto aluno1 - criando objeto
    Aluno aluno2;   // instaciação do objeto aluno2 - criando objeto

    // definindo valores para os atributos
    // do objeto por meio dos métodos set
    aluno1.setNome("Pedro");   // aluno1.nome = "Pedro"; (gera erro)
    aluno1.setNota1(80);      
    aluno1.setNota2(75);      

    // definindo valores para os atributos
    // do objeto por meio dos métodos set
    aluno2.setNome("Erick");
    aluno2.setNota1(80);
    aluno2.setNota2(70);

    // obtendo valores dos atributos do objeto por
    // meio dos métodos get, com o objetivo de exibir em tela
    cout << "\n Nome: "  << aluno1.getNome();
    cout << "\n Nota1: " << aluno1.getNota1();
    cout << "\n Nota2: " << aluno1.getNota2();

    // chamada do método que exibe em tela o
    // estado de um objeto, no caso, do objeto aluno2
    aluno2.imprimeAluno();

    return EXIT_SUCCESS;  // fim do programa com sucesso
}