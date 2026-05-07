#include "Instructor.h"
#include <iostream>
using namespace std;

Instructor::Instructor()
{
    fechaContrato = Fecha();
    idInstructor = -1;
}

/*Instructor::Instructor(int id, Fecha f)
(
    setIdInstructor(id);
    setFechaContrato(f);
 )
*/
 void Instructor::setidInstructor(int id)
 {
    idInstructor=id;
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
void Instructor::cargar()
{
    cout<<"==========================="<<endl;
    Persona::cargar();
    cout<<endl;
    cout<<"FECHA DE CONTRATO: "<<endl;
    fechaContrato.Cargar();
    cout<<"==========================="<<endl;
}
