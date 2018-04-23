#ifndef Q1_H
#define Q1_H

class Data
{
private:
    int dia;
    int mes;
    int ano;
public:
    Data();
    Data(int d, int m, int a)
    {
        dia = d;
        mes = m;
        ano = a;
    }
    void setDia(int d);
    void setMes(int m);
    void setAno(int a);
    int getDia();
    int getMes();
    int getAno();
    void pulaDia();
};

#endif // Q1_H
