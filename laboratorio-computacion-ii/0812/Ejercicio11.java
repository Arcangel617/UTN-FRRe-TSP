/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio11 {
    public static void main(String [] args){
        java.util.Scanner entrada = new java.util.Scanner(System.in);
        entrada.useDelimiter("\n");
        
        int nro = 0;
        java.util.ArrayList <Integer> nrosPrimos = new java.util.ArrayList ();
        int dividendo = 0;
        int divisor = 2;
        
        System.out.print("Ingrese un numero: ");
        nro = Integer.parseInt(entrada.next());
        
        dividendo = nro;
        
        while(dividendo != 1){
            if((dividendo % divisor) == 0){
                dividendo = dividendo / divisor;
                nrosPrimos.add(divisor);
            }else{
                divisor++;
            }
        }
        
        System.out.println("El menor numero primo de "+nro+" es: "+nrosPrimos.get(0));
        
        
    }
}
