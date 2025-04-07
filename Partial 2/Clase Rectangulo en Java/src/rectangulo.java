// Clase rectangulo
// Carlos Alberto Lara Hernadez
// Numero de cuenta: 476759

public class rectangulo {
    private final float base;
    private final float altura;
    rectangulo () { base = 3; altura = 3;}
    rectangulo (float b, float a) { base = b; altura = a;}
    public void imprimir_rectangulo () {
        for (int i=1; i<=altura; i++) {
            for (int j = 1; j <= base; j++) {
                if ((i == 1) || (i == altura) || (j == 1) || (j == base)) {
                    System.out.print("*");
                } else {
                    System.out.print(" ");
                }
            }
            System.out.print("\n");
        }
    }
    public float perimetro () { return 2 * (base + altura);}
    public float area () {return base * altura;}
}