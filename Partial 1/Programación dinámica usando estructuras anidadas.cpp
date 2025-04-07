#include <iostream>

using namespace std;

struct Dirr {
    string calle, colonia;
    int numero;
};

struct Alumno {
    string nombre;
    int calificaciones[3];
    Dirr Direccion;
};

double promedio(int [], int);

void leer_calificaciones(int [], int);

void leer_alumno(Alumno *, int);

int main() {
    Alumno *uaeh;
    int n;
    cout << " ________________________________________________" << endl;
    cout << "|Cuantos alumnos va registrar: ";
    cin >> n;
    cout << " ________________________________________________" << endl;
    uaeh = new Alumno[n];
    for (int i = 0; i < n; i++) {
        leer_alumno(&uaeh[i], i);
    }
    for (int i = 0; i < n; i++) {
        cout << endl << " *********************************************************";
        cout << endl << i + 1 << "|Su nombre es: " << uaeh[i].nombre << endl;
        cout << i + 1 << "|Su Promedio es: " << promedio(uaeh[i].calificaciones, 3) << endl;
        cout << i + 1 << "|Su colonia es: " << uaeh[i].Direccion.colonia << endl;
        cout << i + 1 << "|Su calle es: " << uaeh[i].Direccion.calle << endl;
        cout << i + 1 << "|Su numero de vivienda es: " << uaeh[i].Direccion.numero;
        cout << endl;
    }
    delete uaeh;
    return 0;
}

double promedio(int x[], int n) {
    double suma_calificaciones = 0;
    for (int i = 0; i < n; i++) {
        suma_calificaciones += x[i];
    }
    return suma_calificaciones / 3;
}

void leer_calificaciones(int x[], int n) {
    for (int i = 0; i < n; i++) {
        cout << endl << "\t |Ingrese la calificacion " << i + 1 << ": ";
        cin >> x[i];
    }
}

void leer_alumno(Alumno *uaeh, int i) {
    cout << " ________________________________________________" << endl;
    cout << i + 1 << "|Ingrese su nombre: ";
    fflush(stdin);
    getline(cin, uaeh->nombre);
    leer_calificaciones(uaeh->calificaciones, 3);
    cout << endl << i + 1 << "|Ingrese su colonia: ";
    fflush(stdin);
    getline(cin, uaeh->Direccion.colonia);
    cout << endl << i + 1 << "|Ingrese su calle: ";
    getline(cin, uaeh->Direccion.calle);
    cout << endl << i + 1 << "|Ingrese su numero de vivienda: ";
    cin >> uaeh->Direccion.numero;
    fflush(stdin);
    cout << endl;
    system("pause");
}
