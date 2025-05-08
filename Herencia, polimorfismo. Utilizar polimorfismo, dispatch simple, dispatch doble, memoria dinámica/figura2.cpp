#include <iostream>      // Librer�a est�ndar para entrada/salida
#include <vector>        // Para usar vectores (contenedor din�mico)
using namespace std;

// ================================
// Jerarqu�a 1: Clase base abstracta Figura
// ================================

// Declaraci�n anticipada de Operacion (se usar� en Figura)
class Operacion;

// Clase abstracta Figura
class Figura {
public:
    // M�todo virtual: se puede sobreescribir en clases hijas (dispatch simple)
    virtual void dibujar() const {
        cout << "Dibujando figura gen�rica" << endl;
    }

    // M�todo virtual puro: obliga a implementarlo en clases hijas (dispatch doble)
    virtual void aplicar(Operacion* op) = 0;

    // Destructor virtual para evitar fugas de memoria
    virtual ~Figura() {}
};

// ================================
// Jerarqu�a 2: Clase base abstracta Operacion
// ================================

class Circulo;   // Declaraciones anticipadas
class Cuadrado;

class Operacion {
public:
    // M�todos virtuales puros: implementados en operaciones espec�ficas
    virtual void ejecutarSobre(Circulo* c) = 0;
    virtual void ejecutarSobre(Cuadrado* c) = 0;

    virtual ~Operacion() {}
};

// ================================
// Clase derivada: Circulo
// ================================

class Circulo : public Figura {
public:
    // Redefine el m�todo dibujar (dispatch simple)
    void dibujar() const override {
        cout << "Dibujando un c�rculo" << endl;
    }

    // Implementa el m�todo aplicar (dispatch doble)
    void aplicar(Operacion* op) override {
        op->ejecutarSobre(this);  // Llama a la operaci�n espec�fica para Circulo
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
        op->ejecutarSobre(this);  // Llama a la operaci�n espec�fica para Cuadrado
    }
};

// ================================
// Clase derivada de Operacion: Rotar
// ================================

class Rotar : public Operacion {
public:
    void ejecutarSobre(Circulo* c) override {
        cout << "Girando el c�rculo" << endl;
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
        cout << "Agrandando el c�rculo" << endl;
    }

    void ejecutarSobre(Cuadrado* c) override {
        cout << "Agrandando el cuadrado" << endl;
    }
};

// ================================
// Funci�n principal (main)
// ================================

int main() {
    // Creamos un vector de punteros a Figura (memoria din�mica)
    vector<Figura*> figuras;

    // Insertamos objetos usando new (memoria din�mica)
    figuras.push_back(new Circulo());
    figuras.push_back(new Cuadrado());

    // --- Dispatch simple: invoca al m�todo correcto en tiempo de ejecuci�n ---
    cout << "== Dibujo de figuras ==" << endl;
    for (Figura* f : figuras) {
        f->dibujar();  // Se ejecuta dibujar() seg�n el tipo real (Circulo/Cuadrado)
    }

    // Creamos dos operaciones
    Operacion* op1 = new Rotar();
    Operacion* op2 = new Agrandar();

    // --- Dispatch doble: depende del tipo de figura y tipo de operaci�n ---
    cout << "\n== Aplicando operaciones ==" << endl;
    for (Figura* f : figuras) {
        f->aplicar(op1);  // Ejecuta Rotar sobre Circulo o Cuadrado
        f->aplicar(op2);  // Ejecuta Agrandar sobre Circulo o Cuadrado
    }

    // --- Liberaci�n de memoria din�mica ---
    delete op1;
    delete op2;
    for (Figura* f : figuras) {
        delete f;  // Libera cada objeto de figura
    }

    return 0;  // Fin del programa
}

