#include <iostream>
#include <vector>      // Para usar vector de punteros
using namespace std;

// -----------------------------
// Clase base abstracta
// -----------------------------
class Figura {
public:
    // M�todo virtual puro: obliga a las clases derivadas a implementarlo
    virtual void dibujar() = 0;

    // Destructor virtual para permitir destrucci�n polim�rfica
    virtual ~Figura() {}
};

// -----------------------------
// Clase derivada: C�rculo
// -----------------------------
class Circulo : public Figura {
public:
    // Implementaci�n espec�fica del m�todo dibujar para Circulo
    void dibujar() override {
        cout << "Dibujando un c�rculo..." << endl;
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
// Clase derivada: Tri�ngulo
// -----------------------------
class Triangulo : public Figura {
public:
    void dibujar() override {
        cout << "Dibujando un tri�ngulo..." << endl;
    }
};

// -----------------------------
// Funci�n principal (main)
// -----------------------------
int main() {
    // Creamos un vector de punteros a Figura (clase base)
    vector<Figura*> figuras;

    // Insertamos diferentes figuras usando new (din�micamente)
    figuras.push_back(new Circulo());
    figuras.push_back(new Cuadrado());
    figuras.push_back(new Triangulo());

    // Recorremos el vector y llamamos a dibujar()
    // Se ejecuta el m�todo adecuado autom�ticamente gracias al polimorfismo
    for (size_t i = 0; i < figuras.size(); i++) {
        figuras[i]->dibujar();  // No importa el tipo real, se invoca el m�todo correcto
    }

    // Liberamos la memoria usada (buena pr�ctica)
    for (size_t i = 0; i < figuras.size(); i++) {
        delete figuras[i];
    }

    return 0;
}

