#ifndef INSCRIPCION_H
#define INSCRIPCION_H
#include "Fecha.h"

class Inscripcion
{
    private:
        int idInscripcion;
        int idSocio;
        int idActividad;
        Fecha fechaInscripcion;
        bool estado;

    public:
        Inscripcion();
        Inscripcion(int,int,int);

        int getidInscripcion();
        void setidInscripcion(int);

        int getidSocio();
        void setidSocio(int);

        int getidActividad();
        void setidActividad(int);

        void setFechaInscripcion(Fecha);
        Fecha getFechaInscripcion();

        void setEstado(bool e);
        bool getEstado();

        void mostrar();

};

#endif // INSCRIPCION_H
