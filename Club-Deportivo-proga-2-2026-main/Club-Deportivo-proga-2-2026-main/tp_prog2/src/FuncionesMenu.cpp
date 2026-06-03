#include "FuncionesMenu.h"
#include <iostream>
using namespace std;

void altaSocio(){
    ArchivoSocios arc;
    int id;
    cout<<"INGRESE EL ID DEL SOCIO: ";
    cin>>id;
        if(id > arc.contarRegistros())
    {
        cout << "el id ingresado no es valido";
        return;
    }

    int pos = arc.buscarSocio(id);

    Socio socioModificado = arc.cargarRegistro(pos);
    socioModificado.setEstado(true);

    arc.modificarRegistro(pos , socioModificado);
    }

void agregarSocio(){
    ArchivoSocios arc;
    Socio obj;
    obj.cargar();
    obj.setidSocio(arc.contarRegistros() + 1);
    arc.grabarRegistro(obj);
}
void bajaSocio(){
    ArchivoSocios arc;

    int id;
    cout<<"INGRESE EL ID DEL SOCIO: ";
    cin>>id;

    if(id > arc.contarRegistros())
    {
        cout << "el id ingresado no es valido";
        return;
    }

    int pos = arc.buscarSocio(id);

    Socio socioModificado = arc.cargarRegistro(pos);
    socioModificado.setEstado(false);

    arc.modificarRegistro(pos , socioModificado);
}

void modificarSocio()
{
    ArchivoSocios arc;

    int id;
    cout<<"INGRESE EL ID DEL SOCIO: ";
    cin>>id;

    if(id > arc.contarRegistros())
    {
        cout << "el id ingresado no es valido";
        return;
    }

    int pos = arc.buscarSocio(id);

    Socio socioModificado = arc.cargarRegistro(pos);
    cout << "datos del socio: " << endl;
    socioModificado.mostrar();
    socioModificado.cargar();

    cout << "datos actualizados: " << endl;
    socioModificado.mostrar();

    arc.modificarRegistro(pos , socioModificado);
}
void listarSocio(){

}

void altaInstructor(){
    ArchivoInstructores arc;
    int id;
    cout<<"Ingrese ID del instructor: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarInstructor(id);
    Instructor instrucMod=arc.cargarRegistro(pos);
    instrucMod.setEstado(true);
    arc.modificarRegistro(pos,instrucMod);
}
void agregarInstructor(){
    ArchivoInstructores arc;
    Instructor obj;
    obj.cargar();
    obj.setidInstructor(arc.contarRegistros()+1);
    arc.grabarRegistro(obj;)
}
void bajaInstructor(){
    ArchivoInstructores arc;
    int id;
    cout<<"Ingrese el id del instructor: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarInstructor(id);
    Instructor instrucMod=arc.cargarRegistro(pos);
    instrucMod.setEstado(false);
    arc.modificarRegistro(pos,instrucMod);
}
void modificarInstructor(){
    ArchivoInstructores arc;
    int id;
    cout<<"Ingrese id del instructor: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarInstructor(id);
    Instructor instrucMod=arc.cargarRegistro(pos);
    instrucMod.mostrar();
    instrucMod.cargar();
    cout<<"DATOS ACTUALIZADOS: "<<endl;
    instrucMod.mostrar();
    arc.modificarRegistro(pos,instrucMod);
}
void listarInstructor();

void altaInscrpcion(){
    ArchivoInscripciones arc;
    int id;
    cout<<"ID DE INSCRIPCION: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarInscripcion(id);
    Inscripcion insMod=arc.cargarRegistro(pos);
    insMod.setEstado(true);
    arc.modificarRegistro(pos,insMod);
}
void agregarInscrpcion(){
    ArchivoInscripciones arc;
    Inscripcion obj;
    obj.
}
void bajaInscrpcion(){
    ArchivoInscripciones arc;
    int id;
    cout<<"INGRESE ID DE INSCRIPCION: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarInscripcion(id);
    Inscripcion insMod=arc.buscarInscripcion(pos);
    insMod.setEstado(false);
    arc.modificarRegistro(pos,insMod);
}
void modificarInscrpcion(){
    ArchivoInscripciones arc;
    int id;
    cout<<"INGRESE ID DE INSCRIPCION: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarInscripcion(id);
    Inscripcion insMod=arc.cargarRegistro(pos);
    insMod.mostrar();
    //insMod.cargar
}
void listarInscrpcion();

void altaInstalacion(){
    ArchivoInstalacion arc;
    int id;
    cout<<"INGRESE ID DE INSTALACION: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarInstalacion(id);
    Instalacion instMod=arc.leerRegistro(pos);
    instMod.setEstado(true);
    arc.modificarRegistro(pos,instMod);
}
void agregarInstalacion(){
    ArchivoInstalacion arc;
    Instalacion obj;
    obj.cargar();
    obj.setIdInstalacion(arc.contarRegistros()+1);
    arc.grabarRegistro(obj);
}
void bajaInstalacion(){
    ArchivoInstalacion arc;
    int id;
    cout<<"INGRESE ID DE INSTALACION: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarInstalacion(id);
    Instalacion instMod=arc.leerRegistro(pos);
    instMod.setEstado(false);
    arc.modificarRegistro(pos,instMod);
}
void modificarInstalacion(){
    ArchivoInstalacion arc;
    int id;
    cout<<"INGRESE ID DE INSTALACION: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarInstalacion(id);
    Instalacion insMod=arc.leerRegistro(pos);
    insMod.mostrar();
    insMod.cargar();
    cout<<"DATOS ACTUALIZADOS: "<<endl;
    insMod.mostrar();
    arc.modificarRegistro(pos,insMod);
}
void listarInstalacion();

void altaPagos(){
    ArchivoPagos arc;
    int id;
    cout<<"INGRESE ID DEL PAGO: "<<endl;
    cin>>id;
    if(id>arc.contarRegistros()){
        cout<<"ID INVALIDA. "<<endl;
    }
    int pos=arc.buscarPago(id);
    Pago pagoMod=arc.leerRegistro(pos);
    pagoMod.setEstado(true);
    arc.modificarRegistro(pos,pagoMod);
}
void agregarPagos();
void bajaPagos();
void modificarPagos();
void listarPagos();

void altaActividad();
void agregarActividad();
void bajaActividad();
void modificarActividad();
void listarActividad();
