#include <iostream>
#include <string>
using namespace std;

// Clase base: Persona
class Persona {
protected:
    string nombre;
    int edad;

public:
    Persona(string n, int e) : nombre(n), edad(e) {}

    virtual void mostrar() { // Método virtual para polimorfismo
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }
};

// Clase derivada: Estudiante
class Estudiante : public Persona {
private:
    string carrera;

public:
    Estudiante(string n, int e, string c) : Persona(n, e), carrera(c) {}

    void mostrar() override { // Sobreescribe el método base
        Persona::mostrar();
        cout << "Carrera: " << carrera << endl;
    }
};

int main() {
    Persona* p = new Estudiante("Ana", 22, "Ingeniería de Sistemas");
    p->mostrar(); // Se ejecuta el método de Estudiante por polimorfismo

    delete p; // Liberar memoria
    return 0;
}
