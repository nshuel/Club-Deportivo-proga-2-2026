#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    private:
         int mes;
         int dia;
         int anio;

    public:

        Fecha();
        Fecha(int , int , int);

         int getMes();
        void setMes( int val);

         int getDia();
        void setDia( int val);

         int getAnio();
        void setAnio( int val);

        void setFecha(int a, int m, int d);
        void Cargar();
        void Mostrar();

    protected:

};

#endif // FECHA_H
