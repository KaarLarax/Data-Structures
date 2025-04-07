// clase Main
// Carlos Alberto Lara Hernadez
// Numero de cuenta: 476759

import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        rectangulo r1 = new rectangulo();
        System.out.println("Rectangulo numero 1");
        r1.imprimir_rectangulo();
        System.out.println("Perimetro: " + r1.perimetro());
        System.out.println("Area: " + r1.area());
        System.out.println("Rectangulo numero 2");
        System.out.println("Ingrese el valor de la base del segundo rectangulo");
        int b = scan.nextInt();
        System.out.println("Ingrese el valor de la altura del segundo rectangulo");
        int a = scan.nextInt();
        rectangulo r2 = new rectangulo(b, a);
        r2.imprimir_rectangulo();
    }
}