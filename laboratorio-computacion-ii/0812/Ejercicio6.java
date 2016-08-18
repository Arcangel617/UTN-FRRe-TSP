/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio6 {
    public static void main(String [] args){
        java.util.Scanner entrada = new java.util.Scanner(System.in);
        
        System.out.print("Ingrese Dividendo: ");
        int dividendo = entrada.nextInt();
        System.out.print("Ingrese Divisor: ");
        int divisor = entrada.nextInt();
        
        int cociente = 0;
        int resto = dividendo;
        
        while (resto >= divisor) {            
            resto = resto - divisor;
            cociente++;
        }
        
        System.out.println("Dividendo: "+dividendo);
        System.out.println("Divisor: "+divisor);
        System.out.println("===================");
        System.out.println("Cociente: "+cociente);
        System.out.println("Resto: "+resto);
    }
}
