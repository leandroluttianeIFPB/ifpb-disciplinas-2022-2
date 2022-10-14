// Arquivo de implementação da classe
#include "Esfera.hpp"

// Construtor sem parâmetros da classe
// Atribui valor de RAIO_PADRAO ao atributo raio_cm
Esfera::Esfera()        
{
    setRaio(RAIO_PADRAO);   // atribui valor padrão para atributo raio_cm
}

// Construtor com parâmetro (inicializa atributo)
// Inicializa o atributo do objeto com valor desejado
// r: valor desejado para o atributo raio_cm
// Caso valor de r seja inválido, raio_cm é inicializado com RAIO_PADRAO
Esfera::Esfera(float r) 
{
    // tenta efetuar atribuição de valor ao atributo
    if(!setRaio(r))     
    {
        // caso valor seja inválido
        cerr << "\n ERROR: Valor invalido de raio! Assumindo valor padrao!";
        setRaio(RAIO_PADRAO);   // atribui valor padrão para atributo raio_cm
    }
}

// Método get para o atributo raio_cm
// Retorna o valor do atributo raio_cm
float Esfera::getRaio()       
{
    return raio_cm;
}

// Método set para o atributo raio_cm. Efetua alteração do atributo
// se o valor desejado para o atributo for válido
// r: valor desejado para o atributo raio_cm
// Retorna true se r é um valor válido de raio e false, caso constrário
bool Esfera::setRaio(float r) 
{
    if (r > 0)   // validação do valor desejado para raio_cm
    {
        raio_cm = r;        // se valor válido, efetua atribuição
        return true;        // valor de r válivo (retorna true)
    }

    return false;       // valor de r inválido (retorna false)
}

// Calcula e retorna o volume do objeto Esfera
float Esfera::volume() 
{
    return (4 * PI * pow(raio_cm, 3)) / 3;
}

// Calcula e retorna a area do objeto Esfera
float Esfera::area()   
{
    return 4 * PI * pow(raio_cm, 2);
}

// Calcula e retorna o volume de preenchimento do objeto Esfera
// altura: altura de preenchimento da Esfera
// Retorna -1, se altura inválida
float Esfera::volumePreenchimento(float altura) 
{
    // validação de altura
    if (altura >= 0 && altura <= 2 * raio_cm)
    {
        // se altura válida, retorna volume de preenchimento
        return PI * pow(altura, 2) * (3 * raio_cm - altura) / 3;
    }
    else
    {
        // retorna -1, quando altura inválida
        cerr << "\n ERROR: valor de altura invalida!";
        return -1;
    }
}

// imprime em tela estado do objeto Esfera
void Esfera::imprimir() 
{
    cout << "\n Raio: "   << raio_cm << " cm"
         << "\n Area: "   << area() << " cm^2"
         << "\n Volume: " << volume() << " cm^3";
}