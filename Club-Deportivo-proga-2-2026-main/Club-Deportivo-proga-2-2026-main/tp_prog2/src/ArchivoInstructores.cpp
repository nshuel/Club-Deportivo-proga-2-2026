#include <iostream>
#include <cstring>
#include "ArchivoInstructores.h"

using namespace std;

ArchivoInstructores::ArchivoInstructores(const char* n){
    strcpy(nombre,n);
}

bool ArchivoInstructores::grabarRegistro(Instructor obj){
    FILE *p=fopen(nombre,"ab");
    if(p==nullptr)return false;
    bool escribio=fwrite(&obj,sizeof (Instructor),1,p);
    fclose(p);
    return escribio;
}

bool ArchivoInstructores::modificarRegistro(Instructor obj, int pos){
    FILE *p=fopen(nombre,"rb+");
    if(p==nullptr)return false;
    fseek(p,pos*sizeof obj,SEEK_SET);
    bool escribio=fwrite(&obj,sizeof (obj),1,p);
    fclose(p);
    return escribio;
}

int ArchivoInstructores::contarRegistros(){
    FILE *p=fopen(nombre,"rb");
    if(p==nullptr)return -1;
    fseek(p,0,SEEK_END);
    int cant=ftell(p)/sizeof (Instructor);
    fclose(p);
    return cant;
}
Instructor ArchivoInstructores::leerRegistro(int pos){
    FILE *p=fopen(nombre,"rb");
    Instructor obj;
    if(p==nullptr){
        obj.setidInstructor(-2);
        return obj;
    }
    obj.setidInstructor(-1);
    fseek(p,pos*sizeof obj,SEEK_SET);
    fread(&obj,sizeof obj,1,p);
    fclose(p);
    return obj;
}

int ArchivoInstructores::buscarInstructor(int idI){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Instructor obj = leerRegistro(i);
        if(obj.getidInstructor()==idI){
            return i;
        }
    }
    return -1;
}

void ArchivoInstructores::listarInstructores(){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Instructor obj=leerRegistro(i);
        if(obj.getEstado()){
            obj.mostrar();
            cout<<endl;
        }
    }
}

Instructor ArchivoInstructores::cargarRegistro(int pos){
    FILE* p=fopen(nombre, "rb");
    Instructor obj;
    int cant=contarRegistros();
    fseek(p,pos*sizeof(obj),SEEK_SET);
    fread(&obj,sizeof obj,1,p);
    fclose(p);
    return obj;
}
