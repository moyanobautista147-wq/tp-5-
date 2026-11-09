#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cout << "Ingrese un numero entero positivo: ";
    cin >> n;

    if (n <= 0) {
        cout << "Error: El numero debe ser positivo." << endl;
    } else {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << setw(4) << i * j;
            }
            cout << endl;
        }
    }

    return 0;
}
