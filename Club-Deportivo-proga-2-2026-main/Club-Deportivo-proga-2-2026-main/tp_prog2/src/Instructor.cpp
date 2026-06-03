#include "Instructor.h"
#include <iostream>
using namespace std;

Instructor::Instructor()
{
    fechaContrato = Fecha();
    idInstructor = -1;
}

 void Instructor::setidInstructor(int idI)
 {
    idInstructor=idI;
 }

 void Instructor::setFechaContrato(Fecha f)
 {
     fechaContrato.setFecha(f.getAnio() , f.getMes() , f.getDia());
 }

 int Instructor::getidInstructor()
 {
     return idInstructor;
 }

 Fecha Instructor::getFechaContrato()
 {
     return fechaContrato;
 }
 void Instructor::setEstado(bool e){
    estado = e;
 }
 bool Instructor::getEstado(){
    return estado;
 }
void Instructor::cargar()
{
    cout<<"==========================="<<endl;
    Persona::cargar();
    cout<<endl;
    cout<<"FECHA DE CONTRATO: "<<endl;
    fechaContrato.Cargar();
    cout<<"==========================="<<endl;
}
void Instructor::mostrar(){
    Persona::mostrar();
    cout<<endl;
    cout<<"FECHA DE CONTRATO: "<<endl;
    fechaContrato.Mostrar();
    cout<<endl;
}
