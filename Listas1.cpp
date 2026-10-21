#include <iostream>
#include <string>
using namespace std;

struct Nodo {
    string nombre;
    Nodo* sig;
};

int main() {
    Nodo* cabeza = NULL;
    Nodo* ultimo = NULL;

    for (int i = 1; i <= 5; i++) {
        Nodo* nuevo = new Nodo;
        cout << "Ingrese el nombre " << i << ": ";
        getline(cin, nuevo->nombre);
        nuevo->sig = NULL;

        if (cabeza == NULL) {
            cabeza = nuevo;
        } else {
            ultimo->sig = nuevo;
        }
        ultimo = nuevo;
    }

    cout << "\nLista de nombres:" << endl;
    Nodo* aux = cabeza;
    while (aux != NULL) {
        cout << aux->nombre << endl;
        aux = aux->sig;
    }

    while (cabeza != NULL) {
        Nodo* borrar = cabeza;
        cabeza = cabeza->sig;
        delete borrar;
    }

    return 0;
}
