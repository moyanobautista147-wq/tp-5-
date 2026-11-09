#include <iostream>
using namespace std;

int main() {
    int numero = 11;

    for (int i = 1; i <= 25; i++) {
        cout << numero << " - ";
        numero = numero + 11;
    }

    return 0;
}
