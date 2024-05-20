#ifndef USUARIO_H
#define USUARIO_H

#include <iostream>
#include <string>

using namespace std;

class Usuario{
    public:
        Usuario();
        Usuario(int, string, string, string);
        virtual ~Usuario();
        int getUserID();
        string getNombre();
        string getEmail();
        string getPassword();
        void ImprimirInfo();

    protected:

    private:
        int usuarioid;
        string email;
        string password;
        string nombre;
};

#endif // USUARIO_H
