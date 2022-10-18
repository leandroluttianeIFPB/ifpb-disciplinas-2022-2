#include "Relogio.hpp"

// Construtor sem parâmetros
// Inicializa os atributos do relógio com valor zero
Relogio::Relogio()
{
    setHoras(0);        // define horas com valor zero
    setMinutos(0);      // define minutos com valor zero
    setSegundos(0);     // define segundos com valor zero
}   

// Construtor com parâmetros
// h: valor desejado para o atributo horas do Relogio
// m: valor desejado para o atributo minutos do Relogio
// s: valor desejado para o atributo segundos do Relogio
// Caso algum parâmetro tenha valor inválido, o seu atributo
// correspondente assumirá o valor zero
Relogio::Relogio(int h, int m, int s)
{
    if(!setHoras(h))    // tentativa de atribuir valor para horas
    {
        setHoras(0);    // caso valor inválido, atribui valor zero
    }

    if(!setMinutos(m))  // tentativa de atribuir valor para minutos
    {
        setMinutos(0);  // caso valor inválido, atribui valor zero
    }


    if(!setSegundos(s))  // tentativa de atribuir valor para segundos
    {
        setSegundos(0);  // caso valor inválido, atribui valor zero
    }
}

// Retorna valor do atributo horas
int Relogio::getHoras()
{
    return horas;
}

// Retorna valor do atributo minutos
int Relogio::getMinutos()
{
    return minutos;
}

// Retorna valor do atributo segundos
int Relogio::getSegundos()
{
    return segundos;
}

// Define valor do atributo horas
// h: valor desejado para o atributo horas
// Retorna false, caso atribuição seja inválida. True se a atribuição
// foi realizada com sucesso
bool Relogio::setHoras(int h)
{
    if(h >= 0 && h < 24)    // verifica se valor do parâmetro é válido
    {
        horas = h;          // atribuição de valor para horas
        return true;
    }

    return false;   // retorna false se inválido, não efetua atribuição
}

// Define valor do atributo minutis
// m: valor desejado para o atributo minutos
// Retorna false, caso atribuição seja inválida. True se a atribuição
// foi realizada com sucesso
bool Relogio::setMinutos(int m)
{
    if(m >= 0 && m < 60)    // verifica se valor do parâmetro é válido
    {
        minutos = m;        // atribuição de valor para minutos
        return true;
    }

    return false;   // retorna false se inválido, não efetua atribuição
}

// Define valor do atributo segundos
// s: valor desejado para o atributo segundos
// Retorna false, caso atribuição seja inválida. True se a atribuição
// foi realizada com sucesso
bool Relogio::setSegundos(int s)
{
    if(s >= 0 && s < 60)    // verifica se valor do parâmetro é válido
    {
        segundos = s;       // atribuição de valor para segundos
        return true;
    }

    return false;   // retorna false se inválido, não efetua atribuição
}

// Incrementa apenas as horas do Relogio
void Relogio::incrementaHoras()
{
    int novaHoras = horas + 1;   // incremento de horas

    setHoras(novaHoras < 24 ? novaHoras : 0);   // define novo valor para o atributo
}

// Incrementa apenas os minutos do Relogio
void Relogio::incrementaMinutos()
{
    int novoMinutos = minutos + 1;   // incremento de minutos

    setMinutos(novoMinutos < 60 ? novoMinutos : 0);   // define novo valor para o atributo
}

// Incrementa apenas segundos do Relogio
void Relogio::incrementaSegundos()
{
    int novoSegundos = segundos + 1;    // incremento de segundos
 
    setSegundos(novoSegundos < 60 ? novoSegundos : 0);   // define novo valor para o atributo
}

// Incrementa todo o Relogio em um segundo
void Relogio::incrementaRelogio()
{
    incrementaSegundos();       // incrementa segundos
    if (segundos == 0)
    {
        incrementaMinutos();    // incrementa minutos
        if (minutos == 0)
        {
            incrementaHoras();  // incrementa horas
        }
    }
}

// Exibe em tela o horário do Relogio
void Relogio::imprimeRelogio()
{
    imprimeParteRelogio(horas);      // imprime horas

    cout << ":";

    imprimeParteRelogio(minutos);    // imprime minutos

    cout << ":";

    imprimeParteRelogio(segundos);   // imprime segundos
}

// Imprime em tela parte do relógio (método auxiliar privado)
// parte: partes do horário de um relógio, pode ser horas, minutos ou segundos
void Relogio::imprimeParteRelogio(int parte)
{
    if(parte < 10)
    {
        cout << "0";    // insere zero caso parte seja menor que zero
    }

    cout << parte;      // imprime a parte em tela
}
                                                