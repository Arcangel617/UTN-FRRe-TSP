/**
*
* El siguiente programa determina si un numero ingresado por teclado
* es positivo o negativo.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio16 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		
		try {
			System.out.print("Ingrese un número: ");
			int nro = s.nextInt();

			if (nro < 0) {
				System.out.println("El número es negativo");
			} else if (nro > 0) {
				System.out.println("El número es positivo");
			} else {
				System.out.println("El número es cero");
			}
		} catch (Exception e) {
			System.out.println("El valor ingresado no es un numero entero");
		}
	}
}