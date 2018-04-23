#include <iostream>
#include <stdio.h>
#include "Questao6.h"

using namespace std;

double Pagamento::getvalorPagamento()
{
    return this->valorPagamento;
}
void Pagamento::setvalorPagamento(double val)
{
    val = valorPagamento;
}
string Pagamento::getnomeDoFuncionario()
{
    return this->nomeDoFuncionario;
}
void Pagamento::setnomeDoFuncionario (string nom)
{
    nom = nomeDoFuncionario;
}

void ControleDePagamentos::setPagamentos(double v)
{
    for (int i = 0; i < 10; i++)
    {
        pagamento[i].valorpagamento = v;
    }
}
double ControleDePagamentos::calculaTotalPagamentos()
{
    double soma;
    for(int i = 0; i < 10; i++)
    {
        soma+= pagamento[i].valorpagamento;
    }
    return soma;
}
bool ControleDePagamentos::existePagamentoParaFuncionario(string Pagamento.nomeFuncionario)
{
    if()
}
