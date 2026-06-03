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

        int contarRegistros();
        int buscarSocio(int idS); ///devuelve la posicion

        void listarSocios();

        void modificarRegistro(int pos , Socio obj);

        void mostrarRegistro(int pos);
        Socio cargarRegistro(int pos);
        bool grabarRegistro(Socio nuevoRegistro);

        int generarId();
};

#endif // ARCHIVOSOCIOS_H
