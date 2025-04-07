//
// Created by Clase on 22/02/2023.
//

#include "lista.h"

void lista::mostrar_lista() {
    if (n>0){
        cout << "Los elementos de la lista son : " << endl;
        for(int i=0; i<n; i ++){
            cout << "Persona " << i+1 << ": "<< endl;
            p[i].imprimir_persona();
            cout << "___________________________________________" << endl;
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
                cout << "La persona en la posicion es: " << endl;
                p[pos-1].imprimir_persona();
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
       cout << "Persona a registrar: " <<  endl;
       p[n].leer_persona();
       n++;
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
                    cout << "Rellene los datos de la nueva persona a insertar" << endl;
                    p[pos -1].leer_persona();
                    n++;
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
    p=new persona [tamanio];
    maxi=tamanio;
    n=0;
}

lista::~lista() {
   delete []p; //dtor
}

void lista::buscar()
{
    int opc;
    bool sb=true;
    do {
        system("cls");
        cout << "Menu de busqueda" << endl;
        cout << "1. Buscar por nombre" << endl;
        cout << "2. Buscar por apellido paterno" << endl;
        cout << "3. Buscar por apellido materno" << endl;
        cout << "4. Buscar por edad" << endl;
        cout << "0. regresar al menu principal" << endl;
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
                buscar_nombre();
                break;
            case 2:
                buscar_apellidop();
                break;
            case 3:
                buscar_apellidom();
                break;
            case 4:
                buscar_edad();
                break;
            case 0:
                sb=false;
                break;
            default:
                cout << "Opcion incorecta" << endl;
                Sleep(1000);
        }
        system("cls");
    } while (sb);
}
void lista::buscar_apellidop()
{
    system("cls");
    vector<int> a;
    string x;
    int acu=0;
    cout << "Ingrese el apellido paterno de la(s) personas que desea buscar" << endl;
    fflush(stdin);
    getline(cin, x);
    for (int i; i<n; i++)
    {
        if (x == p[i].gets_apellidop()){
         a.push_back(i);
         acu++;
        }
    }
    cout << "El apellido se encontro " << a.size() << " veces." << endl;
    cout << "Las personas que coinciden con el apellido buscado son: " << endl;
    for (auto i : a) {
        cout << "_______________________________________________" << endl;
        p[i].imprimir_persona();
    }
    system("pause");
}
void lista::buscar_apellidom()
{
    system("cls");
    vector<int> a;
    string x;
    int acu=0;
    cout << "Ingrese el apellido paterno de la(s) personas que desea buscar" << endl;
    fflush(stdin);
    getline(cin, x);
    for (int i; i<n; i++)
    {
        if (x == p[i].gets_apellidom()){
         a.push_back(i);
         acu++;
        }
    }
    cout << "El apellido se encontro " << a.size() << " veces." << endl;
    cout << "Las personas que coinciden con el apellido buscado son: " << endl;
    for (auto i : a) {
        cout << "_______________________________________________" << endl;
        p[i].imprimir_persona();
    }
    system("pause");
}
void lista::buscar_nombre()
{
    system("cls");
    vector<int> a;
    string x;
    int acu=0;
    cout << "Ingrese el apellido paterno de la(s) personas que desea buscar" << endl;
    fflush(stdin);
    getline(cin, x);
    for (int i; i<n; i++)
    {
        if (x == p[i].gets_nombre()){
         a.push_back(i);
         acu++;
        }
    }
    cout << "El apellido se encontro " << a.size() << " veces." << endl;
    cout << "Las personas que coinciden con el apellido buscado son: " << endl;
    for (auto i : a) {
        cout << "_______________________________________________" << endl;
        p[i].imprimir_persona();
    }
    system("pause");
}
void lista::buscar_edad()
{
    system("cls");
    vector<int> a;
    int x=0;
    int acu=0;
    cout << "Ingrese el apellido paterno de la(s) personas que desea buscar" << endl;
    fflush(stdin);
    cin >> x;
    for (int i; i<n; i++)
    {
        if (x == p[i].gets_edad()){
         a.push_back(i);
         acu++;
        }
    }
    cout << "El apellido se encontro " << a.size() << " veces." << endl;
    cout << "Las personas que coinciden con el apellido buscado son: " << endl;
    for (auto i : a) {
        cout << "_______________________________________________" << endl;
        p[i].imprimir_persona();
    }
    system("pause");
}
