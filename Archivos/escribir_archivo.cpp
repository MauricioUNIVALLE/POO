#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream archivo("notas.txt");     // Abre o crea "notas.txt"

    if (!archivo) {
        cout << "No se pudo abrir el archivo." << endl;
        return 1;
    }

    int cantidad;
    cout << "¿Cuántas notas desea ingresar?: ";
    cin >> cantidad;

    cin.ignore(); // Limpia el buffer de entrada para usar getline después

    for (int i = 0; i < cantidad; i++) {
        string linea;
        cout << "Ingrese nota " << i + 1 << ": ";
        getline(cin, linea);           // Lee toda la línea (puede contener espacios)
        archivo << "Nota " << i + 1 << ": " << linea << endl;
    }

    archivo.close();
    cout << "Notas guardadas correctamente en el archivo." << endl;

    return 0;
}
