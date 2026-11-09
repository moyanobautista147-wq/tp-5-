#include <iostream>
using namespace std;

int main() {
    float numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero >= 0.01) {
        numero = numero / 2;

        cout << "Resultado: " << numero << endl;
    }

    cout << "El numero es menor que 0.01" << endl;

    return 0;
}
