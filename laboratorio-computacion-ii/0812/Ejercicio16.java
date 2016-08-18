/*
 * 16 - Imprimir, contar y sumar los múltiplos de 2 que hay entre dos números 
 * enteros positivos, tal que el segundo sea mayor o igual que el primero, los 
 * dos números deben ser ingresados vía teclado.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio16 {
    public static void main (String [] args){
       java.util.Scanner entrada = new java.util.Scanner(System.in);
       entrada.useDelimiter("\n");
       
       System.out.print("a: ");
       int a = Integer.parseInt(entrada.next());
       System.out.print("b: ");
       int b = Integer.parseInt(entrada.next());
       
        if ((a > 0) && (b > 0)) {
            if (a <= b) {
                for (int i = a; i < b; i = i*2) {
                    System.out.println(i);
                }// cierra for
                
            }else{
                System.out.println("b tiene que ser mayor que a!");
            }// cierra if-else
            
        }else{
            System.out.println("Ambos números deben ser enteros positivos!");
        }// cierra if-else
       
    }
}
