#include "Fecha.h"
#include <iostream>
using namespace std;
Fecha::Fecha()
{
    anio = 2000;
    mes = 1;
    dia = 1;
}

Fecha::Fecha(int a, int m, int d)
{
    setFecha(a,m,d);
}

int Fecha::getAnio()
{
    return anio;
}

int Fecha::getDia()
{
    return dia;
}

int Fecha::getMes()
{
    return mes;
}

void Fecha::setAnio(int a)
{
    if(a>1900 && a<2030)
    {
        anio = a;
    }
}

void Fecha::setDia(int d)
{
    if(d >= 1 && d <= 31)
    {
        dia = d;
    }
}

void Fecha::setMes(int m)
{
    if(m >= 1 && m <= 12)
    {
        mes = m;
    }
}

void Fecha::setFecha(int a, int m, int d)
{
    setAnio(a);
    setMes(m);
    setDia(d);
}

void Fecha::Cargar(){
    cout<<"DIA: ";
    cin>>dia;
    cout<<"MES: ";
    cin>>mes;
    cout<<"AÑO: ";
    cin>>anio;
}

void Fecha::Mostrar(){
    cout<<dia<<"/"<<mes<<"/"<<anio;
}
