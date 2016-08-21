/**
* Hacer un programa que imprima los números del 1 al 100 .
* que calcule la suma de todos los números pares por un lado y otro la de todos los impares.
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
public class Ejercicio19 {
	public static void main(String[] args) {
		int pares = 0;
		int impares = 0;

		for (int i = 1; i <= 100 ; i++ ) {
			if (i % 2 == 0) {
				pares = pares + i;
			} else {
				impares = impares + i;
			}
		}

		System.out.println("Suma impares: " + impares);
		System.out.println("Suma pares: " + pares);
	}
}