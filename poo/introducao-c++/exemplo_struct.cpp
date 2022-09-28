/*
   Código exemplo desenvolvido no dia 27/09/2022 em aula
   presencial da disciplina de Programação Orientada a Objetos.
   
   Conteúdo: struct e revisão de passagem de parâmetros por valor
             e referência         
*/

#include <iostream>   // include da biblioteca iostream (cin, cout, enl)
#include <string>     // include da biblioteca string (classe string)

using namespace std;    // utilizando o namespace std

// Definição de struct Aluno, que contém 
// características pertinentes a um aluno (nome e notas)
struct Aluno
{
    string nome;    // campo nome do aluno
    float nota1;    // campo primeira nota do aluno
    float nota2;    // campo segunda nota do aluno
};

// Procedimento (sem retorno) para cadastrar aluno,
// informando e atribuindo valores ao seus dados
void cadastraAluno(Aluno & al);           

// Procedimento (sem retorno) para exibir dados do aluno
void exibeDadosAluno(const Aluno & al);   

int main(void)     // função principal
{
    Aluno aluno;   // declaração de variável do tipo struct Aluno
                   // aluno possui os campos nome, nota1 e nota2

    cadastraAluno(aluno);       // entrada de informações do aluno
    exibeDadosAluno(aluno);     // exibe dados do aluno
          
    return EXIT_SUCCESS;        // programa finalizado com sucesso (return 0)
}

// Procedimento que cadastra informações de um aluno
// al: parâmetro por referência, que terá os valores de seus
//     campos modificados / preenchidos
void cadastraAluno(Aluno & al)
{
    cout << " * Digite seu nome: ";
    cin >> al.nome;         // entrada de dados, atribuído ao campo
                            // nome do parâmetro al
                            // Para acessar um campo de uma struct,
                            // utiliza-se o nome da variável do tipo da
                            // struct seguida de ponto e o nome do
                            // campo que se deseja acessar.

    cout << " * Digite nota 1 e nota 2: ";
    cin >> al.nota1 >> al.nota2;    // entrada das notas do aluno
                                    // observe novamente a utilização
                                    // do ponto para ter acesso aos
                                    // campos da struct al
}

// Procedimento (sem retorno) para exibir dados do aluno
// al: parâmetro por referência to tipo struct Aluno
//     que terá os seus dados exibidos em tela
//     O const garante que os dados deste aluno não
//     serão modificados pelo procedimento
void exibeDadosAluno(const Aluno & al)
{
    cout << "\n ********************* " << endl
         << "       DADOS ALUNO"        << endl
         << " ********************* "   << endl;
    
    // exibindo em tela os campos do aluno (struct Aluno)
    cout << " -> Nome: "   << al.nome << endl
         << " -> Nota 1: " << al.nota1 << endl
         << " -> Nota 2: " << al.nota2 << endl;

    // al.nota1 = 100;   gera erro porque esta é const
}