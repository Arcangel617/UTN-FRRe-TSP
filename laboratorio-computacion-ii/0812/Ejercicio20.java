/**
 * 20-Escriba un programa que lea un el radio de la circunferencia y que imprima el 
 * diámetro, la circunferencia y su área. Utilice el valor constante 3.14159 para PI (π) 
 * o utilice la clase Math
 */

/**
 * 
 * @author arcangel
 *
 */
public class Ejercicio20 {

	public static void main (String [] args){
		
		java.util.Scanner entrada = new java.util.Scanner(System.in);
		
		double radio = 0;
		
		try{
			
			System.out.print("Ingrese radio: ");
			
			radio = entrada.nextDouble();
			
			System.out.println("Radio: "+radio);
			System.out.println("Diametro: "+(2*radio));
			System.out.println("Perimetro: "+(2*radio*Math.PI));
			System.out.println("Area: "+(Math.PI*Math.pow(radio, 2)));
			
			
		}catch (Exception e){
			
			System.out.println("Se debe ingresar un valor numerico!");
			
		}
		
		entrada.close();
		
	}
	
}
