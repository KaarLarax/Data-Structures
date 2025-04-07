#ifndef HEADER_91BF4B5ADA9A98A7
#define HEADER_91BF4B5ADA9A98A7

// persona.h
// Lara Hernandez Carlos Alberto
// Numero de cuenta: 476759

#ifndef PERSONA_H
#define PERSONA_H

#include <bits/stdc++.h>
#include <windows.h>
#include <iostream>

using namespace std;
const HANDLE hConsole = GetStdHandle( STD_OUTPUT_HANDLE );

class persona
{
private:
    string nombre = "NULL";
    string apellidop = "NUll";
    string apellidom = "NULL";
    int edad = 0;

public:
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
    string gets_nombre() const;
    string gets_apellidop() const;
    string gets_apellidom() const;
    int gets_edad() const;
    bool operator > (const persona&);
    bool operator < (const persona&);
};

#endif // PERSONA_H
#endif // HEADER_91BF4B5ADA9A98A7


