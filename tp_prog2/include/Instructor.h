#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Persona.h"
#include "Fecha.h"

class Instructor : public Persona
{
    private:
        int idInstructor;
        Fecha fechaContrato;
    public:
        Instructor();
        void setidInstructor(int id);
        int getidInstructor();

        void setFechaContrato(Fecha f);
        Fecha getFechaContrato();

        void cargar();
        void mostrar();

};

#endif // INSTRUCTOR_H




