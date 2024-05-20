#include "Usuario.h"

Usuario::Usuario()
{
    this -> usuarioid = 0;
}

Usuario::Usuario(int id, string ema, string pass, string nom){
    this -> usuarioid = id;
    this -> email = ema;
    this -> password = pass;
    this -> nombre = nom;
}

Usuario::~Usuario()
{
    //dtor
}

void Usuario::ImprimirInfo(){
    cout << this -> usuarioid << endl;
    cout << this -> nombre << endl;
    cout << this -> email << endl;
    cout << this -> password << endl;
}

int Usuario::getUserID(){
    return this -> usuarioid;
}

string Usuario::getNombre(){
    return this -> nombre;
}

string Usuario::getEmail(){
    return this -> email;
}

string Usuario::getPassword(){
    return this -> password;
}
