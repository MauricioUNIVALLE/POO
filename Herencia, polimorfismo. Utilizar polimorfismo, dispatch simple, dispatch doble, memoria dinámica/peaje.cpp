#include <iostream>
#include <vector>
#include <string>
using namespace std;

// -----------------------------
// Clase base: Vehiculo
// -----------------------------
class Vehiculo {
protected:
    string placa;
    string fechaHora;

public:
    Vehiculo(string p, string fh) {
        placa = p;
        fechaHora = fh;
    }

    virtual double calcularPeaje() const = 0; // M�todo virtual puro (herencia obligatoria)
    virtual void mostrar() const = 0;         // Cada clase hija imprime diferente
    virtual string tipoVehiculo() const = 0;  // Para clasificaci�n

    virtual ~Vehiculo() {}
};

// -----------------------------
// Clase derivada: Carro
// -----------------------------
class Carro : public Vehiculo {
private:
    int numPasajeros;

public:
    Carro(string p, string fh, int np) : Vehiculo(p, fh) {
        numPasajeros = np;
    }

    double calcularPeaje() const override {
        return 10000;  // Valor fijo
    }

    void mostrar() const override {
        cout << "[CARRO] Placa: " << placa << ", Fecha/Hora: " << fechaHora
             << ", Pasajeros: " << numPasajeros << ", Peaje: $" << calcularPeaje() << endl;
    }

    string tipoVehiculo() const override {
        return "Carro";
    }
};

// -----------------------------
// Clase derivada: Camion
// -----------------------------
class Camion : public Vehiculo {
private:
    int numEjes;
    double capacidadToneladas;

public:
    Camion(string p, string fh, int ejes, double toneladas) : Vehiculo(p, fh) {
        numEjes = ejes;
        capacidadToneladas = toneladas;
    }

    double calcularPeaje() const override {
        return 10000 + numEjes * 5000;  // Tarifa base + 5000 por eje
    }

    void mostrar() const override {
        cout << "[CAMION] Placa: " << placa << ", Fecha/Hora: " << fechaHora
             << ", Ejes: " << numEjes << ", Capacidad: " << capacidadToneladas
             << " toneladas, Peaje: $" << calcularPeaje() << endl;
    }

    string tipoVehiculo() const override {
        return "Camion";
    }
};

// -----------------------------
// Clase Peaje: administra el sistema
// -----------------------------
class Peaje {
private:
    vector<Vehiculo*> vehiculos; // Vector de punteros a clase base

public:
    void registrarVehiculo(Vehiculo* v) {
        vehiculos.push_back(v);
    }

    void listarVehiculos() const {
        cout << "\nListado de veh�culos:\n";
        for (size_t i = 0; i < vehiculos.size(); i++) {
            vehiculos[i]->mostrar();
        }
    }

    void dineroRecaudado() const {
        double totalCarros = 0;
        double totalCamiones = 0;

        for (size_t i = 0; i < vehiculos.size(); i++) {
            if (vehiculos[i]->tipoVehiculo() == "Carro")
                totalCarros += vehiculos[i]->calcularPeaje();
            else if (vehiculos[i]->tipoVehiculo() == "Camion")
                totalCamiones += vehiculos[i]->calcularPeaje();
        }

        cout << "\nRecaudo total por tipo de veh�culo:\n";
        cout << "Carros: $" << totalCarros << endl;
        cout << "Camiones: $" << totalCamiones << endl;
    }

    ~Peaje() {
        for (size_t i = 0; i < vehiculos.size(); i++) {
            delete vehiculos[i];  // Liberar memoria din�mica
        }
    }
};

// -----------------------------
// Funci�n principal (main)
// -----------------------------
int main() {
    Peaje miPeaje;

    // Registro de veh�culos (simulaci�n)
    miPeaje.registrarVehiculo(new Carro("ABC123", "2025-04-29 08:00", 5));
    miPeaje.registrarVehiculo(new Camion("XYZ789", "2025-04-29 08:30", 4, 12.5));
    miPeaje.registrarVehiculo(new Carro("DEF456", "2025-04-29 09:00", 4));

    // Listar veh�culos y mostrar recaudaci�n
    miPeaje.listarVehiculos();
    miPeaje.dineroRecaudado();

    return 0;
}


