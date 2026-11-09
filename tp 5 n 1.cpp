#include <iostream>
using namespace std;

int main() {
    int aprobados = 0;
    int reprobados = 0;
    int nota;

    for (int i = 1; i <= 10; i++) {
        cout << "Ingrese la nota del alumno " << i << ": ";
        cin >> nota;

        if (nota >= 7) {
            aprobados = aprobados + 1;
        } else {
            reprobados = reprobados + 1;
        }
    }

    cout << "Alumnos aprobados: " << aprobados << endl;
    cout << "Alumnos reprobados: " << reprobados << endl;

    return 0;
}
