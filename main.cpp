#include <iostream>
#include <string>
#include <cstring>

#include <wchar.h>
#include <locale.h>

#include "Fichero.h"
#include "Usuario.h"
#include "Sesion.h"

//Ejercicio 1
#define ficheroTxt "KARDEX.TXT"
#define copiaTxt "COPIA.TXT"

//Ejercicio 2
//#define usuario "Usuarios.txt"
#define logSesion "logSesiones.txt"

using namespace std;

Usuario *cUsuario(){
    Usuario *us;
    int idUser;
    string email, password, name;

    cout << "********** Crear Usuario **********\n" << endl;
    cout << "Ingrese su ID de usuario: "; cin >> idUser;
    cin.ignore();
    cout << "Escriba su nombre de usuario (no puede haber espacios): "; getline(cin, name);
    cout << "Escriba su correo electronico: "; cin >> email;
    cout << "Escriba una contraseña: "; cin >> password;
    us = new Usuario(idUser, email, password, name);

    return us;
}

int main(){
    setlocale(LC_ALL, "");

    cout << "EVALUACION 2 \n" << endl;

    //Fredy Alexander Campos Figueroa - Lab. de Programación II

    /* EJERCICIO 1

    Fichero kardex(ficheroTxt);
    kardex.Leer();
    kardex.Copiar(copiaTxt);

    Fichero copia(copiaTxt);
    copia.Leer();
    */

    //EJERCICIO 2

    Sesion usuario(cUsuario());
    usuario.IniciarSesion();
    usuario.CerrarSesion();
    system("pause");
    system("cls");
    usuario.ImprimirLog();

    return 0;
}
