#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero no negativo: ";
    cin >> n;

    if (n < 0) {
        cout << "Error: El numero debe ser no negativo." << endl;
    } else {
        long long factorial = 1;
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        cout << "El factorial de " << n << " es: " << factorial << endl;
    }

    return 0;
}
