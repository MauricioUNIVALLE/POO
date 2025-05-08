#include <iostream>
#include <string>
using namespace std;

// Definici�n de la clase Coche
class Coche {
private:
    string marca;
    int modelo;

public:
    // Constructor
    Coche(string m, int mod) : marca(m), modelo(mod) {}

    // M�todo para mostrar informaci�n
    void mostrar() {
        cout << "Marca: " << marca << ", Modelo: " << modelo << endl;
    }
};

int main() {
    // Creaci�n de objetos
    Coche c1("Toyota", 2023);
    Coche c2("Ford", 2020);

    // Llamar m�todos
    c1.mostrar();
    c2.mostrar();

    return 0;
}
