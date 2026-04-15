#include "Socio.h"

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
