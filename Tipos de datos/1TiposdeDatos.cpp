#include <iostream>  // Librería estándar para entrada y salida
using namespace std; // Evita escribir std:: en cada línea

int main() {
    // Declaración de variables de diferentes tipos de datos
    int entero = 10;         // Números enteros
    float flotante = 5.75;   // Números con decimales (precisión simple)
    double doble = 19.99;    // Números con decimales (mayor precisión)
    char caracter = 'A';     // Almacena un solo carácter
    bool booleano = true;    // Variable booleana (true o false)
    string texto = "Hola, mundo"; // Cadenas de texto (requiere <string>)

    // Mostrar valores en pantalla
    cout << "Entero: " << entero << " -- " << sizeof(int) << endl;
    cout << "Flotante: " << flotante << " -- " << sizeof(float) << endl;
    cout << "Doble: " << doble << " -- " << sizeof(double) << endl;
    cout << "Caracter: " << caracter << " -- " << sizeof(char) << endl;
    cout << "Booleano: " << booleano << " -- " << sizeof(bool) << endl;
    cout << "Texto: " << texto << " -- " << sizeof(string) << endl;

    return 0; // Indica que el programa terminó con éxito
}
