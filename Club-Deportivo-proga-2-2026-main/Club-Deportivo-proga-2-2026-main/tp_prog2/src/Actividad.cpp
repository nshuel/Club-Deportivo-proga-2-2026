#include <iostream>
#include "cstring"
#include "cargarCadena.h"
#include "Actividad.h"

using namespace std;

Actividad::Actividad()
{
    idActividad = -1;
    fechaActividad = Fecha();
    precioActividad = -1;
    idInstructor = -1;
}

void Actividad::setDeporte(const char* n){
    strcpy(deporte, n);
}

void Actividad::setidActividad(int idAct){
    idActividad = idAct;
}

int Actividad::getidActividad(){
    return idActividad;
}

float Actividad::getPrecioActividad()
{
    return precioActividad;
}

void Actividad::setPrecioActividad(float p)
{
    precioActividad = p;
}

int Actividad::getInstructor()
{
    return idInstructor;
}

void Actividad::setInstructor(int idI)
{
    idInstructor = idI;
}
const char *Actividad::getDeporte()
{
    return deporte;
}

void Actividad::setEstado(bool e){
    estado = e;
}
bool Actividad::getEstado(){
    return estado;
}
void Actividad::cargar(){
    cout<<"==================================="<<endl;
    cout<<"INGRESE EL NOMBRE DE LA ACTIVIDAD: "<<endl;
    cargarCadena(deporte,30);
    cout<<"INGRESE EL ID DEL INSTRUCTOR ASIGNADO A LA ACTIVIDAD: "<<endl;
    cin>>idInstructor;
    cout<<"INGRESE EL PRECIO DE LA ACTIVIDAD: "<<precioActividad<<endl;
    cout<<"===================================="<<endl;
}
void Actividad::mostrar(){
    cout<<"NOMBRE DE LA ACTIVIDAD: "<<deporte<<endl;
    cout<<"ID DEL INSTRUCTOR ASIGNADO: "<<idInstructor<<endl;
    cout<<"PRECIO DE LA ACTIVIDAD: "<<precioActividad<<endl;
}
