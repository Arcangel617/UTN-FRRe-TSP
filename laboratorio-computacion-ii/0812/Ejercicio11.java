/**
*
* El siguiente programa imprime, cuenta y suma los multiplos de 2 hasta
* un número que se introduce por teclado.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio11{
	public static void main(String[] args) {
		int multiplos = 0;
		int suma = 0;
		Scanner s = new Scanner(System.in);

		try {

			System.out.print("Ingrese un número: ");
			int nro = s.nextInt();

			if (nro < 1) {
				throw new LowerThanException("El número ingresado no es un entero positivo");
			}
			
			System.out.print("\nMúltiplos de 2: ");

			for (int i = 1; i <= nro ; i++ ) {
				if (i % 2 == 0) {
					multiplos++;
					suma = suma + i;
					System.out.print(i + " ");
				}
			}
			System.out.println("\nTotal: "+multiplos);
			System.out.println("Suma: "+suma);

		} catch (LowerThanException e) {
			System.out.println(e.getMessage());
		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero.");
		}
	}
}