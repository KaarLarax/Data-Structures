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
    void leer_persona();
    void leer_nombre();
    void leer_apellidop();
    void leer_apellidom();
    void leer_edad();
    void imprimir_nombre();
    void imprimir_apellidop();
    void imprimir_apellidom();
    void imprimir_edad() const;
    void imprimir_persona();
    string gets_nombre();
    string gets_apellidop();
    string gets_apellidom();
    int gets_edad() const;
    bool operator>(const persona&);
};

#endif // PERSONA_H
