#include <iostream>
#include <stdio.h>
#include <filesystem>
#include <cstring>
#include "Persona.h"
#include "menus.h"
#include "Socio.h"

using namespace std;
void menuPrincipal(){

}
int main()
{
    Socio obj;
    obj.cargarSocio();
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
            - Cuanto se recaudo del mes x al mes x
            - Cuantos socios se anotaron despues de x
            - Cuanto se recaudo al final del año por deporte
            - Cuanto genero el club x año

    */
    //menuPrincipal();

    return 0;
}
