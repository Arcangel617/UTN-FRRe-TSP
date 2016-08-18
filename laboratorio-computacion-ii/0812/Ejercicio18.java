/*
 * 18 - Escriba un programa que solicite al usuario que ingrese vía teclado dos 
 * números enteros, tome los dos numero de usuario, e imprima las suma, el 
 * producto, la diferencia, el cociente y el restos de los dos números.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio18 {
    public static void main (String [] args){
        java.util.Scanner entrada = new java.util.Scanner(System.in);
        entrada.useDelimiter("\n");
        
        int a = 0;
        int b = 0;
        
        try {

            System.out.print("a: ");
            a = Integer.parseInt(entrada.next());
            System.out.print("b: ");
            b = Integer.parseInt(entrada.next());
            System.out.println("Suma: " + (a + b));
            System.out.println("Resta: " + (a - b));
            System.out.println("Producto: " + (a * b));
            System.out.println("Resto: " + (a % b));
            System.out.println("Cociente: " + (a / b));

        } catch (java.lang.NumberFormatException NFE) {
            System.out.println("Ambos numeros deben ser enteros!");
        } catch (java.lang.ArithmeticException AE) {
            System.out.println("Se produjo otra excepcion!");
        }
        
        
        
        
    }
}
