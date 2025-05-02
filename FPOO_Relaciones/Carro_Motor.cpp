#include <iostream>
#include <string>
using namespace std;

// Clase Motor (el objeto contenido)
class Motor {
private:
    float cilindraje;
    float torque;

public:
    Motor(float c, float t) : cilindraje(c), torque(t) {}

    float getCilindraje() const {
        return cilindraje;
    }

    float getTorque() const {
        return torque;
    }
};

// Clase Carro (el objeto contenedor)
class Carro {
private:
    string marca;
    string modelo;
    int anho;
    Motor motor; // Relación "contiene" ? Motor como atributo

public:
    Carro(string m, string mo, int a, float cil, float tor) 
        : marca(m), modelo(mo), anho(a), motor(cil, tor) {}

    void mostrarInformacion() const {
        cout << "Marca: " << marca << endl;
        cout << "Modelo: " << modelo << endl;
        cout << "Anho: " << anho << endl;
        cout << "Motor: " << motor.getCilindraje() << " L, " 
             << motor.getTorque() << " Nm" << endl;
    }
};

int main() {
    Carro miCarro("Toyota", "Corolla", 2020, 1.8, 173.5);
    miCarro.mostrarInformacion();
    return 0;
}

