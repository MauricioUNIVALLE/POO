#include <iostream>
#include <string>

// Clase Vehiculo con atributos y métodos básicos
class Vehiculo {
private:
    std::string marca;
    int modelo;

public:
    // Constructor
    Vehiculo(std::string m, int mod) : marca(m), modelo(mod) {}

    // Método para mostrar información
    void mostrarInformacion() {
        std::cout << "Marca: " << marca << ", Modelo: " << modelo << std::endl;
    }
};

int main() {
    // Se crea un objeto dinámico de la clase Vehiculo
    Vehiculo* miVehiculo = new Vehiculo("Toyota", 2023);

    // Se accede a sus métodos usando el operador ->
    miVehiculo->mostrarInformacion();

    // Liberamos la memoria asignada
    delete miVehiculo;

    return 0;
}
