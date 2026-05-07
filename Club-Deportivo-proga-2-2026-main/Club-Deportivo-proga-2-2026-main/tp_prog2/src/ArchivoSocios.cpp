#include <iostream>
#include "ArchivoSocios.h"
#include <stdio.h>
using namespace std;


ArchivoSocios::ArchivoSocios()
{

}

ArchivoSocios::ArchivoSocios(const char* archivo){}

int ArchivoSocios::cantidadRegistros()
{
    FILE * archivo = fopen(nombre,"rb");
    fseek(archivo, 0, SEEK_END);
    int byteFinal = ftell(archivo);
    int cant = byteFinal/sizeof(Socio);
    fclose(archivo);
    return cant;
}

int ArchivoSocios::buscarSocio(int idS) ///devuelve la posicion
{
    FILE * archivo = fopen(nombre,"rb");

    Socio buffer;

    int cant = cantidadRegistros();
    for (int i = 0 ; i < cantidadRegistros() ; i++)
    {
        fread(&buffer , sizeof(Socio),1,archivo);
        if(idS == buffer.getidSocio()){
                fclose(archivo);
                return i;
        }
    }
    fclose(archivo);
    return -1;
}

void ArchivoSocios::listarSocios()
{
    FILE * archivo = fopen(nombre,"rb");

    Socio buffer;

    int cant = cantidadRegistros();
    for (int i = 0 ; i < cantidadRegistros() ; i++)
    {
        fread(&buffer , sizeof(Socio),1,archivo);
        if(buffer.getEstado()) buffer.mostrarSocio();
    }
    fclose(archivo);
    return;
}
void ArchivoSocios::listarInactivos()
{
    FILE * archivo = fopen(nombre,"rb");

    Socio buffer;

    int cant = cantidadRegistros();
    for (int i = 0 ; i < cantidadRegistros() ; i++)
    {
        fread(&buffer , sizeof(Socio),1,archivo);
        if(!buffer.getEstado()) buffer.mostrarSocio();
    }
    fclose(archivo);
    return;
}
void ArchivoSocios::cambiarEstado(int pos){}

void ArchivoSocios::modificarRegistro(int pos){}

void ArchivoSocios::mostrarRegistro(int pos)
{
    FILE * archivo = fopen(nombre,"rb");

    Socio buffer;

    int cant = cantidadRegistros();
    fseek(archivo, pos*sizeof(Socio),SEEK_SET);

    fread(&buffer , sizeof(Socio),1,archivo);
    buffer.mostrarSocio();

    fclose(archivo);
    return;
}
Socio ArchivoSocios::cargarRegistro(int pos)
{
    FILE * archivo = fopen(nombre,"rb");

    Socio buffer;

    int cant = cantidadRegistros();
    fseek(archivo, pos*sizeof(Socio),SEEK_SET);

    fread(&buffer , sizeof(Socio),1,archivo);

    fclose(archivo);
    return buffer;
}
bool ArchivoSocios::grabarRegistro(Socio nuevoRegistro)
{
    FILE * archivo = fopen(nombre , "ab");
    fwrite(&nuevoRegistro , sizeof(Socio), 1, archivo);
    fclose(archivo);

}

int generarId(){}
