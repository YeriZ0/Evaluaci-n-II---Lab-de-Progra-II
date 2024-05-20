#ifndef SESION_H
#define SESION_H
#include <iostream>
#include <string>

#include "Usuario.h"
#include "Fichero.h"

class Sesion : public Fichero{
    public:
        Sesion();
        Sesion(Usuario*);
        virtual ~Sesion();
        void IniciarSesion();
        void CerrarSesion();
        void ImprimirLog();

    protected:

    private:
        Usuario *user;
};

#endif // SESION_H
