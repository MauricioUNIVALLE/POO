#include <iostream>
#include <fstream>  // Para lectura
#include <string>   // Para usar string
using namespace std;

int main() {
    ifstream archivo;                  // Creamos un objeto de tipo ifstream (entrada)
    archivo.open("datos.txt");         // Abrimos el archivo datos.txt para lectura

    if (!archivo) {                    // Verificamos si el archivo existe y se abri� bien
        cout << "El archivo no existe." << endl;
        return 1;
    }

    string linea;
    while (getline(archivo, linea)) {  // Leemos l�nea por l�nea hasta el final del archivo
        cout << linea << endl;         // Mostramos cada l�nea le�da
    }

    archivo.close();                   // Cerramos el archivo

    return 0;
}
