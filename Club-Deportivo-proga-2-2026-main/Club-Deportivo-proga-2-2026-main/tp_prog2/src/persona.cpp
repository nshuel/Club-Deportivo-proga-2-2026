#include "persona.h"
#include "cstring"
#include "cargarCadena.h"
#include <iostream>


using namespace std;

Persona::Persona()
{

}
void Persona::setDni(int d){
    dni=d;
}
void Persona::setNombre(const char* n){
    strcpy(nombre, n);
}
void Persona::setApellido(const char* a){
    strcpy(apellido, a);
}
void Persona::setFechaNacimiento(Fecha f){
    fechaNacimiento.setFecha(f.getAnio() , f.getMes() , f.getDia());
}
void Persona::setEmail(const char * e){
     strcpy(email, e);
}
void Persona::setTelefono(int t){
    telefono = t;
}

int Persona::getDni(){
    return dni;
}

const char *Persona::getNombre(){
    return nombre;
}

const char *Persona::getApellido(){
    return apellido;
}

const char *Persona::getEmail(){
    return email;
}

int Persona::getTelefono(){
    return telefono;
}

void Persona::cargar(){
    cout<<"NOMBRE: ";
    cargarCadena(nombre,30);
    cout<<"APELLIDO: ";
    cargarCadena(apellido,30);
    cout<<"DNI: ";
    cin>>dni;
    cout<<"EMAIL: ";
    cargarCadena(email,50);
    cout<<"TELEFONO: ";
    cin>>telefono;
    cout<<endl;
    cout<<"FECHA DE NACIMIENTO: "<<endl;
    fechaNacimiento.Cargar();
}

void Persona::mostrar()
{
    cout<<"NOMBRE: " << nombre <<endl;
    cout<<"APELLIDO: " << apellido <<endl;
    cout<<"DNI: " << dni <<endl;
    cout<<"EMAIL: " << email <<endl;
    cout<<"TELEFONO: " << telefono <<endl;
    cout<<"FECHA DE NACIMIENTO: "<<endl;
    fechaNacimiento.Mostrar();
}

