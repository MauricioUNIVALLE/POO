#include <iostream>
#include <string>
using namespace std;

// Clase Bicicleta
class Bicicleta {
private:
    string marca;

public:
    Bicicleta(string m) : marca(m) {}

    void pedalear() const {
        cout << "Pedaleando la bicicleta marca " << marca << "..." << endl;
    }
};

// Clase Persona
class Persona {
private:
    string nombre;
    Bicicleta* bicicleta;  // Relación "conoce"

public:
    Persona(string n) : nombre(n), bicicleta() {}

    void conocerBicicleta(Bicicleta* b) {
        bicicleta = b;
    }

    void usarBicicleta() const {
        if (bicicleta)
            bicicleta->pedalear();
        else
            cout << nombre << " no conoce ninguna bicicleta." << endl;
    }
};

int main() {
    Bicicleta bici("Trek");
    Persona juan("Juan");

    juan.usarBicicleta();  // No conoce la bici aún
    juan.conocerBicicleta(&bici);
    juan.usarBicicleta();  // Ahora sí

    return 0;
}

