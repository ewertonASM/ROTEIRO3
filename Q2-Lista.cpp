#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "Q2-Lista.h"

using namespace std;

Invoice in = Invoice(1, "Novo", 2, 5.5);

void Invoice::setNumero(int n)
{
    this->numero = n;
}

void Invoice::setDescricao(string d)
{
    this->descricao = d;
}

void Invoice::setQuantidade(int q)
{
    this->quantidade = q;
}

void Invoice::setPreco(int p)
{
    this->preco = p;
}

int Invoice::getNumero()
{
    return this->numero;
}

string Invoice::getDescricao()
{
    return this->descricao;
}

int Invoice::getQuantidade()
{
    return this->quantidade;
}

float Invoice::getPreco()
{
    return this->preco;
}

float Invoice::getInvoiceAmount()
{
    if (quantidade < 0)
    {
        quantidade = 0;
    }
    if (preco < 0)
    {
        preco = 0;
    }

    return preco * quantidade;
}

int Invoice::main(int n, string d, int q, float p)
{
    numero = n;
    descricao = d;
    quantidade = q;
    preco = p;

    cout << "Numero: " << getNumero() << " Descricao: " << getDescricao() << " Quantidade: " << getQuantidade() << " Preco: " << getPreco() << endl;

    cout << "Fatura: " << getInvoiceAmount() << endl;
}

int main()
{
    in.main(1, "Novo", 2, 5.5);
}

