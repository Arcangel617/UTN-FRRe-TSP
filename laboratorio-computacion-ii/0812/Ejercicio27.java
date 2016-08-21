/**
*
* El siguiente programa imprime y cuenta los números que son múltiplos 
* de 2 y 3 que hay del 1 hasta el numero que se ingresa por teclado.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio27 {
	public static void main(String[] args) {
		int total = 0;
		Scanner s = new Scanner(System.in);

		try {
			System.out.print("Ingrese un número: ");
			int nro = s.nextInt();

			if (nro < 1) {
				throw new LowerThanException("El numero ingresado debe ser mayor o igual a 1");
			}

			for (int i = 1; i <= nro ; i++ ) {
				if ((i % 2 == 0) && (i % 3 == 0)) {
					total++;
					System.out.print(i + " ");			
				}
			}

			if (total == 0) {
				System.out.println("\nNo se encontraron números que sean multiplos de 2 y 3.");
			} else {
				System.out.println("\nTotal: " + total);
			}

		} catch (LowerThanException e) {
			System.out.println(e.getMessage());
		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero.");
		}
	}
}