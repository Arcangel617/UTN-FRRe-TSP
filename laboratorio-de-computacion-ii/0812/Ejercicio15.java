/**
*
* El siguiente programa imprime la suma de los cuadrados de los números 
* comprendido entre un valor ingresado por teclado y 100 que están separados 
* entre sí 4 posiciones.
* 
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio15 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int suma = 0;

		try {
			System.out.print("Ingrese un número: ");
			int nro = s.nextInt();

			if (nro > 100) {
				throw new HigherThanException("El número ingresado no puede ser mayor a 100");
			}

			for (int i = nro; i < 100 ; i = i + 4 ) {
				suma = suma + i*i;
			}

			System.out.println("Suma: " + suma);

		} catch (HigherThanException e) {
			System.out.println(e.getMessage());
		}
		catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero");
		}
	}
}