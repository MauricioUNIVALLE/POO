#include "Cuenta.h"
#include <iostream>
using namespace std;

Cuenta::Cuenta(string num) {
    numero = num;
    saldo = 0.0;
}

void Cuenta::setSaldo(double s) {
    saldo = s;
}

string Cuenta::getNumero() const {
    return numero;
}

double Cuenta::getSaldo() const {
    return saldo;
}

void Cuenta::agregarCliente(Cliente c) {
    clientes.push_back(c);
}

void Cuenta::consignar(double valor) {
    saldo += valor;
}

void Cuenta::retirar(double valor) {
    if (valor <= saldo) saldo -= valor;
    else cout << "Fondos insuficientes." << endl;
}

void Cuenta::imprimirInfo() const {
    cout << "Cuenta: " << numero << " - Saldo: $" << saldo << endl;
    cout << "Clientes asociados: " << endl;
    for (size_t i = 0; i < clientes.size(); i++) {
        cout << "- " << clientes[i].getNombre() << endl;
    }
}

