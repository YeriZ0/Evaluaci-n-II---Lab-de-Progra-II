#ifndef FICHERO_H
#define FICHERO_H

#include <fstream>
#include <iostream>
#include <cstring>
#include <string>
#include <stdio.h>

using namespace std;

class Fichero{
    public:
        Fichero();
        Fichero(char pnombreFichero[]);
        virtual ~Fichero();
        void Leer();
        void Escribir(string pficheroDestino, char escribir[]);
        void Copiar(string pficheroDestino);
    protected:

    private:
        char nombreFichero[100];
};

#endif // FICHERO_H
