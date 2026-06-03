#include <iostream>
#include "ArchivoSocios.h"
#include <stdio.h>
using namespace std;


ArchivoSocios::ArchivoSocios()
{

}

ArchivoSocios::ArchivoSocios(const char* archivo){}

int ArchivoSocios::contarRegistros()
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

    int cant = contarRegistros();
    for (int i = 0 ; i < cant ; i++)
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

    int cant = contarRegistros();
    for (int i = 0 ; i < cant ; i++)
    {
        fread(&buffer , sizeof(Socio),1,archivo);
        if(buffer.getEstado()) buffer.mostrarSocio();
    }
    fclose(archivo);
    return;
}
/*
void ArchivoSocios::listarInactivos()
{
    FILE * archivo = fopen(nombre,"rb");

    Socio buffer;

    int cant = contarRegistros();
    for (int i = 0 ; i < contarRegistros() ; i++)
    {
        fread(&buffer , sizeof(Socio),1,archivo);
        if(!buffer.getEstado()) buffer.mostrarSocio();
    }
    fclose(archivo);
    return;
}
*/

void ArchivoSocios::modificarRegistro(int pos , Socio obj){
    FILE * archivo = fopen(nombre , "rb+");

    fseek(archivo , pos * sizeof(Socio) , SEEK_SET);

    fwrite(&obj , sizeof(Socio) , 1 , archivo);

    fclose(archivo);
}

void ArchivoSocios::mostrarRegistro(int pos)
{
    FILE * archivo = fopen(nombre,"rb");

    Socio buffer;

    int cant = contarRegistros();
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

    int cant = contarRegistros();
    fseek(archivo, pos*sizeof(Socio),SEEK_SET);

    fread(&buffer , sizeof(Socio),1,archivo);

    fclose(archivo);
    return buffer;
}
bool ArchivoSocios::grabarRegistro(Socio nuevoRegistro)
{
    FILE * archivo = fopen(nombre , "ab");
    bool escribio = fwrite(&nuevoRegistro , sizeof(Socio), 1, archivo);
    fclose(archivo);
    return escribio;

}

int ArchivoSocios::generarId(){
    int nuevoId = contarRegistros() + 1;
    if(nuevoId < 1) nuevoId = 1;
    return nuevoId;
}
