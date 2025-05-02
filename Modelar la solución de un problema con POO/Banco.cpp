#include "Banco.h"
#include <iostream>
using namespace std;

void Banco::crearCliente(string id, string nombre, string tel) {
    clientesBanco.push_back(Cliente(id, nombre, tel));
}

void Banco::crearCuenta(string numero) {
    cuentasBanco.push_back(Cuenta(numero));
}

void Banco::asociarClienteACuenta(string idCliente, string numeroCuenta) {
    for (size_t i = 0; i < cuentasBanco.size(); i++) {
        if (cuentasBanco[i].getNumero() == numeroCuenta) {
            for (size_t j = 0; j < clientesBanco.size(); j++) {
                if (clientesBanco[j].getIdentificacion() == idCliente) {
                    cuentasBanco[i].agregarCliente(clientesBanco[j]);
                    return;
                }
            }
        }
    }
}

void Banco::consignarCuenta(string numeroCuenta, double valor) {
    for (size_t i = 0; i < cuentasBanco.size(); i++) {
        if (cuentasBanco[i].getNumero() == numeroCuenta) {
            cuentasBanco[i].consignar(valor);
            return;
        }
    }
}

void Banco::retirarCuenta(string numeroCuenta, double valor) {
    for (size_t i = 0; i < cuentasBanco.size(); i++) {
        if (cuentasBanco[i].getNumero() == numeroCuenta) {
            cuentasBanco[i].retirar(valor);
            return;
        }
    }
}

void Banco::imprimirCuentas() const {
    for (size_t i = 0; i < cuentasBanco.size(); i++) {
        cuentasBanco[i].imprimirInfo();
        cout << endl;
    }
}

double Banco::calcularPromedioSaldos() const {
    if (cuentasBanco.empty()) return 0.0;
    double suma = 0.0;
    for (size_t i = 0; i < cuentasBanco.size(); i++) {
        suma += cuentasBanco[i].getSaldo();
    }
    return suma / cuentasBanco.size();
}

