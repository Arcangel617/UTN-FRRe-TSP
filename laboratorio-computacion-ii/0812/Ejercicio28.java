/**
*
* Dada una serie de numeros ingresada por teclado, el siguiente 
* programa suma los multiplos de 5 y determina el mayor y el menor 
* de los numeros ingresados.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;
import java.util.ArrayList;
import java.util.Collections;

public class Ejercicio28 {
	public static void main(String[] args) {
		ArrayList <Integer> al = new ArrayList <Integer> ();
		Scanner s = new Scanner(System.in);
		String salida = "";
		int suma = 0;

		try {
			while (!salida.equalsIgnoreCase("n")) {
				System.out.print("Ingrese un numero: ");			
				al.add(s.nextInt());
				System.out.print("Continuar? [s/n]: ");
				salida = s.next();
			}

			Collections.sort(al);

			for (Integer val : al) {
				if (val % 5 == 0) {
					suma = suma + val;
				}
			}

			System.out.println("Suma: " + suma);
			System.out.println("Mayor: " + al.get(al.size()-1));
			System.out.println("Menor: " + al.get(0));

			
		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero");
		}
	}
}