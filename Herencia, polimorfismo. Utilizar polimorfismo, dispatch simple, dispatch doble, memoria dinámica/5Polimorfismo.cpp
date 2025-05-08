#include <iostream>
#include <string>

// Clase base con un método virtual
class Animal {
public:
    virtual void hacerSonido() {
        std::cout << "El animal hace un sonido genérico." << std::endl;
    }
};

// Clase derivada (subclase) que hereda de Animal
class Perro : public Animal {
public:
    void hacerSonido() override {// Sobrescribe el método de la clase base
        std::cout << "El perro ladra: Guau guau" << std::endl;
    }
};

// Clase derivada Gato
class Gato : public Animal {
public:
	void hacerSonido() override { 	// Sobrescribe el método de la clase base
        std::cout << "El gato maúlla: Miau miau" << std::endl;
    }
};

int main() {
    // Uso de polimorfismo
    Animal* a1 = new Perro();  // Se crea un objeto Perro, pero referenciado como Animal
    Animal* a2 = new Gato();   // Se crea un objeto Gato, pero referenciado como Animal

    // Llamamos a los métodos respectivos
    a1->hacerSonido();  // Se ejecutará el método de Perro
    a2->hacerSonido();  // Se ejecutará el método de Gato

    // Liberamos memoria
    delete a1;
    delete a2;

    return 0;
}
