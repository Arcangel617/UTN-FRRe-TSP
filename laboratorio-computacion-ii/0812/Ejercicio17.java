/**
*
* El siguiente programa determina si un numero ingresado por teclado
* es par o impar.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio17 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		try {
			System.out.print("Ingrese un número: ");
			int nro = s.nextInt();

			if (nro != 0) {
				if (nro % 2 == 0) {
					System.out.println("El número es par");
				} else {
					System.out.println("El número es impar");
				}
			} else {
				System.out.println("El número es cero");
			}

		} catch (Exception e) {
			System.out.println("El valor ingresado no es un numero entero");
		}
	}
}