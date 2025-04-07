#ifndef HEADER_CFEB6B1C721FDEBE
#define HEADER_CFEB6B1C721FDEBE

//
// Created by Clase on 22/02/2023.
//

#ifndef UNTITLED_LISTA_H
#define UNTITLED_LISTA_H
#include <bits/stdc++.h>
#include <windows.h>
using namespace std;

class lista {
private:
    int *p, maxi, n;
public:
    lista(int tamanio);
    virtual ~lista();
    void mostrar_lista();
    void mostrar_elemento();
    void anadir_elemento();
    void insertar_elemento();
    void eliminar_elemento();
    void limpiar_lista();

};


#endif //UNTITLED_LISTA_H
#endif // header guard

