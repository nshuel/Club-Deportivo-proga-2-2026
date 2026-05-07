#include "Socio.h"
#include <iostream>
using namespace std;

Socio::Socio()
{
    fechaDeInscripcion = Fecha();
    idSocio = -1;
}

Socio::Socio(int id, Fecha f)
{
    setidSocio(id);
    setFechaInscripcion(f);
}

void Socio::setidSocio(int id)
{
    idSocio = id;
}

void Socio::setEstado(bool est)
{
    estado=est;
}
bool Socio::getEstado(){
    return estado;
}

void Socio::setFechaInscripcion(Fecha f)
{
    fechaDeInscripcion.setFecha(f.getAnio() , f.getMes() , f.getDia());
}

int Socio::getidSocio()
{
    return idSocio;
}
Fecha Socio::getFechaInscripcion()
{
    return fechaDeInscripcion;
}

float Socio::cuotaMensual()
{
    const int arancelBasico = 10000;
    return arancelBasico; // falta sumar por cada deporte
}

void Socio::cargarSocio()
{
    cout<<"==========================="<<endl;
    Persona::cargar();
    cout<<endl;
    cout<<"FECHA DE INSCRIPCION: "<<endl;
    fechaDeInscripcion.Cargar();
    cout<<"==========================="<<endl;
}

void Socio::mostrarSocio()
{

}

