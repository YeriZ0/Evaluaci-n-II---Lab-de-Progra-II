#include "Objeto.h"

using namespace std;

Objeto::Objeto()
{
    //ctor
}

Objeto::~Objeto()
{
    //dtor
}

string* Objeto::Separar(string _pfila, string _pcampos[])
{
    string _delimitador = ",";
    int _index = 0;
    int _pos = 0;
    while((_pos = _pfila.find(_delimitador)) != std::string::npos)
    {
        _pcampos[_index] = _pfila.substr(0, _pos);
        _pfila.erase(0, _pos + _delimitador.length());
        _index++;
    }
    if(_pfila.length()>0)
        _pcampos[_index] = _pfila.substr(0,_pos);

    return _pcampos;
}

string Objeto::Primera(string _pcadena,char _pdelimitador)
{
    int _pos = _pcadena.find(_pdelimitador);
    return _pcadena.substr(0,_pos);
}

double Objeto::StringToDouble(string _pdato)
{
    double _valor = 0;
    std::stringstream _conversor(_pdato);
    _conversor >> _valor;
    return _valor;
}

int Objeto::StringToInteger(string _pdato)
{
    int _valor = 0;
    std::stringstream _conversor(_pdato);
    _conversor >> _valor;
    return _valor;
}
