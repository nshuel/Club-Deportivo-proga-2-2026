#include "Socio.h"
#include <iostream>
using namespace std;

Socio::Socio()
{
    fechaDeIngreso = Fecha();
    idSocio = -1;
}

Socio::Socio(int id, Fecha f)
{
    setidSocio(id);
    setFechaIngreso(f);
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

void Socio::setFechaIngreso(Fecha f)
{
    fechaDeIngreso.setFecha(f.getAnio() , f.getMes() , f.getDia());
}

int Socio::getidSocio()
{
    return idSocio;
}
Fecha Socio::getFechaIngreso()
{
    return fechaDeIngreso;
}

void Socio::cargarSocio()
{
    cout<<"==========================="<<endl;
    Persona::cargar();
    cout<<endl;
    cout<<"FECHA DE INSCRIPCION: "<<endl;
    fechaDeIngreso.Cargar();
    cout<<"==========================="<<endl;
}

void Socio::mostrarSocio()
{
    cout<<"==========================="<<endl;
    Persona::mostrar();
    cout<<endl;
    cout<<"FECHA DE INSCRIPCION: "<<endl;
    fechaDeIngreso.Mostrar();
    cout<<"==========================="<<endl;
}

