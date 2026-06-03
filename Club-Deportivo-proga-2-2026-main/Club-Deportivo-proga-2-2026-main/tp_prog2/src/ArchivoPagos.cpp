#include <iostream>
#include <cstring>
#include "ArchivoPagos.h"

using namespace std;

ArchivoPagos::ArchivoPagos(const char* n){
    strcpy(nombre,n);
}

bool ArchivoPagos::grabarRegistro(Pago obj){
    FILE *p=fopen(nombre,"ab");
    if(p==nullptr)return false;
    bool escribio=fwrite(&obj,sizeof (Pago),1,p);
    fclose(p);
    return escribio;
}

bool ArchivoPagos::modificarRegistro(int pos, Pago obj){
    FILE *p=fopen(nombre,"rb+");
    if(p==nullptr)return false;
    fseek(p,pos*sizeof obj,SEEK_SET);
    bool escribio=fwrite(&obj,sizeof (obj),1,p);
    fclose(p);
    return escribio;
}

int ArchivoPagos::contarRegistros(){
    FILE *p=fopen(nombre,"rb");
    if(p==nullptr)return -1;
    fseek(p,0,SEEK_END);
    int cant=ftell(p)/sizeof (Pago);
    fclose(p);
    return cant;
}
Pago ArchivoPagos::leerRegistro(int pos){
    FILE *p=fopen(nombre,"rb");
    Pago obj;
    if(p==nullptr){
        obj.setIdPago(-2);
        return obj;
    }
    obj.setIdPago(-1);
    fseek(p,pos*sizeof obj,SEEK_SET);
    fread(&obj,sizeof obj,1,p);
    fclose(p);
    return obj;
}

int ArchivoPagos::buscarPago(int idP){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Pago obj = leerRegistro(i);
        if(obj.getIdPago()==idP){
            return i;
        }
    }
    return -1;
}

void ArchivoPagos::listarPagos(){
    int cant=contarRegistros();
    for(int i=0;i<cant;i++){
        Pago obj=leerRegistro(i);
        if(obj.getEstado()){
            obj.mostrar();
            cout<<endl;
        }
    }
}
