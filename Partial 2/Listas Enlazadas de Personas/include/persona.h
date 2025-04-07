#ifndef PERSONA_H
#define PERSONA_H

#include <bits/stdc++.h>
#include <vector>
#include <windows.h>

using namespace std;

class persona
{
private:
    string nombre;
    string apellidop;
    string apellidom;
    int edad;

public:
    persona();
    void leer_persona();
    void leer_nombre();
    void leer_apellidop();
    void leer_apellidom();
    void leer_edad();
    void imprimir_nombre();
    void imprimir_apellidop();
    void imprimir_apellidom();
    void imprimir_edad();
    void imprimir_persona();
    const string gets_nombre();
    const string gets_apellidop();
    const string gets_apellidom();
    const int gets_edad();
};

#endif // PERSONA_H
