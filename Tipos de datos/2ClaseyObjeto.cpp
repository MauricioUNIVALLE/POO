#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    // Constructor
    Persona(std::string n, int e) : nombre(n), edad(e) {}

    // M�todo para mostrar informaci�n
    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << " a�os" << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Persona
    Persona p1("Juan", 25);
    p1.mostrarInformacion();

    return 0;
}
