// Arquivo com exemplo simples para testar classe Complexo
#include "Complexo.hpp"  // inclusão do arquivo de definição da classe

int main(void)
{
    srand(time(NULL));    // altera a raiz do rand (horario atual)

    Complexo c1;                            // instancia objeto (construtor sem parâmetros)
    Complexo c2 = Complexo(-5.5,-10.3);     // instancia objeto (construtor com parâmetros)

    cout << " -> Complexo 1: "   << c1;     // exibe estado de c1 (sobrecarga de <<)
    cout << "\n -> Complexo 2: " << c2;     // exibe estado de c2 (sobrecarga de <<)

    cout << "\n\n * Modificando c1 por sobrecarga...";
    cout << "\n * Digite partes real e imaginaria: ";
    cin >> c1;      // alteração de atributos de c1 (sobrecarga de >>)

    // exibe estado de c1 após alteração de atributos (sobrecarga de <<)
    cout << " -> Complexo 1: " << c1;

    if(c1 == c2)        // verifica se c1 e c2 são números complexos iguais
    {
        cout << "\n * Complexo 1 igual a Complexo 2";
    }
    else
    {
        cout << "\n * Complexo 1 diferente de Complexo 2";
    }


    return EXIT_SUCCESS;
}

