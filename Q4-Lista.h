#ifndef Q4-LISTA_H_INCLUDED
#define Q4-LISTA_H_INCLUDED

using namespace std;

class Pessoa
{
private:
    string nome;
    int idade;
    string telefone;
public:
    Pessoa(string n)
    {
        nome = n;
    }
    Pessoa(string n, int i, string t)
    {
        nome = n;
        idade = i;
        telefone = t;
    }
    string getNome();
    int getIdade();
    string getTelefone();
    void setNome(string);
    void setIdade(int);
    void setTelefone(string);
};

class CadastroDePessoas
{
    Pessoa pessoinha[10];
public:
    void main(string n[10], int i[10], string t[10]);
};


#endif // Q4-LISTA_H_INCLUDED
