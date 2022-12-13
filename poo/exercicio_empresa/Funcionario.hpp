#ifndef _FUNCIONARIO_
#define _FUNCIONARIO_

#include "PessoaFisica.hpp"
#include <iostream>

#define MATRICULA_PADRAO 0
#define SBASE_PADRAO 0
#define CH_PADRAO 0
#define HT_PADRAO 0

class Funcionario : public PessoaFisica
{
    public:
        Funcionario(const string & n, const string & c, int mat,
                    float sb, float ch, float ht);
        
        float calculaSalarioBruto() const;

        int   getMatricula() const;
        float getSalarioBase() const;
        float getCargaHoraria() const;
        float getHorasTrabalhadas() const;

        void setMatricula(int mat);
        void setSalarioBase(float sb);
        void setCargaHoraria(float ch);
        void setHorasTrabalhadas(float ht);

    protected:
        float calculaBonus() const;

    private:
        int   matricula;
        float salario_base;
        float carga_horaria;
        float horas_trabalhadas;
};

#endif