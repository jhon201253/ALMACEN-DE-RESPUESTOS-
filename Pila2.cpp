#include <iostream>
using namespace std;

int main() {
    char pila[6];
    int tope = -1;

    for (int i = 1; i <= 6; i++) {
        char letra;
        cout << "Ingrese la letra " << i << ": ";
        cin >> letra;
        tope++;
        pila[tope] = letra;
    }

    cout << "\nContenido de la pila (de arriba hacia abajo):" << endl;
    for (int i = tope; i >= 0; i--) {
        cout << pila[i] << endl;
    }

    return 0;
}
