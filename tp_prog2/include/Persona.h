#ifndef PERSONA_H
#define PERSONA_H

#include "Fecha.h"

class Persona
{
    private:
        int edad;
        int dni;
        char domicilio[50];
        char apellido[50];
        char nombre[50];
        Fecha fechaNacimiento;
        char email[50];
        int telefono;

    public:
        Persona();

        int getEdad();
        void setEdad(int val);

        int getDni();
        void setDni(int val);

        const char * getDomicilio();
        void setDomicilio(const char * val);

        const char * getApellido();
        void setApellido(const char * val);

        const char * getNombre();
        void setNombre(const char * val);

        Fecha getFechaNacimiento();
        void setFechaNacimiento(Fecha val);

        const char * getEmail();
        void setEmail(const char *val);

        int getTelefono();
        void setTelefono(int val);

    protected:


};

#endif // PERSONA_H
