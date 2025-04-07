#include "persona.h"
persona::persona()
{

}

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
     Sleep(500);
 }
 void persona::leer_apellidop()
 {
     cout << "Ingrese el apellido paterno: " << endl;
     fflush(stdin);
     getline(cin, apellidop);
     cout << "apellido registrado" << endl;
     Sleep(500);
 }
 void persona::leer_apellidom()
 {
     cout << "Ingrese el apellido materno: " << endl;
     fflush(stdin);
     getline(cin, apellidom);
     cout << "apellido registrado" << endl;
     Sleep(500);
 }
 void persona::leer_edad()
 {
     cout << "Ingrese la edad: " << endl;
     fflush(stdin);
     cin >> edad;
     cout << "Edad registrada" << endl;
     Sleep(500);
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
 void persona::imprimir_edad()
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
const string persona::gets_nombre()
{
    return nombre;
}
const string persona::gets_apellidop()
{
    return apellidop;
}
const string persona::gets_apellidom()
{
    return apellidom;
}
const int persona::gets_edad()
{
    return edad;
}
