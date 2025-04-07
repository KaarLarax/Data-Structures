#include <iostream>

using namespace std;

int minimo (int[], int );

void leer_array (int[], int );

int main() {
    int *puntero, n;
    cout << "�De cuantos valores ser� su arreglo? " << endl;
    cin >> n;
    puntero = new int[n];
    cout << "Ingrese los valores" << endl;
    leer_array(puntero, n);
    cout << "El valor minimo de su arreglo es: " << minimo(puntero, n) << endl;

    delete[] puntero;
    return 0;
}

int minimo (int x[], int y) {
    int menor = x[0];
    for (int i = 1; i < y; i++) {
        if (menor > x[i]) {
            menor = x[i];
        }
    }
    return menor;
}

void leer_array (int x[], int y) {
    for (int i = 0; i < y; i++) {
        cout << endl << "Ingresa un numero " << i + 1 << ": ";
        cin >> x[i];
    }
}
