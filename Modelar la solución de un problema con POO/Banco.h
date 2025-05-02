#ifndef BANCO_H
#define BANCO_H
#include "Cuenta.h"
#include <vector>

class Banco {
	//Define vectores de datos de la clase con acceso privado encapsulado
private:
    vector<Cliente> clientesBanco;
    vector<Cuenta> cuentasBanco;

public:
	//Define las funciones de la clase
    void crearCliente(string id, string nombre, string tel);
    void crearCuenta(string numero);
    void asociarClienteACuenta(string idCliente, string numeroCuenta);
    void consignarCuenta(string numeroCuenta, double valor);
    void retirarCuenta(string numeroCuenta, double valor);
    void imprimirCuentas() const;
    double calcularPromedioSaldos() const;
};

#endif

