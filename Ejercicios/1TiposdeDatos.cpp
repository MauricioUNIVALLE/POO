#include <iostream>  // Librer�a est�ndar para entrada y salida
using namespace std; // Evita escribir std:: en cada l�nea

int main() {
    // Declaraci�n de variables de diferentes tipos de datos
    int entero = 10;         // N�meros enteros
    float flotante = 5.75;   // N�meros con decimales (precisi�n simple)
    double doble = 19.99;    // N�meros con decimales (mayor precisi�n)
    char caracter = 'A';     // Almacena un solo car�cter
    bool booleano = true;    // Variable booleana (true o false)
    string texto = "Hola, mundo"; // Cadenas de texto (requiere <string>)

    // Mostrar valores en pantalla
    cout << "Entero: " << entero << " -- " << sizeof(int) << endl;
    cout << "Flotante: " << flotante << " -- " << sizeof(float) << endl;
    cout << "Doble: " << doble << " -- " << sizeof(double) << endl;
    cout << "Caracter: " << caracter << " -- " << sizeof(char) << endl;
    cout << "Booleano: " << booleano << " -- " << sizeof(bool) << endl;
    cout << "Texto: " << texto << " -- " << sizeof(string) << endl;

    return 0; // Indica que el programa termin� con �xito
}
