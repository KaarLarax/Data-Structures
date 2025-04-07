//
// Created by Clase on 22/02/2023.
//

#include "lista.h"

void lista::mostrar_lista() {
    if (n>0){
        cout << "Los elementos de la lista son : " << endl;
        for(int i=0; i<n; i ++){
            cout << i+1 << ": "<< p[i] << endl;
        }
        cout << endl;
        system("Pause");
    }
    else
        cout << "La lista esta vacia" << endl;
    Sleep(1000);
}

void lista::mostrar_elemento() {
    if (n>0){
        unsigned int pos;
        cout << "Ingrese la posicion que quiere ver: " << endl;
        do {
            if (!(cin >> pos) || pos == 0) {
                cout << "Posicion invalida " << endl;
                cin.clear();
                cin.ignore(numeric_limits<int>::max(), '\n');
            } else {
                cout << "El elemento en la posicion es: " << p[pos - 1] << endl;
                system("Pause");
                break;
            }
        } while (true);
    } else {
        cout << "No existen valores que mostrar" << endl;
        Sleep(1000);
    }
}

void lista::anadir_elemento() {
    if ( n < maxi){
        do {
            cout << "Ingrese el valor: ";
            if (!(cin >> p[n])) {
                cout << "Valor invalido " << endl;
                cin.clear();
                cin.ignore(numeric_limits<int>::max(), '\n');
                Sleep(1000);
            } else {
                cout << "Valor añadido" << endl;
                n++;
                Sleep(1000);
                break;
            }
        } while (true);
    }
    else
        cout << "Espacio insuficiente" << endl;
    Sleep(1000);
}

void lista::insertar_elemento() {
    if (n<maxi) {
        unsigned int pos;
        do {
            cout << "Ingrese en que posicion desea ingresar el elemento: ";
            if (!(cin >> pos) || pos == 0 || pos > maxi) {
                cout << "Posicion invalida " << endl;
                cin.ignore(numeric_limits<int>::max(), '\n');
            } else {
                for (int i = n; i >= pos; i--) {
                    p[i] = p[i - 1];
                    }
                    do {
                    cout << "Ingrese el elemento: ";
                    if (!(cin >> p[pos - 1])) {
                        cout << "Elemento invalido " << endl;
                        cin.clear();
                        cin.ignore(numeric_limits<int>::max(), '\n');
                    } else {
                        cout << "Elemento añadido" << endl;
                        n++;
                        Sleep(1000);
                        break;
                    }
                    }while (true);
                break;
            }
        } while (true);
    }

}

void lista::eliminar_elemento() {
    if (n != 0) {
        unsigned int pos;
        do {
            cout << "Ingrese en que posicion desea eliminar el elemento: ";
            if (!(cin >> pos) || pos == 0) {
                cout << "Posicion invalida " << endl;
                cin.clear();
                cin.ignore(numeric_limits<int>::max(), '\n');
            } else {
                for (int i = pos-1; i < n-1 ; i++) {
                    p[i] = p[i+1];
                }
                cout << "Elemento eliminado" << endl;
                n--;
                Sleep(1000);
                break;
            }
        } while (true);
    } else {
        cout << "Posicion invalida o lista vacia" << endl;
        Sleep(1000);
    }
}

void lista::limpiar_lista() {
    n=0;
    cout << "Lista limpiada" << endl;
    Sleep(1000);
}

lista::lista(int tamanio) {
    p=new int [tamanio];
    maxi=tamanio;
    n=0;
}

lista::~lista() {
   delete []p; //dtor
}
