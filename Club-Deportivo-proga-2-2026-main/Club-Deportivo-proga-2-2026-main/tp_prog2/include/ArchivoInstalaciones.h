#ifndef ARCHIVOINSTALACION_H_INCLUDED
#define ARCHIVOINSTALACION_H_INCLUDED
#include "Instalacion.h"

class ArchivoInstalacion{
private:
    char nombre[50];
public:
    ArchivoInstalacion(const char* n="Instalacion.dat");
    bool grabarRegistro(Instalacion);
    bool modificarRegistro(Instalacion,int);
    void listarInstalaciones();
    Instalacion leerRegistro(int);
    int contarRegistros();
    int buscarInstalacion(int);
    Instalacion cargarRegistro(int);
};


#endif // ARCHIVOINSTALACION_H_INCLUDED
