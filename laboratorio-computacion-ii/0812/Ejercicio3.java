/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio3 {
	
	public static void main(String [] args){
		
		java.util.Scanner in = new java.util.Scanner(System.in);
		
		System.out.print("A: ");
		Integer a = Integer.parseInt(in.nextLine());
		
		System.out.print("B: ");
		Integer b = Integer.parseInt(in.nextLine());
		
		if (a <= b){
			int suma = 0;
			int cant = 0;
			
			System.out.println("Numeros pares entre "+a+" y "+b+":");
						
			for (int i = a; i <= b; i++) {
				if(i%2==0){
					System.out.println(i);
					suma = suma + i;
					cant++;
				}
			}
			
			System.out.println("Cantidad: "+cant);
			System.out.println("Suma: "+suma);
			
		}else{
			System.out.println("A tiene que ser menor o igual que B!");
		}
		
		
		
	}

}
