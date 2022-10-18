// Arquivo de definição da classe Relogio
// Abstração de um Relogio Digital
#ifndef _RELOGIO_HPP_
#define _RELOGIO_HPP_

#include <iostream>

using std::cout;

// definição da classe Relogio
class Relogio
{
    public:
        Relogio();                      // construtor sem parâmetros
        Relogio(int h, int m, int s);   // construtor com parâmetros 

        int getHoras();             // retorna valor do atributo horas
        int getMinutos();           // retorna valor do atributo minutos
        int getSegundos();          // retorna valor do atributo segundos

        bool setHoras(int h);       // define valor do atributo horas
        bool setMinutos(int m);     // define valor do atributo minutos
        bool setSegundos(int s);    // define valor do atributo segundos

        void incrementaHoras();      // incrementa apenas as horas do Relogio
        void incrementaMinutos();    // incrementa apenas os minutos do Relogio
        void incrementaSegundos();   // incrementa apenas segundos do Relogio

        void incrementaRelogio();    // incrementa todo o Relogio em um segundo

        void imprimeRelogio();       // exibe em tela o horário do Relogio

    private:
        int horas;      // horas do Relogio
        int minutos;    // minutos do Relogio
        int segundos;   // segundos do Relogio

        void imprimeParteRelogio(int parte);    // imprime em tela parte do relógio
                                                // horas, minutos, segundos
};

#endif