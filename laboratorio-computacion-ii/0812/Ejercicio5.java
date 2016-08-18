/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio5 {
	
	public static void main(String [] args){
		
		java.util.Scanner in = new java.util.Scanner(System.in);
		
		System.out.print("Valor de x:");		
		int x = Integer.parseInt(in.nextLine());
		
		System.out.print("Valor de y:");		
		int y = Integer.parseInt(in.nextLine());
		
		
		int resultado = 0;
		
		for (int i = 0; i < y; i++) {
			resultado = resultado + x;
		}
		
		System.out.println(resultado);
		
	}

}

