#include <iostream>
#include <string>

class Persona {
private:
    std::string nombre;
    int edad;

public:
    Persona(std::string n, int e) : nombre(n), edad(e) {}

    void setNombre(std::string n) { nombre = n; }
    void setEdad(int e) { edad = e; }

    std::string getNombre() { return nombre; }
    int getEdad() { return edad; }

    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << " años" << std::endl;
    }
};

int main() {
    Persona p1("Carlos", 30);
    p1.mostrarInformacion();

    // Modificar los valores con setters
    p1.setNombre("Ana");
    p1.setEdad(28);

    // Mostrar la información actualizada
    p1.mostrarInformacion();

    return 0;
}
