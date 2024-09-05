#include <iostream>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    srand(time(0));  // Inicializar la semilla de números aleatorios

    int pares = 0, impares = 0;

    for (int i = 0; i < 500; i++) {
        int valor = rand() % 51 + 50;  // Generar número entre 50 y 100
        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Pares: " << pares << ", Impares: " << impares << endl;

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> tiempo = end - start;
    cout << "Tiempo de ejecución en C++: " << tiempo.count() << " segundos" << endl;

    return 0;
}
