#include <iostream>
#include "Q4-Lista.h",
#include <stdlib.h>

using namespace std;

string Pessoa::getNome()
{
    return this->nome;
}

int Pessoa::getIdade()
{
    return this->idade;
}

string Pessoa::getTelefone()
{
    return this->telefone;
}

void Pessoa::setNome(string n)
{
    this->nome = n;
}

void Pessoa::setIdade(int i)
{
    this->idade = i;
}

void Pessoa::setTelefone(string t)
{
    this->telefone = t;
}

void CadastroDePessoas::main(string n[10], int i[10], string t[10])
{
    for (int j = 0; j < 10; j++)
    {
    this->pessoinha[j].setNome(n[j]);
    this->pessoinha[j].setIdade(i[j]);
    this->pessoinha[j].setTelefone(t[j]);
    }
}

