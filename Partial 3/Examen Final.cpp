#include <iostream>
#include <fstream>
#include <string>
#include <windows.h>

using namespace std;

struct Libro {
    char titulo[50];
    char autor[50];
    int paginas;
    double precio;
};

// Funci�n para escribir registros en un archivo
void escribirRegistros(const string& nombreArchivo) {
    Libro libro1 = {"Cien a�os de soledad", "Gabriel Garc�a M�rquez", 432, 19.99};
    Libro libro2 = {"El Quijote", "Miguel de Cervantes", 863, 25.99};

    try {
        ofstream archivoSalida(nombreArchivo.c_str(), ios::binary); // Abrimos el archivo para escritura en modo binario

        archivoSalida.write(reinterpret_cast<const char*>(&libro1), sizeof(libro1)); // Escribimos el primer libro en el archivo
        archivoSalida.write(reinterpret_cast<const char*>(&libro2), sizeof(libro2)); // Escribimos el segundo libro en el archivo

        archivoSalida.close(); // Cerramos el archivo
        cout << "Registros escritos en el archivo correctamente." << endl;
    }
    catch (const std::exception& e) {
        cout << "Error al abrir o escribir en el archivo: " << e.what() << endl;
    }
}

// Funci�n para leer registros de un archivo
void leerRegistros(const string& nombreArchivo) {
    Libro libro;

    try {
        ifstream archivoEntrada(nombreArchivo.c_str(), ios::binary); // Abrimos el archivo para lectura en modo binario

        while (archivoEntrada.read(reinterpret_cast<char*>(&libro), sizeof(libro))) { // Leemos cada registro del archivo
            cout << "T�tulo: " << libro.titulo << endl;
            cout << "Autor: " << libro.autor << endl;
            cout << "P�ginas: " << libro.paginas << endl;
            cout << "Precio: $" << libro.precio << endl << endl;
        }

        archivoEntrada.close(); // Cerramos el archivo
    }
    catch (const std::exception& e) {
        cout << "Error al abrir o leer el archivo: " << e.what() << endl;
    }
}


int main() {
    string nombreArchivo = R"(.\xd.dat)"; // D:\\_School\\Libro.dat
    SetConsoleCP(1252); // Cambiar STDIN -  Para m�quinas Windows
    SetConsoleOutputCP(1252); // Cambiar STDOUT - Para m�quinas Windows
    system("color 0c");


    escribirRegistros(nombreArchivo); // Escribimos los registros de libros en el archivo

    cout << endl;

    leerRegistros(nombreArchivo); // Leemos los registros de libros del archivo

    return 0;
}
