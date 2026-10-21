#include <iostream>
using namespace std;

struct Nodo {
    float valor;
    Nodo* sig;
};

int main() {
    Nodo* cabeza = NULL;
    Nodo* ultimo = NULL;

    for (int i = 1; i <= 4; i++) {
        Nodo* nuevo = new Nodo;
        cout << "Ingrese el numero decimal " << i << ": ";
        cin >> nuevo->valor;
        nuevo->sig = NULL;

        if (cabeza == NULL) {
            cabeza = nuevo;
        } else {
            ultimo->sig = nuevo;
        }
        ultimo = nuevo;
    }

    cout << "\nLista de numeros:" << endl;
    Nodo* aux = cabeza;
    while (aux != NULL) {
        cout << aux->valor << endl;
        aux = aux->sig;
    }

    while (cabeza != NULL) {
        Nodo* borrar = cabeza;
        cabeza = cabeza->sig;
        delete borrar;
    }

    return 0;
}
