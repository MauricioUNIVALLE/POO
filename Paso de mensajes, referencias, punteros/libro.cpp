#include <iostream>
#include <string>
using namespace std;

// Clase Libro
class Libro {
private:
    string titulo;
    int paginasRota;  // Página rota (simula modificación del objeto compartido)

public:
    Libro(string t) {
        titulo = t;
        paginasRota = 0;
    }

    void leer() const {
        cout << "Leyendo el libro: " << titulo << endl;
        if (paginasRota > 0)
            cout << "¡La página " << paginasRota << " está rota!" << endl;
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
        libro.leer();  // Puede ver la modificación si otro la hizo
    }

    // Recibe un libro por puntero
    void recibePuntero(Libro* libro) {
        cout << nombre << " recibe el libro por puntero." << endl;
        if (libro != nullptr)
            libro->leer();  // Uso del puntero
    }

    // Causa daño al libro
    void romperLibro(Libro& libro, int pagina) {
        cout << nombre << " rompe la página " << pagina << "." << endl;
        libro.romperPagina(pagina);
    }
};
int main() {
    // Creamos un objeto compartido (el libro)
    Libro libro("Rayuela");

    // Creamos dos personas
    Persona lina("Lina");
    Persona jose("José");

    // Lina y José reciben el mismo libro (por referencia o puntero)
    lina.recibeReferencia(libro);  // Lo ve en buen estado
    jose.recibePuntero(&libro);    // También lo ve en buen estado

    // José daña el libro
    jose.romperLibro(libro, 45);

    // Ahora ambos vuelven a ver el mismo libro (y la página dañada)
    cout << "\nDespués de dañar el libro:\n";
    lina.recibeReferencia(libro);  // Ve la página rota
    jose.recibePuntero(&libro);    // También

    return 0;
}


