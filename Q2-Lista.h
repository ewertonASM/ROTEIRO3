#ifndef Q2_H
#define Q2_H

using namespace std;

class Invoice
{
private:
    int numero;
    string descricao;
    int quantidade;
    float preco;

public:
    Invoice();
    Invoice(int n, string d, int q, int p)
    {
        numero = n;
        descricao = d;
        quantidade = q;
        preco = p;
    }
    int getNumero();
    string getDescricao();
    int getQuantidade();
    float getPreco();
    void setNumero(int);
    void setDescricao(string);
    void setQuantidade(int);
    void setPreco(int);

    float getInvoiceAmount();

    int main(int, string, int, float);
};

#endif // Q2_H
