#include <iostream>
#include "Sesion.h"
#define logSesion "logSesiones.txt"


using namespace std;

Sesion::Sesion()
{
    //ctor
}

Sesion::Sesion(Usuario *UserT){
    this -> user = new Usuario(*UserT);
}

Sesion::~Sesion()
{
    delete user;
}

void Sesion::IniciarSesion(){
    char Registro[100];

    //concatena en una sola fila para guardar el log
    strcpy(Registro, user -> getNombre().c_str());
    strcat(Registro, " - Ha iniciado cesión.");

    Fichero Log;
    Log.Escribir(logSesion, Registro);

}

void Sesion::CerrarSesion(){
    char Registro[100];

    strcpy(Registro, user -> getNombre().c_str());
    strcat(Registro, " - Ha cerrado cesión. \n");

    Fichero Log;
    Log.Escribir(logSesion, Registro);
}

void Sesion::ImprimirLog(){
    Fichero Log(logSesion);
    Log.Leer();
}
