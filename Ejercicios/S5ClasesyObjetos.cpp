#include <iostream>
#include <string>
using namespace std;

// Definición de la clase Coche
class Coche {
private:
    string marca;
    int modelo;

public:
    // Constructor
    Coche(string m, int mod) : marca(m), modelo(mod) {}

    // Método para mostrar información
    void mostrar() {
        cout << "Marca: " << marca << ", Modelo: " << modelo << endl;
    }
};

int main() {
    // Creación de objetos
    Coche c1("Toyota", 2023);
    Coche c2("Ford", 2020);

    // Llamar métodos
    c1.mostrar();
    c2.mostrar();

    return 0;
}
