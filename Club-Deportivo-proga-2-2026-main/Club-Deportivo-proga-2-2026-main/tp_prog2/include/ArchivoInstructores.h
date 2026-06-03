#ifndef ARCHIVOINSTRUCTORES_H_INCLUDED
#define ARCHIVOINSTRUCTORES_H_INCLUDED
#include "Instructor.h"

class ArchivoInstructores{
private:
    char nombre[50];
public:
    ArchivoInstructores(const char* n="Instructor.dat");
    bool grabarRegistro(Instructor);
    bool modificarRegistro(Instructor,int);
    void listarInstructores();
    Instructor leerRegistro(int);
    int contarRegistros();
    int buscarInstructor(int);
    Instructor cargarRegistro(int);
};

#endif // ARCHIVOINSTRUCTORES_H_INCLUDED
