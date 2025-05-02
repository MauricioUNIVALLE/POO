#ifndef CUENTA_H
#define CUENTA_H

#include <vector>
#include "Cliente.h"

class Cuenta {
private:
    string numero;
    double saldo;
    vector<Cliente> clientes;

public:
    Cuenta(string num);
    void setSaldo(double s);
    string getNumero() const;
    double getSaldo() const;
    void agregarCliente(Cliente c);
    void consignar(double valor);
    void retirar(double valor);
    void imprimirInfo() const;
};

#endif

