/*
 * 17 - Hacer un algoritmo que calcule independientemente las sumas de impares 
 * de los números entre el 1 y el 1000.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio17 {
    public static void main(String [] args){
        
        int sumaImpares = 0;
        
        for (int i = 1; i < 1000; i++) {
            if((i % 2) != 0){
                sumaImpares = sumaImpares + i;
            }// cierra if
            
        }// cierra for
        System.out.println("Suma de impares: "+sumaImpares);
        
    }
    
}
