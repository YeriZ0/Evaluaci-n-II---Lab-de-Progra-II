#ifndef OBJETO_H
#define OBJETO_H

#include <stdlib.h>
#include <string>
#include <sstream>

using namespace std;

//typedef std::vector<string> stringVector;

class Objeto
{
    public:
        Objeto();
        virtual ~Objeto();
        double StringToDouble(string _pdato);
        int StringToInteger(string _pdato);
        string* Separar(string _pfila,string _pcampos[]);
        string Primera(string,char);
    protected:

    private:
};

#endif // OBJETO_H
