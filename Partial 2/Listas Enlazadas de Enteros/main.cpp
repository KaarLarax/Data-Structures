#include <iostream>
#include "lista.h"

bool ask_return ();

int main() {
    SetConsoleCP(1252);
    SetConsoleOutputCP(1252);
    lista listita(5);
    unsigned int opc;
    do {
        system("cls");
        cout << "Menu de Opciones" << endl;
        cout << "1. Mostrar lista" << endl;
        cout << "2. Mostrar elemento" << endl;
        cout << "3. añadir elemento" << endl;
        cout << "4. insertar elemento" << endl;
        cout << "5. Eliminar elemento" << endl;
        cout << "6. Limpiar lista" << endl;
        cout << "0. SALIR" << endl;
        do {
            cout << "--> ";
            if (!(cin >> opc)) {
                cout << "Opcion invalida " << endl;
                cin.clear();
                cin.ignore(numeric_limits<int>::max(), '\n');
            } else {
                break;
            }
        } while (true);

        switch (opc) {
            case 1:
                listita.mostrar_lista();
                break;
            case 2:
                listita.mostrar_elemento();
                break;
            case 3:
                listita.anadir_elemento();
                break;
            case 4:
                listita.insertar_elemento();
                break;
            case 5:
                listita.eliminar_elemento();
                break;
            case 6:
                listita.limpiar_lista();
                break;
            case 0:
                cout << "Adios..." << endl;
                listita.~lista();
                return 0;
                break;
            default:
                cout << "Opcion incorecta" << endl;
                Sleep(1000);
        }
        system("cls");
    } while (ask_return());
    listita.~lista();
    return 0;
}
bool ask_return () {
    unsigned int opsi = 0;
    cout << "Desea seleccionar otra opcion: '1' para realizarlo" << endl;
    if (!(cin >> opsi) || opsi != 1) {
        cout << "Se cerrara el programa..." << endl;
        cin.clear();
        cin.ignore(numeric_limits<int>::max(), '\n');
        Sleep(1000);
        return false;
    } else {
        fflush(stdin);
        cout << "Regresando al menu principal..." << endl;
        Sleep(1000);
        return true;
    }
}
