#include <iostream>  // Biblioteca estándar para entrada y salida
#include <vector>    // Biblioteca para manejar vectores
#include <stack>     // Biblioteca para manejar pilas

using namespace std;

// Clase para representar un estudiante
class Estudiante {
public:
    string nombre;  // Nombre del estudiante
    float nota;     // Nota del estudiante

    // Constructor de la clase Estudiante
    Estudiante(string nombre, float nota) : nombre(nombre), nota(nota) {}
};

// Función para encontrar la nota más alta en un vector de estudiantes
Estudiante encontrarNotaMasAlta(const vector<Estudiante>& estudiantes) {
    auto mejor = estudiantes.begin(); // Uso de iterador según el documento
    for (auto it = estudiantes.begin(); it != estudiantes.end(); ++it) { // Uso de for con iteradores
        if (it->nota > mejor->nota) { // Si encuentra una nota mayor
            mejor = it; // Actualiza el mejor estudiante
        }
    }
    return *mejor; // Retorna el estudiante con la mejor nota
}

// Función para encontrar la nota más baja en un vector de estudiantes
Estudiante encontrarNotaMasBaja(const vector<Estudiante>& estudiantes) {
    auto peor = estudiantes.begin(); // Uso de iterador según el documento
    for (auto it = estudiantes.begin(); it != estudiantes.end(); ++it) { // Uso de for con iteradores
        if (it->nota < peor->nota) { // Si encuentra una nota menor
            peor = it; // Actualiza el peor estudiante
        }
    }
    return *peor; // Retorna el estudiante con la peor nota
}

// Función para contar estudiantes con nota mayor a 4.5
int contarNotasAltas(const vector<Estudiante>& estudiantes) {
    int contador = 0; // Inicializa contador en 0
    for (auto it = estudiantes.begin(); it != estudiantes.end(); ++it) { // Uso de for con iteradores
        if (it->nota > 4.5) { // Si la nota es mayor a 4.5
            contador++; // Incrementa el contador
        }
    }
    return contador; // Retorna la cantidad de estudiantes con nota mayor a 4.5
}

int main() {
    // Declaración de un vector con datos de estudiantes
    vector<Estudiante> estudiantes;
    estudiantes.push_back(Estudiante("Oscar", 5.0));
    estudiantes.push_back(Estudiante("Juan", 4.0));
    estudiantes.push_back(Estudiante("Jhon", 3.5));
    estudiantes.push_back(Estudiante("Carlos", 5.0));
    estudiantes.push_back(Estudiante("Pedro", 4.7));

    // Sección de estadísticas de notas
    cout << "\n--- ESTADÍSTICAS DE NOTAS ---\n";
    Estudiante mejor = encontrarNotaMasAlta(estudiantes); // Busca mejor nota
    cout << "Mejor nota: " << mejor.nombre << " con " << mejor.nota << endl;

    Estudiante peor = encontrarNotaMasBaja(estudiantes); // Busca peor nota
    cout << "Peor nota: " << peor.nombre << " con " << peor.nota << endl;

    cout << "Estudiantes con nota mayor a 4.5: " << contarNotasAltas(estudiantes) << "\n";

    // Uso de pilas
    stack<int> pila; // Declaración de una pila de enteros
    pila.push(10); // Apila el valor 10
    pila.push(20); // Apila el valor 20
    pila.push(30); // Apila el valor 30
    
    // Sección de manejo de pilas
    cout << "\n--- MANEJO DE PILAS ---\n";
    cout << "Elemento en la cima: " << pila.top() << endl; // Muestra el elemento en la cima
    pila.pop(); // Desapila un elemento
    cout << "Elemento en la cima tras desapilar: " << pila.top() << endl; // Muestra la nueva cima
    
    return 0; // Indica que el programa finalizó correctamente
}

