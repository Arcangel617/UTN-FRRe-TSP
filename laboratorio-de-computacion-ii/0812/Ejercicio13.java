/**
* El siguiente programa imprime, suma y cuenta los números comprendidos
* entre el un valor ingresado por teclado hasta el 500 que están separadas entre 
* si 8 posiciones.
* 
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio13 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		int total = 0;
		int suma = 0;

		try {
			System.out.print("Ingrese un número: ");
			int nro = s.nextInt();

			if (nro > 500) {
				throw new HigherThanException("El número ingresado no puede ser mayor a 500");
			}

			for (int i = nro; i <= 500 ; i = i + 8 ) {
				suma = suma + i;
				total++;
				System.out.print(i + " ");
			}

			System.out.println("\nTotal: " + total);
			System.out.println("Suma: " + suma);

		} catch (HigherThanException e) {
			System.out.println(e.getMessage());
		}
		catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero");
		}
	}
}