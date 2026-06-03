#ifndef INSTALACION_H_INCLUDED
#define INSTALACION_H_INCLUDED

class Instalacion{
private:
    int idInstalacion;
    char tipo[20];
    bool estado;
public:
    Instalacion();
    void setIdInstalacion(int);
    void setTipo(const char*);
    void setEstado(bool);

    int getIdInstalacion();
    const char* getTipo();
    bool getEstado();

    void cargar();
    void mostrar();

};

#endif // INSTALACION_H_INCLUDED
