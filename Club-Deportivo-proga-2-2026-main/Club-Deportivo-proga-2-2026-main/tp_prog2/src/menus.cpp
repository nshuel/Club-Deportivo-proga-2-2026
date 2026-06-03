#include <iostream>
#include "Persona.h"
using namespace std;
/*
void menuSocios();
void menuInscripciones();
void menuActividades();
void menuInstalaciones();
void menuInstructores();
void menuPagos();

void menuPrincipal()
{
    int seleccionPrincipal = 0;
    while(seleccionPrincipal != 7)
    {
        cout << "Menu Principal" << endl;
        cout << "1 - Socios" << endl;
        cout << "2 - Instructores" << endl;
        cout << "3 - Actividades" << endl;
        cout << "4 - Inscripciones " << endl;
        cout << "5 - Pagos " << endl;
        cout << "6 - Instalaciones" << endl;
        cout << "7 - Salir" << endl;

        cin >> seleccionPrincipal;
        switch(seleccionPrincipal)
        {
            case 1:
                menuSocios();
                break;
            case 2:
                menuInstructores();
                break;
            case 3:
                menuActividades();
                break;
            case 4:
                menuInscripciones();
                break;
            case 5:
                menuPagos();
                break;
            case 6:
                menuInstalaciones();
                break;
            default:
                break;
        }
    }
}

void menuSocios()
{
    int seleccionSocio = 0;
    while(seleccionSocio != 6)
    {
        cout << "Menu Socios" << endl;
        cout << "1 - Agregar Socio" << endl;
        cout << "2 - Inhabilitar Socio" << endl;
        cout << "3 - Habilitar Socio" << endl;
        cout << "4 - Editar Socio" << endl;
        cout << "5 - Listar Socios " << endl;
        cout << "6 - Buscar Socio " << endl;
        cout << "6 - Salir" << endl;

        cin >> seleccionSocio;
        switch(seleccionSocio)
        {
            case 1:
                agregarSocio();
                break;
            case 2:
                quitarSocio();
                break;
            case 3:
                ///editarSocio();
                break;
            case 4:
                listarSocios();
                break;
            case 5:
                buscarSocio();
                break;
            default:
                break;
        }
    }
}

void menuInstructores()
{
    int seleccionSocio = 0;
    while(seleccionSocio != 6)
    {
        cout << "Menu Instructores" << endl;
        cout << "1 - Agregar Instructor" << endl;
        cout << "2 - Quitar Instructor" << endl;
        cout << "3 - Editar Instructor" << endl;
        cout << "4 - Listar Instructor " << endl;
        cout << "5 - Buscar Instructor " << endl;
        cout << "6 - Salir" << endl;

        cin >> seleccionSocio;
        switch(seleccionSocio)
        {
            case 1:
                agregarInstructor();
                break;
            case 2:
                quitarInstructor();
                break;
            case 3:
                ///editarInstructor();
                break;
            case 4:
                listarInstructor();
                break;
            case 5:
                buscarInstructor();
                break;
            case default:
                break;
        }
    }
}
void menuActividades()
{
    int seleccionActividad = 0;
    while(seleccionActividad != 6)
    {
        cout << "Menu Actividades" << endl;
        cout << "1 - Agregar Actividad" << endl;
        cout << "2 - Quitar Actividad" << endl;
        cout << "3 - Editar Actividad" << endl;
        cout << "4 - Listar Actividad " << endl;
        cout << "5 - Buscar Actividad " << endl;
        cout << "6 - Salir" << endl;

        cin >> seleccionActividad;
        switch(seleccionActividad)
        {
            case 1:
                agregarActividad();
                break;
            case 2:
                quitarActividad();
                break;
            case 3:
                ///editarActividad();
                break;
            case 4:
                listarActividad();
                break;
            case 5:
                buscarActividad();
                break;
            case default:
                break;
        }
    }
}
void menuInstalaciones()
{
    int seleccionInstalacion = 0;
    while(seleccionInstalacion != 6)
    {
        cout << "Menu Instalaciones" << endl;
        cout << "1 - Agregar Instalacion" << endl;
        cout << "2 - Quitar Instalacion" << endl;
        cout << "3 - Editar Instalacion" << endl;
        cout << "4 - Listar Instalacion " << endl;
        cout << "5 - Buscar Instalacion " << endl;
        cout << "6 - Salir" << endl;

        cin >> seleccionInstalacion;
        switch(seleccionInstalacion)
        {
            case 1:
                agregarInstalacion();
                break;
            case 2:
                quitarInstalacion();
                break;
            case 3:
                ///editarInstalacion();
                break;
            case 4:
                listarInstalacion();
                break;
            case 5:
                buscarInstalacion();
                break;
            case default:
                break;
        }
    }
}
void menuInscripciones()
{
    int seleccionInscripcion = 0;
    while(seleccionInscripcion != 6)
    {
        cout << "Menu Inscripciones" << endl;
        cout << "1 - Agregar Inscripcion" << endl;
        cout << "2 - Quitar Inscripcion" << endl;
        cout << "3 - Editar Inscripcion" << endl;
        cout << "4 - Listar Inscripcion " << endl;
        cout << "5 - Buscar Inscripcion " << endl;
        cout << "6 - Salir" << endl;

        cin >> seleccionInscripcion;
        switch(seleccionInscripcion)
        {
            case 1:
                agregarInscripcion();
                break;
            case 2:
                quitarInscripcion();
                break;
            case 3:
                ///editarInscripcion();
                break;
            case 4:
                listarInscripcion();
                break;
            case 5:
                buscarInscripcion();
                break;
            case default:
                break;
        }
    }
}

void menuPagos()
{
    int seleccionPago = 0;
    while(seleccionPago != 6)
    {
        cout << "Menu Pagos" << endl;
        cout << "1 - Agregar Pago" << endl;
        cout << "2 - Quitar Pago" << endl;
        cout << "3 - Editar Pago" << endl;
        cout << "4 - Listar Pago " << endl;
        cout << "5 - Buscar Pago " << endl;
        cout << "6 - Salir" << endl;

        cin >> seleccionPago;
        switch(seleccionPago)
        {
            case 1:
                agregarPago();
                break;
            case 2:
                quitarPago();
                break;
            case 3:
                ///editarPago();
                break;
            case 4:
                listarPago();
                break;
            case 5:
                buscarPago();
                break;
            case default:
                break;
        }
    }
}
*/
