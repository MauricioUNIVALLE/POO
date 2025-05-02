#include <iostream>
#include <cmath>
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
using namespace std;

// Clase base
class FiguraGeometrica {
public:
    virtual double calcularArea() const = 0;  // Método virtual puro
    virtual void mostrar() const = 0;
};

// Clase derivada
class Circulo : public FiguraGeometrica {
private:
    double radio;

public:
    Circulo(double r) : radio(r) {}

    double calcularArea() const override {
        return M_PI * radio * radio;
    }

    void mostrar() const override {
        cout << "Soy un círculo de radio " << radio 
             << " y área " << calcularArea() << endl;
    }
};

int main() {
    Circulo c(5.0);
    c.mostrar();

    return 0;
}

