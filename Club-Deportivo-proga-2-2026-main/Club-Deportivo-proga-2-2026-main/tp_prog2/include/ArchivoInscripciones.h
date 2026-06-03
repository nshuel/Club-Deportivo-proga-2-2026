#ifndef ARCHIVOINSCRIPCIONES_H_INCLUDED
#define ARCHIVOINSCRIPCIONES_H_INCLUDED
#include "Inscripcion.h"

class ArchivoInscripciones{
private:
    char nombre[50];
public:
    ArchivoInscripciones(const char* n="Inscripciones.dat");
    bool grabarRegistro(Inscripcion);
    bool modificarRegistro(Inscripcion,int);
    void listarInscripciones();
    Inscripcion leerRegistro(int);
    int contarRegistros();
    int buscarInscripcion(int);
    Inscripcion cargarRegistro(int);
};

#endif // ARCHIVOINSCRIPCIONES_H_INCLUDED
