#include "Fichero.h"
#include <cstdlib>

using namespace std;

Fichero::Fichero()
{
    //ctor
}

Fichero::Fichero(char pnombreFichero[])
{
    strcpy(nombreFichero, pnombreFichero);
}

Fichero::~Fichero()
{
    //dtor
}

void Fichero::Leer()
{
    string _fila;
    ifstream _stream;

    _stream.open(Fichero::nombreFichero);
    if(_stream.is_open()){
        while(!_stream.eof()){
            getline(_stream, _fila);
            cout << _fila << endl;
        }
        _stream.close();
    }
}

void Fichero::Escribir(string pficheroDestino, char escribir[]){
    ofstream archivo;

    archivo.open(pficheroDestino, ios::app); //SI NO EXISTE EL ARCHIVO, LO CREA

    if(archivo.fail()){
        cout << "Error al abrir el archivo." << endl;
        return;
    }

    archivo << escribir << endl;

    archivo.close();
}

void Fichero::Copiar(string pficheroDestino)
{
    ifstream origen;
    ofstream destino;
    string fila;

    cout << "Copiando fichero..." << endl;

    //AQUI HACE FALTA CODIGO

    origen.open(Fichero::nombreFichero);
    destino.open(pficheroDestino);

    if(origen.is_open() && destino.is_open()){
        while(getline(origen, fila)){
            destino << fila << endl;
        }
    }else{
        cout << "Hubo un problema con los archivos. " << endl;
        return;
    }

    origen.close();
    destino.close();

    cout << "Copia finalizada." << endl;
}
