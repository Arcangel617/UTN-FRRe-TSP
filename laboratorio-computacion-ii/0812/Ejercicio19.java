/*
 * 19 - Escriba un programa que permite ingresar 3 números enteros diferentes 
 * por teclado, y a continuación imprima la suma, la media aritmética, el 
 * menor, el mayor de estos números.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio19 {

    public static void main(String[] args) {
        java.util.Scanner entrada = new java.util.Scanner(System.in);
        //entrada.useDelimiter("\n");

        int a = 0;
        int b = 0;
        int c = 0;

        System.out.print("Ingrese tres numeros: ");
        a = entrada.nextInt();
        b = entrada.nextInt();
        c = entrada.nextInt();
        
        int suma = a+b+c;
        int menor = 999999;
        int mayor = 0;

        System.out.println("Suma: "+suma);
        System.out.println("Media aritmética: "+(suma/3));
        
        if ((a < b) && (b < c)) {
            menor = a;
            mayor = c;
        } else if ((b < a)){
            
        }else{
            System.out.println("Los tres numeros son iguales!");
        }

    }// cierra main

}// cierra class
