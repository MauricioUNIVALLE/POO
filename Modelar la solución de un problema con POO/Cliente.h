#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
using namespace std;

class Cliente {
private:
    string identificacion;
    string nombre;
    string telefono;

public:
    Cliente(string id, string nom, string tel);
    string getNombre() const;
    string getIdentificacion() const;
};

#endif

