#ifndef INSTRUCTOR_H
#define INSTRUCTOR_H

#include "Persona.h"

class Instructor : public Persona
{
    public:
        Instructor();
        void setidInstructor(int id);
        int getidInstructor();

        void setFechaContrato(Fecha f);
        Fecha getFechaContrato();

    protected:

    private:
        int idInstructor;
        Fecha fechaContrato;
};

#endif // INSTRUCTOR_H



///clase - deporte - instructor - Socios - Fecha
