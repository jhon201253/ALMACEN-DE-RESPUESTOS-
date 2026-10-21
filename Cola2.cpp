#include <iostream>
#include <string>
using namespace std;

int main() {
    string cola[4];
    int inicio = 0;
    int fin = -1;

    for (int i = 1; i <= 4; i++) {
        string frase;
        cout << "Ingrese la frase " << i << ": ";
        getline(cin, frase);
        fin++;
        cola[fin] = frase;
    }

    cout << "\nContenido de la cola:" << endl;
    for (int i = inicio; i <= fin; i++) {
        cout << cola[i] << endl;
    }

    return 0;
}
