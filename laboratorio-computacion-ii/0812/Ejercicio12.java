/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio12 {
    
    public static void main (String [] args){
        
        java.util.Scanner entrada = new java.util.Scanner(System.in);
        entrada.useDelimiter("\n");
        
        
        
        System.out.print("Ingrese un número entero: ");
        int nro = Integer.parseInt(entrada.next());
        
        int dividendo = nro;
        String equivalente = " ";
        
        while(dividendo >= 2){
            if(dividendo == 2){
                equivalente = equivalente + (dividendo % 2) + (dividendo / 2);
                dividendo = dividendo / 2;
            }else if (dividendo == 3){
                equivalente = equivalente + (dividendo % 2) + (dividendo / 2);
                dividendo = dividendo / 2;
            }else{
                equivalente = equivalente + (dividendo % 2);
                dividendo = dividendo / 2;
            }
            
        }
        
        java.lang.StringBuilder invertirOrden = new java.lang.StringBuilder(equivalente);
        
        System.out.println(nro+" = "+invertirOrden.reverse().toString());
        
        
        
        
    }
    
}
