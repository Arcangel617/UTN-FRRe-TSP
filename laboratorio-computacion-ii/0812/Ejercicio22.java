/**
*
* El siguiente programa imprime el mayor y el menor de una serie de 
* cinco números que se introduce por teclado.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio22 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		int mayor = Integer.MIN_VALUE;
		int menor = Integer.MAX_VALUE;
		int nro = 0;

		try {
			System.out.println("Ingrese 5 numeros: ");
	
			for (int i = 0; i < 5 ; i++) {
				nro = s.nextInt();

				if (nro < menor) {
					menor = nro;
				}

				if (nro > mayor) {
					mayor = nro;
				}
			}

			System.out.println("Mayor: " + mayor);
			System.out.println("Menor: " + menor);
		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero");
		}
	}
}