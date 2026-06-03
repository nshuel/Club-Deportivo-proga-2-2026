#include <iostream>
#include <cstring>
#include "ArchivoActividades.h"

using namespace std;

ArchivoActividades::ArchivoActividades(const char* n){
    strcpy(nombre,n);
}

bool ArchivoActividades::grabarRegistro(Actividad obj){
    FILE *p=fopen(nombre,"ab");
    if(p==nullptr)return false;
    bool escribio=fwrite(&obj,sizeof (Actividad),1,p);
    fclose(p);
    return escribio;
}

bool ArchivoActividades::modificarRegistro(Actividad obj, int pos){
    FILE *p=fopen(nombre,"rb+");
    if(p==nullptr)return false;
    fseek(p,pos*sizeof obj,SEEK_SET);
    bool escribio=fwrite(&obj,sizeof (obj),1,p);
    fclose(p);
    return escribio;
}

int ArchivoActividades::contarRegistros(){
    FILE *p=fopen(nombre,"rb");
    if(p==nullptr)return -1;
    fseek(p,0,SEEK_END);
    int cant=ftell(p)/sizeof (Actividad);
    fclose(p);
    return cant;
}
Actividad ArchivoActividades::leerRegistro(int pos){
    FILE *p=fopen(nombre,"rb");
    Actividad obj;
    if(p==nullptr){
        obj.setidActividad(-2);
        return obj;
    }
    obj.setidActividad(-1);
    fseek(p,pos*sizeof obj,SEEK_SET);
    fread(&obj,sizeof obj,1,p);
    fclose(p);
    return obj;
}

int ArchivoActividades::buscarActividad(int idA){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Actividad obj = leerRegistro(i);
        if(obj.getidActividad()==idA
){
            return i;
        }
    }
    return -1;
}

void ArchivoActividades::listarActividades(){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Actividad obj=leerRegistro(i);
        if(obj.getEstado()){
            obj.mostrar();
            cout<<endl;
        }
    }
}
