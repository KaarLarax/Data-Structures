// Metodo principal
// Lara Hernandez Carlos Alberto
// Numero de cuenta: 476759

#include <list>  // Clase list
#include "persona.h" // Clase persona

ostream& operator << (ostream &o, const persona& p) { // Sobrecarga del operador "<<" pconst ara la clase persona
    o << "Nombre: " << p.gets_nombre() << endl
    << "Apellido paterno: " << p.gets_apellidop() << endl
    << "Apellido materno: " << p.gets_apellidom() << endl
    << "Edad: " << p.gets_edad() << endl;
    return o;
}

bool askretorno (); // Funcion para repetir el menú
int askmenu (); // Funcion para las opciones del menú
void despedida (); // Funcion para terminar un programa

int main()
{
    SetConsoleOutputCP(1252); // para la salida de datos correcta en consola
    SetConsoleCP(1252); // para la entrada de datos y posterior salida correcta en consola
    list<persona> alumnos;
    list <persona>::iterator itp;
    bool menuband; // Variable boleana para el retorno del munú
    persona aux; // Variable auxiliar de tipo persona para el ingreso de valor en la lista
    unsigned int num; // Variable entera sin signo para las posiciones de la lista
    do{
        system("cls"); // Limpia la consola
        SetConsoleTextAttribute(hConsole, 13); // cambia de color el texto a morado claro
        cout << "\t\t" << "+-----------------------------------------------------+" << endl;
        cout << "\t\t" << "|---------|| LARA HERNANDEZ CARLOS ALBERTO||----------|" << endl;
        cout << "\t\t" << "+---------++----++------------------++----++----------+" << endl;
        cout << "\t\t" << "|---------------|| MENU DE OPCIONES ||----------------|" << endl;
        cout << "\t\t" << "+----------++---++------------------++---++-----------+" << endl;
        cout << "\t\t" << "|----------|| Q) AGREGAR PERSONA         ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| W) INSERTAR ELEMENTO       ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| E) BORRAR ELEMENTO         ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| R) IMPRIMIR ELEMENTO       ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| T) ORDENAR LISTA           ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| Y) IMPRIMIR LISTA          ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| U) VACIAR LISTA            ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
        cout << "\t\t" << "|----------|| I) SALIR                   ||-----------|" << endl;
        cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
        switch(tolower(askmenu())) // Se selecciona la opcion para el menu
        {
        case 'q':
            system("cls");
            cout << "\t\t" << "+----------++---++------------------++---++-----------+" << endl;
            cout << "\t\t" << "|----------|| Q) AGREGAR PERSONA         ||-----------|" << endl;
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
            aux.leer_persona(); // Se utiliza el metodo para pedir los datos del objeto persona
            alumnos.push_back(aux); // Se ingresa el obejto al final de la lista
        break;
        case 'w':
            system("cls");
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
            cout << "\t\t" << "|----------|| W) INSERTAR ELEMENTO       ||-----------|" << endl;
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
            if (alumnos.empty()) { // si esta vacia la lista realiza esto
                cout << "\t\t" << "La lista esta vacia" << endl;
            } else { // Si no esta vacia realiza esto
                cout << "\t\t" << "Ingrese la posicion donde desea ingresar el elemento" << endl;
                fflush(stdin); // Limpia el buffer de stdin
                do {
                    cout << "--> ";
                    if (!(cin >> num) || num > alumnos.size() || num == 0) {
                        //Si falla la entrada o el valor es mayor a los elementos de la lista o si el valor es identico a 0
                        cout << "\t\t" << "posicion invalida" << endl;
                        cin.clear(); // Limpia la entrada cin
                        cin.ignore(numeric_limits<int>::max(), '\n');
                        // Ignora todos los numeros fuera de los enteros hasta el salto de linea
                    } else { // Si nada de lo anterior se cumple, realiza lo siguiente
                        aux.leer_persona(); // Se utiliza el metodo para pedir los datos del objeto persona
                        num -= 1; // Se resta 1 en el valor pedido
                        itp = alumnos.begin(); // El iterador se coloca al principio de la lista
                        advance(itp, num); // El interador avanza el numero de "num" casillas
                        alumnos.insert(itp, aux); // El objeto se ingresa en la posicion dada por el usuario
                        Sleep(50); // Hace una pausa de 50 milisegundos
                        break; // Rompe el ciclo do-while
                    }
                } while (true);
            }
        break;
        case 'e':
            system("cls"); //Limpia la consola
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
            cout << "\t\t" << "|----------|| E) BORRAR ELEMENTO         ||-----------|" << endl;
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
            if (alumnos.empty()) {
                cout << "\t\t" << "La lista esta vacia" << endl;
            } else { // Si no esta vacia realiza esto
                cout << "\t\t" << "Ingrese la posicion del elemento que desea borrar" << endl;
                fflush(stdin); // Limpia el buffer de stdin
                do {
                    cout << "--> ";
                    if (!(cin >> num) || num > alumnos.size() || num == 0) {
                        //Si falla la entrada o el valor es mayor a los elementos de la lista o si el valor es identico a 0
                        cout << "\t\t" << "posicion invalida" << endl;
                        cin.clear(); // Limpia la entrada cin
                        cin.ignore(numeric_limits<int>::max(), '\n');
                        // Ignora todos los numeros fuera de los enteros hasta el salto de linea
                    } else {
                        num -= 1; // Se resta 1 en el valor pedido
                        itp = alumnos.begin(); // El iterador se coloca al principio de la lista
                        advance(itp, num); // El interador avanza el numero de "num" casillas
                        alumnos.erase(itp); // El objeto se elimina en la posicion dada por el usuario
                        cout << "\t\t" << "Persona eliminada" << endl;
                        Sleep(50); // Hace una pausa de 50 milisegundos
                        break; // Rompe el ciclo do-while
                    }
                } while (true);
            }
        break;
        case 'r':
            system("cls"); // Limpia la consola
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
            cout << "\t\t" << "|----------|| R) IMPRIMIR ELEMENTO       ||-----------|" << endl;
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
            if (alumnos.empty()) { // si esta vacia la lista realiza esto
                cout << "\t\t" << "La lista esta vacia" << endl;
            } else { // Si no lo esta, realiza lo siguiente
                cout << "\t\t" << "Ingrese la posicion del elemento que desea imprimir" << endl;
                fflush(stdin); // Limpia el buffer stdin
                do {
                    cout << "--> ";
                    if (!(cin >> num) || num > alumnos.size() || num == 0) {
                        //Si falla la entrada o el valor es mayor a los elementos de la lista o si el valor es identico a 0
                        cout << "\t\t" << "posicion invalida" << endl;
                        cin.clear(); // Limpia la entrada cin
                        cin.ignore(numeric_limits<int>::max(), '\n');
                        // Ignora todos los numeros fuera de los enteros hasta el salto de linea
                    } else {
                        num -= 1; // Se resta 1 en el valor pedido
                        itp = alumnos.begin(); // El iterador se coloca al principio de la lista
                        advance(itp, num); // El interador avanza el numero de "num" casillas
                        cout << *itp << endl; // Imprime el objeto en la posicion pedida
                        Sleep(50); // Hace una pausa de 50 milisegundos
                        break; // Rompe el ciclo do-while
                    }
                } while (true);
            }
        break;
        case 't':
            system("cls"); // Limpia la consola
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
            cout << "\t\t" << "|----------|| T) ORDENAR LISTA           ||-----------|" << endl;
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
            if (alumnos.empty()) { // si esta vacia la lista realiza esto
                cout << "\t\t" << "La lista esta vacia" << endl;
            } else { // Si no lo esta, realiza lo siguiente
                alumnos.sort(); // Ordena la lista de personas
                cout << "\t\t" << "Lista ordenada" << endl;
            }
        break;
        case 'y':
            system("cls"); // Limpia la consola
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
            cout << "\t\t" << "|----------|| Y) IMPRIMIR LISTA          ||-----------|" << endl;
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
            if (alumnos.empty()) { // si esta vacia la lista realiza esto
                cout << "\t\t" << "La lista esta vacia" << endl;
            } else {
                for (const persona& i : alumnos) { // Imprime cada persona en la lista
                    cout << i << "********************************" << endl;
                }
            }
        break;
        case 'u':
            system("cls");  // Limpia la consola
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl;
            cout << "\t\t" << "|----------|| U) VACIAR LISTA            ||-----------|" << endl;
            cout << "\t\t" << "+----------++----------------------------++-----------+" << endl << endl;
            if (alumnos.empty()) { // si esta vacia la lista realiza esto
                cout << "\t\t" << "La lista esta vacia" << endl;
            } else { // Si no lo esta, realiza lo siguiente
                alumnos.clear(); // Vacia completamente la lista
                cout << "\t\t" << "Lista vaciada" << endl;
            }
        break;
        case 'i':
            menuband = false; // Hace falsa la bandera para que termine el ciclo
            continue; // Ignora todo el codigo siguiente
        break;
        default:
            SetConsoleTextAttribute(hConsole, 12);
            // Cambia el color de solo el texto seleccionado a fondo negro y texto rojo claro
            cout << "\t\t" << "La opcion seleccionanda no se encuentra en el menú" << endl;
            cout << "\t\t" << "Intente nuevamente" << endl;
            menuband = true; //Hace verdadera la bandera para que se reinicie automaticamente el menu
            Sleep(100); // Hace una pausa de 100 milisegundos
        continue; // Ignora el todo el codigo siguiente
        }
        menuband = askretorno(); // El valor de la funcion de asigna en la bandera
    } while (menuband);
    despedida(); // Se da la despedida del programa
    return 0;
}

bool askretorno() //Funcion para repetir el menú
{
    SetConsoleTextAttribute(hConsole, 9);
    // Cambia el color de solo el texto seleccionado a fondo negro y texto azul
    char askreturn;

    cout << endl << endl;
    cout << "\t\t" << "¿Usted desea regresar al menu principal?" << endl;
    cout << "\t\t" << "Ingrese S para hacerlo" << endl;
    fflush(stdin); // Limpia el buffer del la entrada
    cout << "\t\t--> "; cin >> askreturn;
    if (toupper(askreturn)== 'S') {
        // Se compara si el caracter ingresado convertido en mayuscula es identico a S
        cout << "\t\t" << "Regresando" << endl;
        return true;
    } else {
        return false;
    }
}

int askmenu() { // Funcion para las opciones del menú
    char x;
    cout << "\t\t" << "Seleccione una opcion... ";
    SetConsoleTextAttribute(hConsole, 12);
    // Cambia el color de solo el texto seleccionado a fondo negro y texto rojo claro
    fflush(stdin);
    cin >> x;
    SetConsoleTextAttribute(hConsole, 10);
    // Cambia el color de solo el texto seleccionado a fondo negro y texto verde claro
    if (cin.fail()) {
        fflush(stdin);
        return 0;
    } else {
        SetConsoleTextAttribute(hConsole, 4);
        // Cambia el color de solo el texto seleccionado a fondo negro y texto rojo oscuro
        return x;
    }
}

void despedida() { // Funcion para terminar un programa
    SetConsoleTextAttribute(hConsole, 10);
    // Cambia el color de solo el texto seleccionado a fondo negro y texto verde claro
    cout << "\t\t" << "Gracias por usar este programa..." << endl;
    cout << "\t\t" << "Creado por Carlos Alberto lara Hernandez" << endl;
    cout << "\t\t" << "Adiosssssss...\n" << endl;
}
