#include <iostream>
using namespace std;

int main() {
    int n, valor;
    int pares = 0;
    int impares = 0;

    cout << "Cuantos numeros desea ingresar? ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "Ingrese un numero: ";
        cin >> valor;

        if (valor % 2 == 0) {
            pares++;
        } else {
            impares++;
        }
    }

    cout << "Cantidad de pares: " << pares << endl;
    cout << "Cantidad de impares: " << impares << endl;

    return 0;
}
