#include "Cliente.h"

Cliente::Cliente(string id, string nom, string tel) {
    identificacion = id;
    nombre = nom;
    telefono = tel;
}

string Cliente::getNombre() const {
    return nombre;
}

string Cliente::getIdentificacion() const {
    return identificacion;
}

