#include <iostream>
using namespace std;

int main() {
    int suma = 0;

    for (int i = 2; i <= 100; i = i + 2) {
        cout << i << " ";
        suma = suma + i;
    }

    cout << endl;
    cout << "La suma total es: " << suma << endl;

    return 0;
}
