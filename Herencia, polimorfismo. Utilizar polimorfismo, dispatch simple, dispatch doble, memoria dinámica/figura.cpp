#include <iostream>
#include <vector>      // Para usar vector de punteros
using namespace std;

// -----------------------------
// Clase base abstracta
// -----------------------------
class Figura {
public:
    // Método virtual puro: obliga a las clases derivadas a implementarlo
    virtual void dibujar() = 0;

    // Destructor virtual para permitir destrucción polimórfica
    virtual ~Figura() {}
};

// -----------------------------
// Clase derivada: Círculo
// -----------------------------
class Circulo : public Figura {
public:
    // Implementación específica del método dibujar para Circulo
    void dibujar() override {
        cout << "Dibujando un círculo..." << endl;
    }
};

// -----------------------------
// Clase derivada: Cuadrado
// -----------------------------
class Cuadrado : public Figura {
public:
    void dibujar() override {
        cout << "Dibujando un cuadrado..." << endl;
    }
};

// -----------------------------
// Clase derivada: Triángulo
// -----------------------------
class Triangulo : public Figura {
public:
    void dibujar() override {
        cout << "Dibujando un triángulo..." << endl;
    }
};

// -----------------------------
// Función principal (main)
// -----------------------------
int main() {
    // Creamos un vector de punteros a Figura (clase base)
    vector<Figura*> figuras;

    // Insertamos diferentes figuras usando new (dinámicamente)
    figuras.push_back(new Circulo());
    figuras.push_back(new Cuadrado());
    figuras.push_back(new Triangulo());

    // Recorremos el vector y llamamos a dibujar()
    // Se ejecuta el método adecuado automáticamente gracias al polimorfismo
    for (size_t i = 0; i < figuras.size(); i++) {
        figuras[i]->dibujar();  // No importa el tipo real, se invoca el método correcto
    }

    // Liberamos la memoria usada (buena práctica)
    for (size_t i = 0; i < figuras.size(); i++) {
        delete figuras[i];
    }

    return 0;
}

