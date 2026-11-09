#include <iostream>
using namespace std;

int main() {
    int numero;
    int cantidad = 0;
    int suma = 0;

    for (int i = 1; i <= 300; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero % 2 != 0) {
            cantidad++;
            suma = suma + numero;
        }
    }

    cout << "Cantidad de impares: " << cantidad << endl;
    cout << "Suma de los impares: " << suma << endl;

    return 0;
}
