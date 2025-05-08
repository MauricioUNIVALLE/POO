#include <iostream>
#include <string>
using namespace std;

// Clase Libro
class Libro {
private:
    string titulo;
    int paginasRota;  // P�gina rota (simula modificaci�n del objeto compartido)

public:
    Libro(string t) {
        titulo = t;
        paginasRota = 0;
    }

    void leer() const {
        cout << "Leyendo el libro: " << titulo << endl;
        if (paginasRota > 0)
            cout << "�La p�gina " << paginasRota << " est� rota!" << endl;
    }

    void romperPagina(int numero) {
        paginasRota = numero;
    }
};

// Clase Persona
class Persona {
private:
    string nombre;

public:
    Persona(string nom) {
        nombre = nom;
    }

    // Recibe un libro por referencia (alias del mismo objeto)
    void recibeReferencia(Libro& libro) {
        cout << nombre << " recibe el libro por referencia." << endl;
        libro.leer();  // Puede ver la modificaci�n si otro la hizo
    }

    // Recibe un libro por puntero
    void recibePuntero(Libro* libro) {
        cout << nombre << " recibe el libro por puntero." << endl;
        if (libro != nullptr)
            libro->leer();  // Uso del puntero
    }

    // Causa da�o al libro
    void romperLibro(Libro& libro, int pagina) {
        cout << nombre << " rompe la p�gina " << pagina << "." << endl;
        libro.romperPagina(pagina);
    }
};
int main() {
    // Creamos un objeto compartido (el libro)
    Libro libro("Rayuela");

    // Creamos dos personas
    Persona lina("Lina");
    Persona jose("Jos�");

    // Lina y Jos� reciben el mismo libro (por referencia o puntero)
    lina.recibeReferencia(libro);  // Lo ve en buen estado
    jose.recibePuntero(&libro);    // Tambi�n lo ve en buen estado

    // Jos� da�a el libro
    jose.romperLibro(libro, 45);

    // Ahora ambos vuelven a ver el mismo libro (y la p�gina da�ada)
    cout << "\nDespu�s de da�ar el libro:\n";
    lina.recibeReferencia(libro);  // Ve la p�gina rota
    jose.recibePuntero(&libro);    // Tambi�n

    return 0;
}


