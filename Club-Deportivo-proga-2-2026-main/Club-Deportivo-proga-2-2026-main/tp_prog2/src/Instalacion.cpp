#include <iostream>
#include "Instalacion.h"
#include <cstring>
#include "cargarCadena.h"
using namespace std;

void Instalacion::setIdInstalacion(int id){
    idInstalacion=id;
}

void Instalacion::setTipo(const char* n){
        strcpy(tipo,n);
}
void Instalacion::setEstado(bool e){
    estado=e;
}

int Instalacion::getIdInstalacion(){
    return idInstalacion;
}

const char* Instalacion::getTipo(){
    return tipo;
}

bool Instalacion::getEstado(){
    return estado;
}

void Instalacion::mostrar(){
    cout<<"ID de instalacion: "<<idInstalacion<<endl;
    cout<<"Tipo de instalacion: "<<tipo<<endl;
    cout<<"Estado de la instalacion: "<<estado<<endl;
}

void Instalacion::cargar(){
    cout<<"Ingrese ID: ";
    cin>>idInstalacion;
    cout<<"Ingrese Tipo de instalacion: ";
    cargarCadena(tipo,20);
    cout<<"Ingrese Estado de la instalacion: ";
    cin>>estado;
}
