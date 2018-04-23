#ifndef Q5_H
#define Q5_H
using namespace std;
class Despesa{
private:
    double valor;
    string tipoDeGasto;

public:
    Despesa();
    double getvalor();
    string gettipoDeGasto();
    void setvalor(double v);
    void settipoDeGasto(string tg);

};

class ControleDGastos{

public:
Despesa despesas[100];
void    setDespesas();
double calculaTotalDeDespesas();
bool existeDespesaDoTipo(string tipo);
};

#endif // Q5_H

