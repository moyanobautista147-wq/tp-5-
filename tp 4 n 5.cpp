#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double saldo = 0.0;
    int opcion = 0;
    double monto;

    cout << fixed << setprecision(2);

    while (opcion != 4) {
        cout << "\n--- CAJERO AUTOMATICO ---" << endl;
        cout << "1. Consultar saldo" << endl;
        cout << "2. Depositar dinero" << endl;
        cout << "3. Retirar dinero" << endl;
        cout << "4. Salir" << endl;
        cout << "Seleccione una opcion (1-4): ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Su saldo actual es: $" << saldo << endl;
                break;

            case 2:
                cout << "Ingrese el monto a depositar: $";
                cin >> monto;
                if (monto > 0) {
                    saldo += monto;
                    cout << "Deposito exitoso. Nuevo saldo: $" << saldo << endl;
                } else {
                    cout << "Error: El monto a depositar debe ser mayor a cero." << endl;
                }
                break;

            case 3:
                cout << "Ingrese el monto a retirar: $";
                cin >> monto;
                if (monto <= 0) {
                    cout << "Error: El monto a retirar debe ser mayor a cero." << endl;
                } else if (monto > saldo) {
                    cout << "Error: Saldo insuficiente para realizar el retiro." << endl;
                } else {
                    saldo -= monto;
                    cout << "Retiro exitoso. Nuevo saldo: $" << saldo << endl;
                }
                break;

            case 4:
                cout << "Gracias por utilizar el cajero automatico. Hasta luego!" << endl;
                break;

            default:
                cout << "Opcion no valida. Por favor, intente de nuevo." << endl;
                break;
        }
    }

    return 0;
}
