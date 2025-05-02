#include <iostream>
#include <vector>  // Librería para vectores
using namespace std;

int main() {
    // 1. Vector de int
    vector<int> edades;
    edades.push_back(18);
    edades.push_back(25);
    edades.push_back(30);
    edades.push_back(40);
    cout << "Vector de int (edades): ";
    for (size_t i = 0; i < edades.size(); i++) {
        cout << edades[i] << " ";
    }
    cout << endl;

    // 2. Vector de unsigned int
    vector<unsigned int> puntos;
    puntos.push_back(10);
    puntos.push_back(20);
    puntos.push_back(30);
    puntos.push_back(40);
    cout << "Vector de unsigned int (puntos): ";
    for (size_t i = 0; i < puntos.size(); i++) {
        cout << puntos[i] << " ";
    }
    cout << endl;

    // 3. Vector de short
    vector<short> temperaturas;
    temperaturas.push_back(-2);
    temperaturas.push_back(0);
    temperaturas.push_back(15);
    temperaturas.push_back(25);
    cout << "Vector de short (temperaturas): ";
    for (size_t i = 0; i < temperaturas.size(); i++) {
        cout << temperaturas[i] << " ";
    }
    cout << endl;

    // 4. Vector de long
    vector<long> poblaciones;
    poblaciones.push_back(1000000);
    poblaciones.push_back(2000000);
    poblaciones.push_back(3000000);
    cout << "Vector de long (poblaciones): ";
    for (size_t i = 0; i < poblaciones.size(); i++) {
        cout << poblaciones[i] << " ";
    }
    cout << endl;

    // 5. Vector de long long
    vector<long long> distancias;
    distancias.push_back(10000000000);
    distancias.push_back(20000000000);
    cout << "Vector de long long (distancias): ";
    for (size_t i = 0; i < distancias.size(); i++) {
        cout << distancias[i] << " ";
    }
    cout << endl;

    // 6. Vector de char
    vector<char> letras;
    letras.push_back('A');
    letras.push_back('B');
    letras.push_back('C');
    letras.push_back('D');
    cout << "Vector de char (letras): ";
    for (size_t i = 0; i < letras.size(); i++) {
        cout << letras[i] << " ";
    }
    cout << endl;

    // 7. Vector de unsigned char
    vector<unsigned char> codigos;
    codigos.push_back(65); // A
    codigos.push_back(66); // B
    codigos.push_back(67); // C
    cout << "Vector de unsigned char (códigos ASCII): ";
    for (size_t i = 0; i < codigos.size(); i++) {
        cout << codigos[i] << " ";
    }
    cout << endl;

    // 8. Vector de float
    vector<float> promedios;
    promedios.push_back(3.5f);
    promedios.push_back(4.0f);
    promedios.push_back(4.5f);
    cout << "Vector de float (promedios): ";
    for (size_t i = 0; i < promedios.size(); i++) {
        cout << promedios[i] << " ";
    }
    cout << endl;

    // 9. Vector de double
    vector<double> decimales;
    decimales.push_back(3.1416);
    decimales.push_back(2.71828);
    decimales.push_back(1.4142);
    cout << "Vector de double (decimales): ";
    for (size_t i = 0; i < decimales.size(); i++) {
        cout << decimales[i] << " ";
    }
    cout << endl;

    // 10. Vector de long double
    vector<long double> constantes;
    constantes.push_back(6.626e-34L);
    constantes.push_back(1.602e-19L);
    cout << "Vector de long double (constantes): ";
    for (size_t i = 0; i < constantes.size(); i++) {
        cout << constantes[i] << " ";
    }
    cout << endl;

    // 11. Vector de bool
    vector<bool> respuestas;
    respuestas.push_back(true);
    respuestas.push_back(false);
    respuestas.push_back(true);
    cout << "Vector de bool (respuestas): ";
    for (size_t i = 0; i < respuestas.size(); i++) {
        cout << (respuestas[i] ? "true" : "false") << " ";
    }
    cout << endl;

    return 0;
}
