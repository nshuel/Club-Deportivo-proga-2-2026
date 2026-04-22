#ifndef CLASE_H
#define CLASE_H

#include "Instructor.h"
#include "Fecha.h"
#include "Socio.h"

class Clase
{
    private:
        Instructor instructor;
        ///Socio* socios;
        const char* deporte;
        Fecha fechaActividad;
        float precioActividad;
        int idClase;

    public:
        Clase();

        Instructor getInstructor();
        void setInstructor(Instructor i);

        const char* getDeporte();
        ///setDeporte()

        Fecha getFechaActividad();
        void setFechaActividad(Fecha f);

        ///getSocios
        ///setSocios

        float getPrecioActividad();
        void setPrecioActividad(float p);

        int getidActividad();
        void setidActividad(int id);

    protected:

};

#endif // CLASE_H
