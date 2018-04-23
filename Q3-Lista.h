#ifndef Q3-LISTA_H_INCLUDED
#define Q3-LISTA_H_INCLUDED
using namespace std;

class Empregado
{
private:
    string nome;
    string sobrenome;
    float salario;
public:
    Empregado(string n, string s, float sal)
    {
        nome = n;
        sobrenome = s;
        salario = sal;
    }
    string getNome();
    string getSobrenome();
    float getSalario();
    void setNome(string);
    void setSobrenome(string);
    void setSalario(float);
};

#endif // Q3-LISTA_H_INCLUDED
