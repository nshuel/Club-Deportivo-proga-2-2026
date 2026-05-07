#include <iostream>
#include <cstring>
#include "ArchivoInstalaciones.h"

using namespace std;

ArchivoInstalacion::ArchivoInstalacion(const char* n){
    strcpy(nombre,n);
}

bool ArchivoInstalacion::grabarRegistro(Instalacion obj){
    FILE *p=fopen(nombre,"ab");
    if(p==nullptr)return false;
    bool escribio=fwrite(&obj,sizeof (Instalacion),1,p);
    fclose(p);
    return escribio;
}

bool ArchivoInstalacion::modificarRegistro(Instalacion obj, int pos){
    FILE *p=fopen(nombre,"rb+");
    if(p==nullptr)return false;
    fseek(p,pos*sizeof obj,SEEK_SET);
    bool escribio=fwrite(&obj,sizeof (obj),1,p);
    fclose(p);
    return escribio;
}

int ArchivoInstalacion::contarRegistros(){
    FILE *p=fopen(nombre,"rb");
    if(p==nullptr)return -1;
    fseek(p,0,SEEK_END);
    int cant=ftell(p)/sizeof (Instalacion);
    fclose(p);
    return cant;
}
Instalacion ArchivoInstalacion::leerRegistro(int pos){
    FILE *p=fopen(nombre,"rb");
    Instalacion obj;
    if(p==nullptr){
        obj.setIdInstalacion(-2);
        return obj;
    }
    obj.setIdInstalacion(-1);
    fseek(p,pos*sizeof obj,SEEK_SET);
    fread(&obj,sizeof obj,1,p);
    fclose(p);
    return obj;
}

int ArchivoInstalacion::buscarRegistro(int id){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Instalacion obj = leerRegistro(i);
        if(obj.getIdInstalacion()==id){            return i;
        }
    }
    return -1;
}

void ArchivoInstalacion::listarRegistros(){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Instalacion obj=leerRegistro(i);
        if(obj.getEstado()){
            obj.mostrar();
            cout<<endl;
        }
    }
}
