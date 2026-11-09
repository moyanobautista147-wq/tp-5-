#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int cantidadVendedores;
    cout << "Ingrese la cantidad de vendedores: ";
    cin >> cantidadVendedores;

    vector<string> nombres(cantidadVendedores);
    vector<int> ventas(cantidadVendedores);
    int totalVentas = 0;

    for (int i = 0; i < cantidadVendedores; i++) {
        cout << "Nombre del vendedor " << i + 1 << ": ";
        cin >> ws;
        getline(cin, nombres[i]);
        
        cout << "Cantidad de ventas de " << nombres[i] << ": ";
        cin >> ventas[i];
        
        totalVentas += ventas[i];
    }

    cout << "\nSalida:" << endl;
    for (int i = 0; i < cantidadVendedores; i++) {
        cout << nombres[i] << ": " << ventas[i] << " ventas" << endl;
    }
    cout << "Total general de ventas: " << totalVentas << endl;

    return 0;
}
