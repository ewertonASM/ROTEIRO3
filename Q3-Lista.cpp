#include <stdio.h>
#include <iostream>
#include "Q3-Lista.h"
using namespace std;

Empregado empregadinho = Empregado("Joao", "Antonaldinho", 5000);
Empregado empregadoso = Empregado("Roberson", "Marderson", 10000);

string Empregado::getNome()
{
    return nome;
}
string Empregado::getSobrenome()
{
    return sobrenome;
}
float Empregado::getSalario()
{
    return salario;
}
void Empregado::setNome(string n)
{
    this->nome = n;
}
void Empregado::setSobrenome(string s)
{
    this->sobrenome = s;
}
void Empregado::setSalario(float sal)
{
    this->salario = sal;
}

int main()
{
    cout << "Salario inicial dos empregados, Joao: " << empregadinho.getSalario() << " e, o de Roberson: " << empregadoso.getSalario() << endl;
    empregadinho.setSalario(1.1*empregadinho.getSalario());
    empregadoso.setSalario(1.1*empregadoso.getSalario());
    cout << "\nSalario dos homens com o acrescimo de 10%, Joao: " << empregadinho.getSalario() << " e, o de Roberson: " << empregadoso.getSalario() << endl;
}
