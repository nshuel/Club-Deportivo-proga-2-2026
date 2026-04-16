#ifndef SOCIO_H
#define SOCIO_H

#include "Persona.h"
#include "Fecha.h"

class Socio : public Persona
{
    private:
        int idSocio;
        bool estado;
        Fecha fechaDeInscripcion;

    public:
        Socio();
        Socio(int, Fecha);
        void setidSocio(int id);
        void setFechaInscripcion(Fecha f);
        void setEstado(bool est);


        int getidSocio();
        Fecha getFechaInscripcion();

        float cuotaMensual();

        void cargarSocio();
        void mostrarSocio();

    protected:


};

#endif // SOCIO_H
