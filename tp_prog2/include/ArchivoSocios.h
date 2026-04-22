#ifndef ARCHIVOSOCIOS_H
#define ARCHIVOSOCIOS_H
#include "Socio.h"

class ArchivoSocios
{
     private:
        char nombre[30];

    public:
        ArchivoSocios();
        ArchivoSocios(const char* archivo);

        int cantidadRegistros();
        int buscarSocio(int idS); ///devuelve la posicion

        void listarSocios();
        void listarInactivos();

        void cambiarEstado(int pos);

        void modificarRegistro(int pos);

        void mostrarRegistro(int pos);
        Socio cargarRegistro(int pos);
        void grabarRegistro();

        int generarId();
};

#endif // ARCHIVOSOCIOS_H
