#include <iostream>
#include <cstring>
#include "Pagos.h"

using namespace std;
void Pago::setIdPago(int idP){
    idPago=idP;
}
void Pago::setIdSocio(int idS){
    idSocio=idS;
}

void Pago::setMonto(float m){
    monto=m;
}

void Pago::setFechaPago(Fecha f){
    fechaPago=f;
}

void Pago::setEstado(bool e){
    estado=e;
}
int Pago::getIdPago(){
    return idPago;
}

int Pago::getIdSocio(){
    return idSocio;
}

float Pago::getMonto(){
    return monto;
}

Fecha Pago::getFechaPago(){
    return fechaPago;
}

bool Pago::getEstado(){
    return estado;
}

void Pago::cargar(){
    cout<<"Ingrese el id del socio: ";
    cin>>idSocio;
    cout<<"Ingrese el monto del pago: ";
    cin>>monto;
    cout<<"Ingrese la fecha del pago: ";
    fechaPago.Cargar();
}

void Pago::mostrar(){
    cout<<"ID del socio: "<<idSocio<<endl;
    cout<<"Monto pagado: "<<monto<<endl;
    cout<<"Fecha del pago: " ; fechaPago.Mostrar() ; cout <<endl;
}
