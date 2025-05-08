#include <iostream>    // Para entrada y salida est�ndar
#include <string>      // Para usar la clase string
using namespace std;

// ==============================
// Clase Estudiante
// ==============================
class Estudiante {
private:
    string nombre;
    int edad;

public:
    // Constructor
    Estudiante(string nom, int e) {
        nombre = nom;
        edad = e;
    }

    // M�todo para mostrar informaci�n
    void mostrar() const {
        cout << "Nombre: " << nombre << ", Edad: " << edad << endl;
    }

    // M�todo para modificar edad
    void setEdad(int nuevaEdad) {
        edad = nuevaEdad;
    }

    // M�todo que no modifica (const)
    string getNombre() const {
        return nombre;
    }
};

// ==============================
// Funci�n que recibe estudiante por valor (no modifica original)
// ==============================
void cambiarEdadPorValor(Estudiante e) {
    e.setEdad(99);  // Se modifica una copia local
}

// ==============================
// Funci�n que recibe estudiante por referencia (modifica original)
// ==============================
void cambiarEdadPorReferencia(Estudiante& e) {
    e.setEdad(30);  // Se modifica el objeto original
}

// ==============================
// Funci�n que recibe estudiante por puntero (modifica original)
// ==============================
void cambiarEdadPorPuntero(Estudiante* e) {
    e->setEdad(40);  // Se accede al objeto por puntero
}

// ==============================
// Funci�n que recibe por referencia constante (solo lectura)
// ==============================
void saludar(const Estudiante& e) {
    cout << "Hola, " << e.getNombre() << "!" << endl;
    // e.setEdad(50);  // ERROR: no se puede modificar un const
}

// ==============================
// Funci�n principal
// ==============================
int main() {
    // Creamos un estudiante
    Estudiante estudiante1("Ana", 20);

    // Mostramos estado inicial
    cout << "\nEstado inicial:" << endl;
    estudiante1.mostrar();

    // Paso por valor: no se modifica el original
    cambiarEdadPorValor(estudiante1);
    cout << "\nDespu�s de cambiar por valor (no afecta el original):" << endl;
    estudiante1.mostrar();

    // Paso por referencia: s� se modifica
    cambiarEdadPorReferencia(estudiante1);
    cout << "\nDespu�s de cambiar por referencia:" << endl;
    estudiante1.mostrar();

    // Paso por puntero: tambi�n se modifica
    cambiarEdadPorPuntero(&estudiante1);
    cout << "\nDespu�s de cambiar por puntero:" << endl;
    estudiante1.mostrar();

    // Llamamos funci�n con const referencia (solo lectura)
    cout << "\nSaludo usando const referencia:" << endl;
    saludar(estudiante1);

    return 0;
}

