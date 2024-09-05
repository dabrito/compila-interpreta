#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <chrono>

using namespace std;

int main() {
    auto start = chrono::high_resolution_clock::now();

    srand(time(0));

    vector<string> sucursales;
    vector<int> ventas;
    int suma_ventas = 0;

    for (int i = 0; i < 25; i++) {
        string sucursal = "Sucursal " + to_string(i + 1);
        sucursales.push_back(sucursal);
        
        int venta = rand() % 9001 + 1000;  // Generar número entre 1000 y 10000
        ventas.push_back(venta);
        suma_ventas += venta;
    }

    double promedio_ventas = suma_ventas / 25.0;
    cout << "Promedio de ventas: " << promedio_ventas << endl;
    cout << "Sucursales con ventas mayores al promedio:" << endl;
    
    for (int i = 0; i < 25; i++) {
        if (ventas[i] > promedio_ventas) {
            cout << sucursales[i] << endl;
        }
    }

    auto end = chrono::high_resolution_clock::now();
    chrono::duration<double> tiempo = end - start;
    cout << "Tiempo de ejecución en C++: " << tiempo.count() << " segundos" << endl;

    return 0;
}
