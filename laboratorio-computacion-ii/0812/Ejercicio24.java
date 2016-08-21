/**
*
* Introducir una serie de números. Decir si esos números son mayores o menores de 10.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio24 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		try {
			System.out.print("Cantidad de números a ingresar: ");
			int cant = s.nextInt();

			int nro = 0;

			for (int i = 0; i < cant ; i++ ) {
				System.out.print(">> ");
				nro = s.nextInt();
				if (nro != 10) {
					if (nro < 10) {
						System.out.println("es menor a 10");
					} else {
						System.out.println("es mayor a 10");
					}
				} else {
					System.out.println("Son iguales!");
				}
			}
		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero");
		}
	}
}