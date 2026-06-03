#ifndef ARCHIVOACTIVIDADES_H_INCLUDED
#define ARCHIVOACTIVIDADES_H_INCLUDED
#include "Actividad.h"

class ArchivoActividades{
private:
    char nombre[50];
public:
    ArchivoActividades(const char* n="Actividades.dat");
    bool grabarRegistro(Actividad);
    bool modificarRegistro(Actividad,int);
    void listarActividades();
    Actividad leerRegistro(int);
    int contarRegistros();
    int buscarActividad(int);
};

#endif // ARCHIVOACTIVIDADES_H_INCLUDED
