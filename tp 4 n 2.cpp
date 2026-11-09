#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: El numero debe ser positivo." << endl;
    } else {
        for (int fila = 1; fila <= n; fila++) {
            for (int columna = 1; columna <= n; columna++) {
                if (fila + columna <= n) {
                    cout << "* ";
                } else {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }

    return 0;
}
