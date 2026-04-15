#ifndef INSCRIPCION_H
#define INSCRIPCION_H


class Inscripcion
{
    private:
        int idInscripcion;
        int idSocio;
        int idActividad;

    public:
        Inscripcion();
        Inscripcion(int,int,int);

        int getidInscripcion()
        void setidInscripcion(int)

        int getidSocio()
        void setidSocio(int)

        int getidActividad()
        void setidActividad(int)

    protected:

};

#endif // INSCRIPCION_H
