#include <iostream>
#include <cstring>
#include "ArchivoInscripciones.h"

using namespace std;

ArchivoInscripciones::ArchivoInscripciones(const char* n){
    strcpy(nombre,n);
}

bool ArchivoInscripciones::grabarRegistro(Inscripcion obj){
    FILE *p=fopen(nombre,"ab");
    if(p==nullptr)return false;
    bool escribio=fwrite(&obj,sizeof (Inscripcion),1,p);
    fclose(p);
    return escribio;
}

bool ArchivoInscripciones::modificarRegistro(Inscripcion obj, int pos){
    FILE *p=fopen(nombre,"rb+");
    if(p==nullptr)return false;
    fseek(p,pos*sizeof obj,SEEK_SET);
    bool escribio=fwrite(&obj,sizeof (obj),1,p);
    fclose(p);
    return escribio;
}

int ArchivoInscripciones::contarRegistros(){
    FILE *p=fopen(nombre,"rb");
    if(p==nullptr)return -1;
    fseek(p,0,SEEK_END);
    int cant=ftell(p)/sizeof (Inscripcion);
    fclose(p);
    return cant;
}
Inscripcion ArchivoInscripciones::leerRegistro(int pos){
    FILE *p=fopen(nombre,"rb");
    Inscripcion obj;
    if(p==nullptr){
        obj.setidInscripcion(-2);
        return obj;
    }
    obj.setidInscripcion(-1);
    fseek(p,pos*sizeof obj,SEEK_SET);
    fread(&obj,sizeof obj,1,p);
    fclose(p);
    return obj;
}

int ArchivoInscripciones::buscarInscripcion(int idIns){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Inscripcion obj = leerRegistro(i);
        if(obj.getidInscripcion()==idIns)
        {
            return i;
        }
    }
    return -1;
}

void ArchivoInscripciones::listarInscripciones(){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Inscripcion obj=leerRegistro(i);
        if(obj.getEstado()){
            obj.mostrar();
            cout<<endl;
        }
    }
}

Inscripcion ArchivoInscripciones::cargarRegistro(int pos){
    FILE* p=fopen(nombre, "rb");
    Inscripcion obj;
    fseek(p,pos*sizeof(obj),SEEK_SET);
    fread(&obj,sizeof obj,1,p);
    fclose(p);
    return obj;
}
