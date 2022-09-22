// Exemplo de sala de aula: 22 de setembro de 2022
//  -> Entrada e saída em C++: cin e cout

#include <iostream>   // inclusão de biblioteca para uso 
                      // de cin (scanf) e cout (printf)
#include <string>     // inclusão de biblioteca para uso da classe string
                      
using namespace std;   // utilização do namespace std
                       // remove a necessidade de utilizar std:: antes
                       // de cin, cout, endl, entre outos

// função principal
int main()
{
    int nota;        // nota de um determinado aluno
    float altura;    // altura de um determinado aluno
    string nome;     // instanciação de objeto da classe string (cadeia de caracteres) 
 
    cout << "\n Digite seu nome: ";   // exibe mensagem em tela
    cin >> nome;                      // armazena valor informado em nome

    // exibe mensagem em tela (concatenação de dados)
    cout << " ## Alo " << nome << " ## " << endl;

    cout << "\n Digite sua nota e altura: ";
    cin >> nota >> altura;          // armazenando duas informações (nota e altura)
                                    // fornecidas pelo usuário
                                 
    // exibindo valores de variáveis em tela
    cout << "   * Nota: "   << nota << endl
         << "   * Altura: " << altura;
 
    return EXIT_SUCCESS;
}