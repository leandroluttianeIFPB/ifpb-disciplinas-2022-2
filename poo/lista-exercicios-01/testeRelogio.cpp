#include "Relogio.hpp"

#include <iostream>

using namespace std;

int main()
{
    Relogio relogio1;            // instanciação: construtor sem parâmetros
    Relogio relogio2(23,59,00);  // instanciação: construtor com parâmetros

    cout << "*** RELOGIO 1: "; 
    relogio1.imprimeRelogio();   // exibe estado do relogio1

    cout << "\n\n*** RELOGIO 2: "; 
    relogio2.imprimeRelogio();   // exibe estado do relogio2

    relogio1.setHoras(11);       // define valor de horas do relogio1 
    relogio1.setMinutos(50);     // define valor de minutos do relogio1
    relogio1.setSegundos(-50);   // define valor de segundos do relogio1 (valor inválido)

    cout << "\n\n*** RELOGIO 1: "; 
    relogio1.imprimeRelogio();   // exibe estado do relogio1


    cout << "\n";

    // simula funcionamento do relogio2
    for(int i = 0; i <= 60; i++)
    {
        cout << "\n*** RELOGIO 2: "; 
        relogio2.imprimeRelogio();      // exibe estado do relogio2        
        relogio2.incrementaRelogio();   // incrementa horário do relógio em um segundo
    }    

    return EXIT_SUCCESS;
}