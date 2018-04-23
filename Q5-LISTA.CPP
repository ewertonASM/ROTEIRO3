#include<iostream>
#include"Q5-Lista.h"
#include<iostream>
using namespace std;

Despesa::Despesa(){
}
double Despesa::getvalor(){
    return valor;
}
string Despesa::gettipoDeGasto(){
    return tipoDeGasto;
}
void Despesa::setvalor(double v){
    this->valor = v;
}
void Despesa::settipoDeGasto(string tg){
    this->tipoDeGasto = tg;
}

double soma = 0;

double ControleDGastos::calculaTotalDeDespesas()
{
    for (int i = 0; i < 2; i++){
    soma = soma + this->despesas[i].getvalor();
    }
    return soma;
}
bool  ControleDGastos::existeDespesaDoTipo(string tipo){
    for (int j = 0; j < 100; j++){
    if(this->despesas[j].gettipoDeGasto() == tipo){
       return true;
       }else{
       return false;
       }
    }
}
int main()
{


    ControleDGastos sorvete;
    sorvete.despesas[0].setvalor(5);
    sorvete.despesas[0].settipoDeGasto("Academia");
    sorvete.despesas[1].setvalor(25);
    sorvete.despesas[1].settipoDeGasto("Lazer");

    cout << "Total de Despesa: " << sorvete.calculaTotalDeDespesas();



    return 0;
}

