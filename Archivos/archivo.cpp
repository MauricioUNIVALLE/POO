#include <iostream>
#include <fstream>  // Para manejo de archivos
using namespace std;

int main() {
    ofstream archivo;                  // Creamos un objeto de tipo ofstream (salida)
    archivo.open("datos.txt");         // Abrimos (o creamos) el archivo datos.txt

    if (!archivo) {                    // Verificamos si el archivo se abrió correctamente
        cout << "No se pudo crear el archivo." << endl;
        return 1;                      // Terminamos el programa con error
    }

    // Escribimos datos en el archivo
    archivo << "Nombre: Juan Perez\n";
    archivo << "Edad: 25\n";
    archivo << "Profesión: Ingeniero\n";

    archivo.close();                   // Cerramos el archivo
    cout << "Archivo creado y datos escritos correctamente." << endl;

    return 0;
}