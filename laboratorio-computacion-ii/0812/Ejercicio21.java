/**
 * 21-Escriba un programa que lea dos enteros y que determine e imprima 
 * si el primero es multiplo del segundo
 */

/**
 * 
 * @author arcangel
 * 
 */
public class Ejercicio21 {

	public static void main(String[] args) {

		java.util.Scanner entrada = new java.util.Scanner(System.in);

		try {

			System.out.print("Ingrese dos numeros: ");

			int num1 = entrada.nextInt();

			int num2 = entrada.nextInt();

			// se verifica si el primer numero es multiplo del segundo

			if ((num1 % num2) == 0) {

				System.out.println(num1 + " es multiplo de " + num2);

			} else {

				System.out.println(num1 + " no es multiplo de " + num2);

			}

		}catch (java.lang.ArithmeticException AE){
			
			// se trata la excepcion cuando el segundo numero que se ingresa es igual a 0
			
			System.out.println("El segundo termino no puede ser 0");
			
		}catch (Exception e) {

			// se trata la exepcion cuando el/los valores que se ingresen no son numeros enteros
			
			System.out.println("Debe ingresar un número entero");

		}
		
		entrada.close();

	}

}
