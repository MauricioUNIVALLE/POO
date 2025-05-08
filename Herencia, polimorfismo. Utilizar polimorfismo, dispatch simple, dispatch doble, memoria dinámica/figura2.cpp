#include <iostream>      // Librería estándar para entrada/salida
#include <vector>        // Para usar vectores (contenedor dinámico)
using namespace std;

// ================================
// Jerarquía 1: Clase base abstracta Figura
// ================================

// Declaración anticipada de Operacion (se usará en Figura)
class Operacion;

// Clase abstracta Figura
class Figura {
public:
    // Método virtual: se puede sobreescribir en clases hijas (dispatch simple)
    virtual void dibujar() const {
        cout << "Dibujando figura genérica" << endl;
    }

    // Método virtual puro: obliga a implementarlo en clases hijas (dispatch doble)
    virtual void aplicar(Operacion* op) = 0;

    // Destructor virtual para evitar fugas de memoria
    virtual ~Figura() {}
};

// ================================
// Jerarquía 2: Clase base abstracta Operacion
// ================================

class Circulo;   // Declaraciones anticipadas
class Cuadrado;

class Operacion {
public:
    // Métodos virtuales puros: implementados en operaciones específicas
    virtual void ejecutarSobre(Circulo* c) = 0;
    virtual void ejecutarSobre(Cuadrado* c) = 0;

    virtual ~Operacion() {}
};

// ================================
// Clase derivada: Circulo
// ================================

class Circulo : public Figura {
public:
    // Redefine el método dibujar (dispatch simple)
    void dibujar() const override {
        cout << "Dibujando un círculo" << endl;
    }

    // Implementa el método aplicar (dispatch doble)
    void aplicar(Operacion* op) override {
        op->ejecutarSobre(this);  // Llama a la operación específica para Circulo
    }
};

// ================================
// Clase derivada: Cuadrado
// ================================

class Cuadrado : public Figura {
public:
    void dibujar() const override {
        cout << "Dibujando un cuadrado" << endl;
    }

    void aplicar(Operacion* op) override {
        op->ejecutarSobre(this);  // Llama a la operación específica para Cuadrado
    }
};

// ================================
// Clase derivada de Operacion: Rotar
// ================================

class Rotar : public Operacion {
public:
    void ejecutarSobre(Circulo* c) override {
        cout << "Girando el círculo" << endl;
    }

    void ejecutarSobre(Cuadrado* c) override {
        cout << "Girando el cuadrado" << endl;
    }
};

// ================================
// Clase derivada de Operacion: Agrandar
// ================================

class Agrandar : public Operacion {
public:
    void ejecutarSobre(Circulo* c) override {
        cout << "Agrandando el círculo" << endl;
    }

    void ejecutarSobre(Cuadrado* c) override {
        cout << "Agrandando el cuadrado" << endl;
    }
};

// ================================
// Función principal (main)
// ================================

int main() {
    // Creamos un vector de punteros a Figura (memoria dinámica)
    vector<Figura*> figuras;

    // Insertamos objetos usando new (memoria dinámica)
    figuras.push_back(new Circulo());
    figuras.push_back(new Cuadrado());

    // --- Dispatch simple: invoca al método correcto en tiempo de ejecución ---
    cout << "== Dibujo de figuras ==" << endl;
    for (Figura* f : figuras) {
        f->dibujar();  // Se ejecuta dibujar() según el tipo real (Circulo/Cuadrado)
    }

    // Creamos dos operaciones
    Operacion* op1 = new Rotar();
    Operacion* op2 = new Agrandar();

    // --- Dispatch doble: depende del tipo de figura y tipo de operación ---
    cout << "\n== Aplicando operaciones ==" << endl;
    for (Figura* f : figuras) {
        f->aplicar(op1);  // Ejecuta Rotar sobre Circulo o Cuadrado
        f->aplicar(op2);  // Ejecuta Agrandar sobre Circulo o Cuadrado
    }

    // --- Liberación de memoria dinámica ---
    delete op1;
    delete op2;
    for (Figura* f : figuras) {
        delete f;  // Libera cada objeto de figura
    }

    return 0;  // Fin del programa
}

