#ifndef SOCIO_H
#define SOCIO_H

#include "Persona.h"
#include "Fecha.h"

class Socio : public Persona
{
    private:
        int idSocio;
        bool estado;
        Fecha fechaDeIngreso;

    public:
        Socio();
        Socio(int, Fecha);
        void setidSocio(int id);
        void setFechaIngreso(Fecha f);
        void setEstado(bool est);


        int getidSocio();
        Fecha getFechaIngreso();
        bool getEstado();

        void cargarSocio();
        void mostrarSocio();

};

#endif // SOCIO_H
