#ifndef QUESTAO6_H_INCLUDED
#define QUESTAO6_H_INCLUDED

using namespace std;

class Pagamento
{
    double valorPagamento;
    string nomeDoFuncionario;
public:
    double getvalorPagamento();
    void setvalorPagamento(double);
    string getnomeDoFuncionario();
    void setnomeDoFuncionario(string);
};
class ControleDePagamentos
{
    Pagamento pagamentos[10];
public:
    void setPagamentos();
    double calculaTotalPagamentos();
    bool existePagamentoParaFuncionario(string nomeFuncionario);
};



#endif // QUESTAO6_H_INCLUDED
