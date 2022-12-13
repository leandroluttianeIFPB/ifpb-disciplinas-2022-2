#include "Funcionario.hpp"

Funcionario::Funcionario(const string &n, const string &c, int mat,
            float sb, float ch, float ht)
            : PessoaFisica(n, c)
{
    setMatricula(mat);
    setSalarioBase(sb);
    setCargaHoraria(ch);
    setHorasTrabalhadas(ht);
}

float Funcionario::calculaSalarioBruto() const
{
    return salario_base * (horas_trabalhadas / carga_horaria) + calculaBonus();
}

int Funcionario::getMatricula() const
{
    return matricula;
}

float Funcionario::getSalarioBase() const
{
    return salario_base;
}

float Funcionario::getCargaHoraria() const
{
    return carga_horaria;
}

float Funcionario::getHorasTrabalhadas() const
{
    return horas_trabalhadas;
}

void Funcionario::setMatricula(int mat)
{
    if(mat > 0)
    {
        matricula = mat;
    }
    else
    {
        cerr << "\n ERRO: matricula invalida!";
        matricula = MATRICULA_PADRAO;
    }
}

void Funcionario::setSalarioBase(float sb)
{
    if (sb > 0)
    {
        salario_base = sb;
    }
    else
    {
        cerr << "\n ERRO: salario base invalido!";
        salario_base = SBASE_PADRAO;
    }
}

void Funcionario::setCargaHoraria(float ch)
{
    if (ch > 0)
    {
        carga_horaria = ch;
    }
    else
    {
        cerr << "\n ERRO: carga horaria invalida!";
        carga_horaria = CH_PADRAO;
    }
}

void Funcionario::setHorasTrabalhadas(float ht)
{
    if(ht >= 0)
    {
        horas_trabalhadas = ht <= carga_horaria ? ht : carga_horaria; 
    }
    else
    {
        cerr << "\n ERRO: valor de horas trabalhadas invalido!";
        ht = HT_PADRAO;
    }
}

float Funcionario::calculaBonus() const
{
    return 0.0;
}