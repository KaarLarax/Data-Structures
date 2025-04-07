#include <iostream>

using namespace std;

class cuenta_bancaria {
private:
    string nombre;
    int num_cta;
    float saldo;
public:
    cuenta_bancaria() {
        cout << "Numero de cuenta: ";
        cin >> num_cta;
        cout << endl << "Nombre: ";
        cin.ignore();
        getline(cin, nombre);
        saldo = 0;
    }
    void deposito(float cantidad) {
        saldo += cantidad;
        cout << "Deposito de: " << saldo << endl << endl;
        cout << "DEPOSITO COMPLETADO" << endl;
    }
    void retiro(float cantidad) {
        if (saldo >= cantidad) {
            saldo -= cantidad;
            cout << "Retiro realizado" << endl;
        } else
            cout << "Saldo insuficiente" << endl;
    }
    void consultar_datos() {
        cout << "CONSULTA DE DATOS" << endl << endl;
        cout << "Numero de Cuenta: " << num_cta << endl;
        cout << "Nombre: " << nombre << endl;
        cout << "Saldo: " << saldo << endl;

    }
};

int main() {
    cuenta_bancaria kaarl_476759;
    cout << endl;
    kaarl_476759.deposito(1000);
    cout << endl;
    kaarl_476759.retiro(300);
    cout << endl;
    kaarl_476759.consultar_datos();
    return 0;
}
