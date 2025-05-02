#include <iostream>
#include <vector>  // Librería para vectores
using namespace std;

int main() {
    vector<float> notas;

    // Ingresa las notas usando push_back()
    notas.push_back(5.0);
    notas.push_back(4.0);
    notas.push_back(3.5);
    notas.push_back(5.0);
    notas.push_back(4.0);
    notas.push_back(3.5);
    notas.push_back(5.0);
    notas.push_back(4.0);
    notas.push_back(3.5);
    notas.push_back(4.1);

    float suma = 0.0;

    // Calcula la suma de notas
    for (size_t i = 0; i < notas.size(); i++) {
        suma += notas[i];
    }

    // Calcula el promedio
    float promedio = suma / notas.size();

    cout << "Promedio del curso: " << promedio << endl;

    return 0;
}

