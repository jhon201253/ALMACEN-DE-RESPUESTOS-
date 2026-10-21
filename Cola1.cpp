#include <iostream>
using namespace std;

int main() {
    int cola[5];
    int inicio = 0;
    int fin = -1;

    for (int i = 1; i <= 5; i++) {
        int numero;
        cout << "Ingrese el numero " << i << ": ";
        cin >> numero;
        fin++;
        cola[fin] = numero;
    }

    cout << "\nContenido de la cola (orden de llegada):" << endl;
    for (int i = inicio; i <= fin; i++) {
        cout << cola[i] << endl;
    }

    return 0;
}
