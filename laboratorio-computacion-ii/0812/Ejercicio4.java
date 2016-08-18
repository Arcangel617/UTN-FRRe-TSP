/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio4 {
    
    public static void main(String [] args){
        
        java.util.Scanner in = new java.util.Scanner(System.in);
        
        System.out.print("Calcular factorial de que número: ");
        int nro = in.nextInt();
        
        int factorial = 0;
        
        System.out.println();
        
        for (int i = nro; i >= 1; i--) {
            factorial = factorial + i;
        }
        
        System.out.println(nro+"! = "+factorial);
    }
    
}
