#include <iostream>
#include <fstream>  // Para lectura
#include <string>   // Para usar string
using namespace std;

int main() {
    ifstream archivo;                  // Creamos un objeto de tipo ifstream (entrada)
    archivo.open("datos.txt");         // Abrimos el archivo datos.txt para lectura

    if (!archivo) {                    // Verificamos si el archivo existe y se abrió bien
        cout << "El archivo no existe." << endl;
        return 1;
    }

    string linea;
    while (getline(archivo, linea)) {  // Leemos línea por línea hasta el final del archivo
        cout << linea << endl;         // Mostramos cada línea leída
    }

    archivo.close();                   // Cerramos el archivo

    return 0;
}
