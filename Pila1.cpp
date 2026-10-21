#include <iostream>
using namespace std;

int main() {
    int pila[5];
    int tope = -1;

    for (int i = 1; i <= 5; i++) {
        int numero;
        cout << "Ingrese el entero " << i << ": ";
        cin >> numero;
        tope++;
        pila[tope] = numero;
    }

    cout << "\nContenido de la pila (de arriba hacia abajo):" << endl;
    for (int i = tope; i >= 0; i--) {
        cout << pila[i] << endl;
    }

    return 0;
}
