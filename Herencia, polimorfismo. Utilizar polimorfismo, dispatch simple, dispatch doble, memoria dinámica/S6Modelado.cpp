#include <iostream>
#include <vector>
using namespace std;

// Clase Producto
class Producto {
private:
    string nombre;
    float precio;

public:
    Producto(string n, float p) : nombre(n), precio(p) {}

    void mostrar() {
        cout << "Producto: " << nombre << ", Precio: $" << precio << endl;
    }
};

// Clase Tienda que contiene productos
class Tienda {
private:
    vector<Producto> inventario;

public:
    void agregarProducto(Producto p) {
        inventario.push_back(p);
    }

    void mostrarInventario() {
        cout << "Inventario de la tienda:\n";
        for (size_t i = 0; i < inventario.size(); i++) {
    		inventario[i].mostrar();  // Accede al elemento usando índice
		}	
    }
};

int main() {
    Tienda miTienda;
    miTienda.agregarProducto(Producto("Laptop", 1200.50));
    miTienda.agregarProducto(Producto("Teléfono", 850.75));

    miTienda.mostrarInventario();

    return 0;
}
