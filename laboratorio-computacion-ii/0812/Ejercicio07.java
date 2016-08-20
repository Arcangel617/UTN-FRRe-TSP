/**
* El siguiente programa imprime todos los números naturales que hay desde la unidad 
* hasta un número introducido por teclado.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio07 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		System.out.print("Ingrese un numero: ");
		
		try {

			int nro = s.nextInt();
			if (nro < 1) {
				throw new MenoraUnoException("No hay números naturales en el intervalo ("+ nro +";1)");
			}

			for (int i = 1; i <= nro ; i++) {
				System.out.print(i + " ");
			}

		} catch (MenoraUnoException e) {
			System.out.println(e.getMessage());
		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero");
		}

		System.out.println();
	}
}