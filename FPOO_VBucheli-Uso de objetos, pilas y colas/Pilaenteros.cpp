#include <iostream>
#include <stack>  // Librería para pilas
using namespace std;

int main() {
    stack<int> pila;

    // Apila todos los elementos
    pila.push(3);
    pila.push(1);
    pila.push(4);
    pila.push(8);
    pila.push(10);
    pila.push(2);

    cout << "Elemento en la cima de la pila: " << pila.top() << endl;

    // Desapila un elemento
    pila.pop();

    cout << "Elemento en la cima después de un pop: " << pila.top() << endl;

    // Apila otro número
    pila.push(7);

    cout << "Elemento en la cima después de apilar 7: " << pila.top() << endl;

    // Muestra y vacia toda la pila
    cout << "Elementos en la pila: ";
    while (!pila.empty()) {
        cout << pila.top() << " ";
        pila.pop();
    }
    cout << endl;

    return 0;
}

