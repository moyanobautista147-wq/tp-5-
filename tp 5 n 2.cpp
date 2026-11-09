#include <iostream>
using namespace std;

int main() {
    int valor, suma = 0;
    int maximo, minimo;
    float promedio;

    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese un valor: ";
        cin >> valor;

        suma = suma + valor;

        if (i == 1) {
            maximo = valor;
            minimo = valor;
        } else {
            if (valor > maximo) {
                maximo = valor;
            }

            if (valor < minimo) {
                minimo = valor;
            }
        }
    }

    promedio = suma / 10.0;

    cout << "Suma: " << suma << endl;
    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Promedio: " << promedio << endl;

    return 0;
}
