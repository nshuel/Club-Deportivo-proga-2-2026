#include "Instructor.h"

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
