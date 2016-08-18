/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author arcangel
 */
public class Ejercicio1 {
	
	public static void main(String [] args){
		
		java.util.Scanner in = new java.util.Scanner(System.in);
		
		System.out.print("Ingrese un valor: ");
		String str = in.nextLine();
		
		if (Integer.parseInt(str)<500) {
			
			Integer n = Integer.parseInt(str);
			Double p = n*0.5;
			
			System.out.println("Valor Ingresado: "+n);
			System.out.println("50%: "+p);
			System.out.println("Valor Ingresado + 50%: "+(n+p));
			
		} else if ((Integer.parseInt(str)>=500)&&(Integer.parseInt(str)<1000)){
			
			Integer n = Integer.parseInt(str);
			Double p = n*0.07;
			
			System.out.println("Valor Ingresado: "+n);
			System.out.println("7%: "+p);
			System.out.println("Valor Ingresado + 7%: "+(n+p));

		} else if ((Integer.parseInt(str)>1000)&&(Integer.parseInt(str)<=5000)){
			
			Integer n = Integer.parseInt(str);
			Double p = n*0.05;
			
			System.out.println("Valor Ingresado: "+n);
			System.out.println("5%: "+p);
			System.out.println("Valor Ingresado - 5%: "+(n-p));
			
		} else{
			System.out.println("Valor Ingresado: "+str);
			System.out.println("El valor ingresado es 1000 o no es número válido");
		}
	
		
	}

}
