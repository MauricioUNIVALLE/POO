#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Clase que representa la asignatura con nombre de estudiante y su nota
class Asignatura {
public:
    string estudiante; //Nombre del estudiante
    float nota;

    Asignatura(string est, float n) {
        estudiante = est; //Recibe y asigna el valor de est a estudiante
        nota = n;
    }
};
//Función que retorna la nota más alta entre los estudiantes
float notaMasAlta(const vector<Asignatura>& v) {
    float maxNota = v[0].nota;
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i].nota > maxNota) {
            maxNota = v[i].nota;
        }
    }
    return maxNota;
}

//Función que retorna el nombre del estudiante con la nota más baja concatenada
string estudianteNotaMasBaja(const vector<Asignatura>& v) {
    float minNota = v[0].nota;
    string nombre = v[0].estudiante;
    for (size_t i = 1; i < v.size(); i++) {
        if (v[i].nota < minNota) {
            minNota = v[i].nota;
            nombre = v[i].estudiante;
        }
    }
    return nombre;
}

//Función que cuenta cuántos estudiantes tienen nota mayor a 4.5
int contarMayoresA45(const vector<Asignatura>& v) {
    int contador = 0;
    for (size_t i = 0; i < v.size(); i++) {
        if (v[i].nota > 4.5) {
            contador++;
        }
    }
    return contador;
}
int main() {
    vector<Asignatura> estudiantes; //Vector que almacena los nombres de los estudiantes

    // Ingresar datos usando push_back()
    estudiantes.push_back(Asignatura("Oscar", 5.0));
    estudiantes.push_back(Asignatura("Juan", 4.0));
    estudiantes.push_back(Asignatura("Jhon", 3.5));
    estudiantes.push_back(Asignatura("Carlos", 5.0));
    estudiantes.push_back(Asignatura("Luis", 4.8));
    estudiantes.push_back(Asignatura("Ana", 2.9));
    estudiantes.push_back(Asignatura("Marta", 5.0));

    // Llama a todos los métodos
    cout << "Nota más alta: " << notaMasAlta(estudiantes) << endl;
    cout << "Estudiante con la nota más baja: " << estudianteNotaMasBaja(estudiantes) << endl;
    cout << "Cantidad de estudiantes con nota > 4.5: " << contarMayoresA45(estudiantes) << endl;

    return 0;
}


