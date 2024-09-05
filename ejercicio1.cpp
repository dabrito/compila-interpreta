#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();
    
    vector<double> valores;
    double valor, suma = 0;
    
    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el valor " << i + 1 << ": ";
        cin >> valor;
        valores.push_back(valor);
        suma += valor;
    }
    
    double promedio = suma / valores.size();
    cout << "Suma: " << suma << ", Promedio: " << promedio << endl;

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> tiempo = end - start;
    cout << "Tiempo de ejecución en C++: " << tiempo.count() << " segundos" << endl;

    return 0;
}
