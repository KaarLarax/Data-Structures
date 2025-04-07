
import java.util.Scanner;

class cuenta_bancaria {
    String nombre;
    int numero_cuenta;
    float saldo;
    public cuenta_bancaria(){
        System.out.println("Nombre: ");
        Scanner scan = new Scanner(System.in);
        nombre = scan.nextLine();
        System.out.println("Numero de cuenta: ");
        numero_cuenta = scan.nextInt();
        saldo = 0;
    }
    public void depositar(float cantidad) {
        saldo = saldo + cantidad;
        System.out.println("Deposito realizado de: " + cantidad + "$");
        System.out.println("Saldo: " + saldo);
    }

    public void retirar(float cantidad) {
        saldo = saldo - cantidad;
        System.out.println("Retiro realizado de: " + cantidad + "$");
        System.out.println("Saldo: " + saldo);
    }

    public void ver_datos () {
        System.out.println("Nombre: " + nombre);
        System.out.println("Numero de cuenta: " + numero_cuenta);
        System.out.println("Saldo: " + saldo + "$");
    }

}
public class Main {
    public static void main(String[] args) {
        cuenta_bancaria x = new cuenta_bancaria();
        x.depositar(100);
        x.retirar(50);
        x.ver_datos();
    }
}
