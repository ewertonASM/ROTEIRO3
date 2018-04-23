#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Q1-Lista.h"
#include <iostream>

using namespace std;

Data datinha = Data(1, 1, 2018);
Data datona = Data(31, 12, 2017);
Data datosa = Data(31, 2, 2018);

void Data::setDia(int d)
{
    this->dia = d;
}

void Data::setMes(int m)
{
    this->mes = m;
}

void Data::setAno(int a)
{
    this->ano = a;
}

int Data::getDia()
{
    return this->dia;
}

int Data::getMes()
{
    return this->mes;
}

int Data::getAno()
{
    return this->ano;
}

void Data::pulaDia()
{
    this->dia++;

    if(this->dia > 31)
    {
        this->dia = 1;
        this->mes++;
        if (this->mes > 12)
        {
            this->mes = 1;
            this->ano++;
        }
    }
}

int main()
{
    datinha.pulaDia();
    datona.pulaDia();
    datosa.pulaDia();
    cout << "Dia: " << datinha.getDia() << " Mes: " << datinha.getMes() << " Ano: " << datinha.getAno() << endl;
    cout << "Dia: " << datona.getDia() << " Mes: " << datona.getMes() << " Ano: " << datona.getAno() << endl;
    cout << "Dia: " << datosa.getDia() << " Mes: " << datosa.getMes() << " Ano: " << datosa.getAno() << endl;
}

