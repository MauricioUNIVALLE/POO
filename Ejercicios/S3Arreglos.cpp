#include <iostream>
#include <vector>  // Librería para vectores
using namespace std;

int main() {
    vector<int> numeros; // Declaración e inicialización
	// Agregar elementos 
    numeros.push_back(10);
    numeros.push_back(20);
    numeros.push_back(30);
    numeros.push_back(40);
    numeros.push_back(50);

    // Mostrar los valores del vector
    cout << "Elementos del vector: ";
    for (size_t i = 0; i < numeros.size(); i++) {  // Recorre el vector con un bucle "for-each"
        cout << numeros[i]<< " ";
    }
    cout << endl;

    return 0;
}
