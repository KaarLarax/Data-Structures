#include <iostream>

using namespace std;

struct Alumno{
        string nombre, semestre;
        float calificaciones[3];
        int grupo;
};

float promedio(float []);
float promedio(Alumno *);



int main()
{
    Alumno x;
    cout << "Ingrese su nombre: ";
    getline(cin, x.nombre);
    cout << endl << "Ingrese su semestre: ";
    getline(cin, x.semestre);
    cout << endl << "Ingrese su grupo: ";
    cin >> x.grupo;
    cout >> endl;
    system("pause");

    for (int i=0; i<3; i++){
        cout << endl << "Ingrese la calificacion " << i+1 << ": ";
        cin >> x.calificaciones[i];
    }

    cout << x.nombre << " tu promedio del " << x.semestre << " semestre es: " << promedio(x.calificaciones) << endl;
    cout << x.nombre << " tu promedio del " << x.semestre << " semestre es: " << promedio(&x) << endl;
    return 0;
}

float promedio(float x[])
{
    float suma_calificaciones=0;
    for (int i=0; i<3; i++){
        suma_calificaciones+=x[i];
    }
    return suma_calificaciones/3;
}
float promedio(Alumno *a)
{
    float suma_calificaciones=0;
    for (int i=0; i<3; i++){
        suma_calificaciones+=a->calificaciones[i];
    }
    return suma_calificaciones/3;
}
