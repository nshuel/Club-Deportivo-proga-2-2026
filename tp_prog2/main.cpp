#include <iostream>
#include <stdio.h>
#include <filesystem>
#include <cstring>

#include "menus.h"

#define existe(path) std::filesystem::exists(path)

using namespace std;
void menuPrincipal(){

}
int main()
{
    /*
    const char archivoAlumnos[] = "./archivos/Alumnos.dat";
    FILE *f_alumnos;
    if( ! std::filesystem::exists(archivoAlumnos) )
    {
        f_alumnos = fopen(archivoAlumnos, "wb");
        fclose(f_alumnos);
    }

    f_alumnos = fopen(archivoAlumnos, "rb");


    */

    /*
    menu principal:
        acciones socios:
            - agregarSocio
            - listarSocios
            - BuscarSocio
            - EditarSocio
            - EliminarSocio
        acciones instructores:
            - agregarInstructor
            - Eliminarinstructor
            - BuscarInstructor
            - EditarInstructor
            - Listarinstructores
        acciones clases:
            - agregarClase
            - EditarClase
            - EliminarClase
            - listarClases
            - buscarClase
        acciones inscripciones:
            - inscribir socio a clase
            - listarInscripciones
        reportes

    */
    //menuPrincipal();

    return 0;
}
