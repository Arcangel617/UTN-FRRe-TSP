/**
 * 22-Escriba un programa que calcule los cuadrados y los cubos de los números del 1 al 10, 
 * imprimiendolos en la siguiente forma Numero cuadrado cubo
 */

/**
 * 
 * @author arcangel
 *
 */


public class Ejercicio22 {
	
	public static void main (String [] args){
		
		for (int i = 1; i < 11; i++) {
			
			System.out.println(i+" "+Math.pow(i, 2)+" "+Math.pow(i, 3));
			
		}
		
	}

}
