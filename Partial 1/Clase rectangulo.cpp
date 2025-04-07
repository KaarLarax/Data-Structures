#include <iostream>

using namespace std;

class rectangulo {
private:
    int base;
    int altura;

public:
    rectangulo() {
        base = 5;
        altura = 3;
    }

    rectangulo(int b, int a) {
        base = b;
        altura = a;
    }

    int perimetro() {
        return (2 * (base + altura));
    }

    int area() {
        return (base * altura);
    }

    void imprimir() {
        for (int i = 1; i <= altura; i++) {
            for (int j = 1; j <= base; j++) {
                if ((i == 1) || (i == altura) || (j == 1) || (j == base)) {
                    cout << "*";
                } else {
                    cout << " ";
                }

            }
            cout << endl;
        }
    }

    void ver_info() {
        cout << "Area: " << area() << "u2" << endl;
        cout << "Perimetro: " << perimetro() << "u" << endl;
    }
};

int main() {
    rectangulo a1, a2(10, 5);
    cout << "Rectango numero 1" << endl;
    a1.ver_info();
    cout << endl;
    a1.imprimir();
    cout << endl;
    system("Pause");
    cout << endl << "Rectangulo numero 2" << endl;
    a2.ver_info();
    cout << endl;
    a2.imprimir();

    return 0;
}
