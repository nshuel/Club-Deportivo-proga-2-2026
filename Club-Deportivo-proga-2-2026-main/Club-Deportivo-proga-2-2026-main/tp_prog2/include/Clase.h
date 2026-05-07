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
        Fecha fechaClase;
        float precioClase;
        int idClase;

    public:
        Clase();

        Instructor getInstructor();
        void setInstructor(Instructor i);

        const char* getDeporte();
        ///setDeporte()

        Fecha getFechaClase();
        void setFechaClase(Fecha f);

        ///getSocios
        ///setSocios

        float getPrecioClase();
        void setPrecioClase(float p);

        int getidClase();
        void setidClase(int id);

    protected:

};

#endif // CLASE_H
