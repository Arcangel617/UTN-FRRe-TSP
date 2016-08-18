/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio7 {
	
	public static void main(String [] args){
		
		java.util.Scanner in = new java.util.Scanner(System.in);
		
		System.out.print("a: "); double a = in.nextDouble();
		System.out.print("b: "); double b = in.nextDouble();
		System.out.print("c: "); double c = in.nextDouble();
		
		double radicando = Math.pow(b, 2)-4*a*c;
		
		if (radicando < 0){
			double x1 = -b + Math.sqrt(-radicando);
			double x2 = -b - Math.sqrt(-radicando);
			
			System.out.println("x1 = "+x1+"i");
			System.out.println("x2 = "+x2+"i");
		}else{
			double x1 = -b + Math.sqrt(radicando);
			double x2 = -b - Math.sqrt(radicando);
			
			System.out.println("x1 = "+x1);
			System.out.println("x2 = "+x2);
		}
		
	}	

}
