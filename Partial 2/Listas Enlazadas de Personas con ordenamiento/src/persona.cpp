#include "persona.h"
void persona::leer_persona()
{
    leer_nombre();
    leer_apellidop();
    leer_apellidom();
    leer_edad();
    cout << "Persona registrada" << endl;
    //ctor
}
void persona::leer_nombre()
 {
     cout << "Ingrese el nombre: " << endl;
     fflush(stdin);
     getline(cin, nombre);
     cout << "Nombre registrado" << endl;
     Sleep(50);
 }
 void persona::leer_apellidop()
 {
     cout << "Ingrese el apellido paterno: " << endl;
     fflush(stdin);
     getline(cin, apellidop);
     cout << "apellido registrado" << endl;
     Sleep(50);
 }
 void persona::leer_apellidom()
 {
     cout << "Ingrese el apellido materno: " << endl;
     fflush(stdin);
     getline(cin, apellidom);
     cout << "apellido registrado" << endl;
     Sleep(50);
 }
 void persona::leer_edad()
 {
        do {
         cout << "Ingrese la edad: " << endl;
         fflush(stdin);
         if (!(cin >> edad) || edad == 0) {
                cout << "Edad Invalida" << endl;
                cin.clear();
                cin.ignore(numeric_limits<int>::max(), '\n');
            } else {
                cout << "Edad registrada" << endl;
                Sleep(50);
                break;
            }
        } while (true);
 }
 void persona::imprimir_nombre()
 {
     cout << "El nombre es: " << nombre << endl;
 }
void persona::imprimir_apellidop()
 {
     cout << "El apellido paterno es: " << apellidop << endl;
 }
 void persona::imprimir_apellidom()
 {
     cout << "El apellido materno es: " << apellidom << endl;
 }
 void persona::imprimir_edad() const
 {
     cout << "La edad es: " << edad << endl;
 }
 void persona::imprimir_persona()
 {
     imprimir_nombre();
     imprimir_apellidop();
     imprimir_apellidom();
     imprimir_edad();
 }
string persona::gets_nombre()
{
    return nombre;
}
string persona::gets_apellidop()
{
    return apellidop;
}
string persona::gets_apellidom()
{
    return apellidom;
}
int persona::gets_edad() const
{
    return edad;
}

bool persona::operator>(const persona& p) {
    if (apellidop > p.apellidop) {
        return true;
    }
    if (apellidop == p.apellidop && apellidom > p.apellidom) {
        return true;
    }
    if (apellidop == p.apellidop && apellidom == p.apellidom && nombre > p.nombre) {
        return true;
    }
    if (apellidop == p.apellidop && apellidom == p.apellidom && nombre == p.nombre && edad > p.edad) {
        return true;
    }
    return false;
}
