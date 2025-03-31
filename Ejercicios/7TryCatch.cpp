#include <iostream>
#include <stdexcept>  // Librer�a para excepciones est�ndar

// Funci�n que divide dos n�meros y maneja excepciones
double dividir(int a, int b) {
    if (b == 0) {
        throw std::runtime_error("Error: Divisi�n por cero no permitida.");
    }
    return static_cast<double>(a) / b;
}

int main() {
    int num1, num2;
    
    std::cout << "Ingrese el primer n�mero: ";
    std::cin >> num1;
    std::cout << "Ingrese el n�mero dividendo: ";
	std::cin >> num2;

    try {
        // Intentamos realizar la divisi�n
        double resultado = dividir(num1, num2);
        std::cout << "Resultado: " << resultado << std::endl;
    } catch (const std::exception& e) {
        // Capturamos la excepci�n y mostramos un mensaje de error
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
