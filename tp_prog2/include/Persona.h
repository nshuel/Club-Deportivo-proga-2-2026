#ifndef PERSONA_H
#define PERSONA_H

#include "Fecha.h"

class Persona
{
    private:
        int dni;
        char apellido[30];
        char nombre[30];
        Fecha fechaNacimiento;
        char email[50];
        int telefono;

    public:
        Persona();

        int getDni();
        void setDni(int );

        const char * getApellido();
        void setApellido(const char *);

        const char * getNombre();
        void setNombre(const char *);

        Fecha getFechaNacimiento();
        void setFechaNacimiento(Fecha);

        const char * getEmail();
        void setEmail(const char *);

        int getTelefono();
        void setTelefono(int );

        void cargar();
        void mostrar();

    protected:


};

#endif // PERSONA_H
