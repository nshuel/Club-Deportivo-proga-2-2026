#ifndef SOCIO_H
#define SOCIO_H

#include "Persona.h"
#include "Fecha.h"

class Socio : public Persona
{
    private:
        int idSocio;
        Fecha fechaDeInscripcion;

    public:
        Socio();
        Socio(int, Fecha);
        void setidSocio(int id);
        void setFechaInscripcion(Fecha f);

        int getidSocio();
        Fecha getFechaInscripcion();

        float cuotaMensual();

    protected:


};

#endif // SOCIO_H
