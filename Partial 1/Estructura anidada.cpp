#include <iostream>

using namespace std;

struct Dirr{
        string calle, colonia;
        int numero;
};

struct Persona{
        string nombre;
        Dirr Direccion;
};

int main()
{
    Persona Carlos;
    cout << "Ingrese su nombre: ";
    getline(cin, Carlos.nombre);
    cout << endl << "Ingrese su colonia: ";
    getline(cin, Carlos.Direccion.colonia);
    cout << endl << "Ingrese su calle: ";
    getline(cin, Carlos.Direccion.calle);
    cout << endl << "Ingrese su numero de vivienda: ";
    cin >> Carlos.Direccion.numero;
    system("pause");

    cout << "Su nombre es: " << Carlos.nombre << endl;
    cout << "Su colonia es: " << Carlos.Direccion.colonia << endl;
    cout << "Su calle es: " << Carlos.Direccion.calle << endl;
    cout << "Su numero de vivienda es: " << Carlos.Direccion.numero;
    return 0;
}

