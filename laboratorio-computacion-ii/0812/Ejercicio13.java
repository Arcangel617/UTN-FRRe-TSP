/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio13 {
    
    public static void main (String [] args){
    
        //int[] miarray = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
        int[] miarray = {1,2,3,4,5,6,7,8,9,10};
        
        if(recibeVector(miarray)){
            System.out.println("El vector ingresado posee 20 elementos");
        }else{
            System.out.println("El numero de elementos debe ser 20");
        }
        
    }
    
    public static boolean recibeVector(int[] unArray){
        if(unArray.length == 20){
            return true;
        }else{
            return false;
        }
    }
}
