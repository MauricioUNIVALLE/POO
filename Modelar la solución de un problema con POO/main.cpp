#include "Banco.h" //Encabezado de la clase declara la interfaz: los atributos y métodos disponibles de una clase.
#include <iostream>
using namespace std;

int main() {
    Banco banco; //Crea un objeto de la clase Banco
    //Agrega dos nuevos clientes usando el metodo crearCliente
    banco.crearCliente("123", "Juan Perez", "3110000000");
    banco.crearCliente("456", "Maria Lopez", "3121111111");
	//Crea dos cuentas nuevas usando el metodo crearCuenta
    banco.crearCuenta("C001");
    banco.crearCuenta("C002");
	//Asocia las cuentas a los clientes usando el metodo asociarClienteACuenta
    banco.asociarClienteACuenta("123", "C001");
    banco.asociarClienteACuenta("456", "C001");
    banco.asociarClienteACuenta("123", "C002");
	//Efectua consignaciones simuladas con el metodo consignarCuenta
    banco.consignarCuenta("C001", 500000);
    banco.consignarCuenta("C002", 200000);
	//Efectua un retiro simulado con el metodo retirarCuenta
    banco.retirarCuenta("C001", 100000);
	//Utiliza el metodo de salida
    banco.imprimirCuentas();

    cout << "Promedio de saldos: $" << banco.calcularPromedioSaldos() << endl;

    return 0;
}

