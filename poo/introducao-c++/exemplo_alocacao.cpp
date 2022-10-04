/*
   Código exemplo desenvolvido no dia 29/09/2022 em aula
   presencial da disciplina de Programação Orientada a Objetos.
   
   Conteúdo: vetores com alocação dinâmica de memória         
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

// procedimento (sem retorno) para exibir dados de todos
// os alunos da turma
void exibeDadosTurma(Aluno * alunos);

// procedimento (sem retorno) para cadastrar informações de todos
// os alunos da turma
void cadastraAlunosTurma(Aluno * alunos);  

// calcula a média aritmética das duas notas do aluno
float calculaMedia(const Aluno & al);

#define N_ALUNOS 3   // número de alunos da turma

int main(void)     // função principal
{
    // alocação dinâmica de memória
    Aluno * turma = new Aluno [N_ALUNOS];   // declaração de um vetor de alunos
                                            // o que forma uma turma

    cadastraAlunosTurma(turma);       // cadastra informações alunos da turma
    exibeDadosTurma(turma);           // exibe informações dos alunos em tela
          
    delete [] turma;   // liberação de memória alocada dinamicamente
    turma = nullptr;   // ponteiro para nulo (apontando para nada)

    return EXIT_SUCCESS;        // programa finalizado com sucesso (return 0)
}

// Procedimento que cadastra informações de um aluno
// al: parâmetro por referência, que terá os valores de seus
//     campos modificados / preenchidos
void cadastraAluno(Aluno & al)
{
    cout << "\n * Digite nome do aluno: ";
    cin >> al.nome;                 // entrada do nome do aluno

    cout << " * Digite nota 1 e nota 2 do aluno: ";
    cin >> al.nota1 >> al.nota2;    // entrada das notas do aluno                            
}

// Procedimento (sem retorno) para exibir dados do aluno
// al: parâmetro por referência to tipo struct Aluno
//     que terá os seus dados exibidos em tela
//     O const garante que os dados deste aluno não
//     serão modificados pelo procedimento
void exibeDadosAluno(const Aluno & al)
{
    cout << "\n ********************* " << endl
         << "      DADOS ALUNO"        << endl
         << " ********************* "   << endl;
    
    // exibindo em tela os campos do aluno (struct Aluno)
    cout << " -> Nome: "   << al.nome << endl
         << " -> Nota 1: " << al.nota1 << endl
         << " -> Nota 2: " << al.nota2 << endl
         << " -> Media: "  << calculaMedia(al);

    // al.nota1 = 100;   gera erro porque esta é const
}

// procedimento (sem retorno) para exibir dados de TODOS
// os alunos da turma
// alunos: ponteiro para vetor de alunos (struct Aluno)
void exibeDadosTurma(Aluno * alunos)
{
    // percorre todos os elementos do vetor, ou seja,
    // todos os alunos da turma
    for(int i = 0; i < N_ALUNOS; i++)
    {
        exibeDadosAluno(alunos[i]);   // exibe em tela os dados do aluno i 
    }
}

// procedimento (sem retorno) para cadastrar informações de todos
// os alunos da turma
// alunos: ponteiro para vetor de alunos (struct Aluno)
void cadastraAlunosTurma(Aluno * alunos)
{
    // percorre todos os elementos do vetor, ou seja,
    // todos os alunos da turma
    for(int i = 0; i < N_ALUNOS; i++)
    {
        cadastraAluno(alunos[i]);       // entrada de informações de cada aluno i
    }
}

// calcula a média aritmética das duas notas do aluno
float calculaMedia(const Aluno & al)
{
    return (al.nota1 + al.nota2) / 2;
}