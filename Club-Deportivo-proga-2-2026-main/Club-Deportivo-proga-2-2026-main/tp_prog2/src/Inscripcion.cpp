#include "Inscripcion.h"
#include <iostream>
#include "cstring"

using namespace std;

Inscripcion::Inscripcion()
{
    idInscripcion = -1;
    idSocio = -1;
    idActividad = -1;
}
void Inscripcion::setidInscripcion(int idIns){
    idInscripcion = idIns;
}
void Inscripcion::setidSocio(int idSoc){
    idSocio = idSoc;
}
void Inscripcion::setidActividad(int idAct){
    idActividad = idAct;
}
void Inscripcion::setFechaInscripcion(Fecha f){
    fechaInscripcion = f;
}
void Inscripcion::setEstado(bool e){
    estado = e;
}
int Inscripcion::getidInscripcion(){
    return idInscripcion;
}
int Inscripcion::getidSocio(){
    return idSocio;
}
int Inscripcion::getidActividad(){
    return idActividad;
}
Fecha Inscripcion::getFechaInscripcion(){
    return fechaInscripcion;
}
bool Inscripcion::getEstado(){
    return estado;
}
void Inscripcion::mostrar(){
    cout<<"==========================="<<endl;
    cout<<"ID DE LA INSCRIPCION"<<idInscripcion<<endl;
    cout<<"ID DEL SOCIO"<<idSocio<<endl;
    cout<<"ID DE LA ACTIVIDAD"<<idActividad<<endl;
    cout<<"FECHA DE LA INSCRIPCION" << endl;
    fechaInscripcion.Mostrar();
    cout << endl;
    cout<<"==========================="<<endl;
}
