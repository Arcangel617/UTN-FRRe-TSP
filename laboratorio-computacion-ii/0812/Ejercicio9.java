/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio9 {
    public static void main (String [] args){
        java.util.Scanner entrada = new java.util.Scanner(System.in);
        
        entrada.useDelimiter("\n");
        
        int primerElemento = 0;
        int diferencia = 0;
        int n = 0;
        int suma = 0;
        
        System.out.print("Primer elemento: ");
        primerElemento = Integer.parseInt(entrada.next());
        System.out.print("Diferencia: ");
        diferencia = Integer.parseInt(entrada.next());
        System.out.print("Cantidad de numeros a sumar: ");
        n = Integer.parseInt(entrada.next());
        
        //se muestra en pantalla la progresion numérica creada y la suma de los n numeros
        int cantidad = 0;
        int nro = primerElemento;
        
        while(cantidad < n){
            System.out.print(nro+" ");
            suma = suma + nro;
            nro = nro + diferencia;
            cantidad++;            
        }
        
        System.out.println();
        System.out.println("La suma de los "+n+" primeros números de la progresion es: "+suma);
        
        
    }// cierra main
    
}// cierra class
