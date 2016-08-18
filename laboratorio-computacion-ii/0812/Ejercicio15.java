/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio15 {
    public static void main(String [] args){
        java.util.Scanner entrada = new java.util.Scanner(System.in);
        
        // ingresamos por teclado los datos
        System.out.print("Valor de a: ");
        int a = entrada.nextInt();
        System.out.print("Valor de b: ");
        int b = entrada.nextInt();
        
        int pares = 0;
        int sumaImpares = 0;
        
        // se verifica que los numeros ingresados cumplan con la primer condicion
        if (a < b) {
            for (int i = a; i < b; i=i+7) {
                // mostramos en pantalla los numeros separados por 7 unidades
                System.out.print(i+" ");
                if (i % 2 == 0) {
                    // si el numero es par, se lo cuenta
                    pares++;
                }else{
                    // si el numero es impar, se suma
                    sumaImpares=sumaImpares+i;                
                }
            }// fin for
            
            // mostramos los resultados
            System.out.println("Cantidad de numeros pares: "+pares);
            System.out.println("Suma de numeros impares: "+sumaImpares);
            
        } else {
            System.out.println("El segundo valor ingresado debe ser mayor que el primero");
        }// fin if   
        
        
    }// fin main
    
}// fin class
