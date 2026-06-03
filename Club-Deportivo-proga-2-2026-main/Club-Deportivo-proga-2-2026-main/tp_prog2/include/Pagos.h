#ifndef PAGOS_H_INCLUDED
#define PAGOS_H_INCLUDED
#include "Fecha.h"

class Pago{
private:
    int idPago;
    int idSocio;
    Fecha fechaPago;
    float monto;
    bool estado;
public:
    void setIdPago(int);
    void setIdSocio(int);
    void setFechaPago(Fecha);
    void setMonto(float);
    void setEstado(bool);

    int getIdPago();
    int getIdSocio();
    Fecha getFechaPago();
    float getMonto();
    bool getEstado();

    void cargar();
    void mostrar();
};


#endif // PAGOS_H_INCLUDED
