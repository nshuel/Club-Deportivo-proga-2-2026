#ifndef ARCHIVOPAGOS_H_INCLUDED
#define ARCHIVOPAGOS_H_INCLUDED
#include "Pagos.h"
class ArchivoPagos
{
private:
        char nombre[30];

    public:
        ArchivoPagos();
        ArchivoPagos(const char* n="Pagos.dat");

        int contarRegistros();
        int buscarPago(int idP);

        void listarPagos();

        bool modificarRegistro(int pos , Pago obj);

        void mostrarRegistro(int pos);
        Pago leerRegistro(int pos);
        bool grabarRegistro(Pago nuevoRegistro);

};


#endif // ARCHIVOPAGOS_H_INCLUDED
