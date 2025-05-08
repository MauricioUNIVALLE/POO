#include <iostream>
#include <stdexcept>  // Librería para excepciones estándar

// Función que divide dos números y maneja excepciones
double dividir(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Error: División por cero no permitida.");
    }
    return static_cast<double>(a) / b;
}

int main() {
    int num1, num2;
    
    std::cout << "Ingrese el primer número: ";
    std::cin >> num1;
    std::cout << "Ingrese el número dividendo: ";
	std::cin >> num2;

    try {
        // Intentamos realizar la división
        double resultado = dividir(num1, num2);
        std::cout << "Resultado: " << resultado << std::endl;
    } catch (const std::exception& e) {
        // Capturamos la excepción y mostramos un mensaje de error
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
