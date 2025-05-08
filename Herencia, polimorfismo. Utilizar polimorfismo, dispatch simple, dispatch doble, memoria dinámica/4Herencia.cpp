#include <iostream>
#include <string>

// Clase base (superclase)
class Persona {
protected:  // Los atributos protected permiten el acceso desde clases derivadas
    std::string nombre;
    int edad;

public:
    // Constructor de la clase Persona
    Persona(std::string n, int e) : nombre(n), edad(e) {}

    // Método para mostrar la información de la persona
    void mostrarInformacion() {
        std::cout << "Nombre: " << nombre << ", Edad: " << edad << " años" << std::endl;
    }
};

// Clase derivada (subclase) que hereda de Persona
class Estudiante : public Persona {
private:
    std::string carrera;

public:
    // Constructor que llama al constructor de la clase base
    Estudiante(std::string n, int e, std::string c) : Persona(n, e), carrera(c) {}

    // Método propio de Estudiante
    void mostrarInformacion() {
        // Se llama al método de la clase base para reutilizar código
        Persona::mostrarInformacion();
        std::cout << "Carrera: " << carrera << std::endl;
    }
};

int main() {
    // Crear un objeto de la clase Estudiante
    Estudiante est("Juan Pérez", 20, "Ingeniería de Sistemas");

    // Llamar al método mostrarInformacion()
    est.mostrarInformacion();

    return 0;
}
