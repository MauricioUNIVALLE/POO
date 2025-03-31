#include <iostream>
#include <string>

// Clase base con un m�todo virtual
class Animal {
public:
    virtual void hacerSonido() {
        std::cout << "El animal hace un sonido gen�rico." << std::endl;
    }
};

// Clase derivada (subclase) que hereda de Animal
class Perro : public Animal {
public:
    void hacerSonido() override {// Sobrescribe el m�todo de la clase base
        std::cout << "El perro ladra: Guau guau" << std::endl;
    }
};

// Clase derivada Gato
class Gato : public Animal {
public:
	void hacerSonido() override { 	// Sobrescribe el m�todo de la clase base
        std::cout << "El gato ma�lla: Miau miau" << std::endl;
    }
};

int main() {
    // Uso de polimorfismo
    Animal* a1 = new Perro();  // Se crea un objeto Perro, pero referenciado como Animal
    Animal* a2 = new Gato();   // Se crea un objeto Gato, pero referenciado como Animal

    // Llamamos a los m�todos respectivos
    a1->hacerSonido();  // Se ejecutar� el m�todo de Perro
    a2->hacerSonido();  // Se ejecutar� el m�todo de Gato

    // Liberamos memoria
    delete a1;
    delete a2;

    return 0;
}
