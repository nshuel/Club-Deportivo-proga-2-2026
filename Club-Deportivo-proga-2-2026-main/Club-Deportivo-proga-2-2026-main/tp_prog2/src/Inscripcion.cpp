#include "Inscripcion.h"

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
int Inscripcion::getidInscripcion(){
    return idInscripcion;
}
int Inscripcion::getidSocio(){
    return idSocio;
}
int Inscripcion::getidActividad(){
    return idActividad;
}
