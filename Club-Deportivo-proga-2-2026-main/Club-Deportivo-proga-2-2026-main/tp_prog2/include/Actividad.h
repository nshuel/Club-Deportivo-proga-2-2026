#ifndef CLASE_H
#define CLASE_H

#include "Instructor.h"
#include "Fecha.h"
#include "Socio.h"

class Actividad
{
    private:
        int idInstructor;
        ///Socio* socios;
        char deporte[30];
        Fecha fechaActividad;
        float precioActividad;
        int idActividad;
        bool estado;

    public:
        Actividad();

        int getInstructor();
        void setInstructor(int id);

        const char* getDeporte();
        void setDeporte(const char *);


        Fecha getFechaActividad();
        void setFechaActividad(Fecha f);

        ///getSocios
        ///setSocios

        float getPrecioActividad();
        void setPrecioActividad(float p);

        int getidActividad();
        void setidActividad(int id);

        void setEstado(bool e);
        bool getEstado();

        void cargar();
        void mostrar();
};

#endif // CLASE_H
