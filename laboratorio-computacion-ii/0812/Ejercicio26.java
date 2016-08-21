/**
*
* Imprimir y sumar los números desde el cero hasta un número determinado, 
* excepto los múltiplos de 5 imprimir el valor de la suma de los múltiplos de 5.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio26 {
	public static void main(String[] args) {
		int nro = 0;
		
		Scanner s = new Scanner(System.in);

		try {
			System.out.print("Ingrese un número: ");
			nro = s.nextInt();

			if (nro != 0) {
				if (nro < 0) {
					calculoEnterosNegativos(nro);
				} else {
					calculoEnterosPositivos(nro);
				}
			} else {
				throw new EqualToException("El numero ingresado no puede ser igual a cero.");
			}

		} catch (EqualToException e) {
			System.out.println(e.getMessage());
		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero.");
		}

	}

	public static void calculoEnterosNegativos(int nro){
		int suma = 0;
		int sumaMultiplosCinco = 0;

		for (int i = 0; nro <= i ; i--) {
			if (!(i % 5 == 0)) {
				suma = suma + i;
				System.out.print(i + " ");
			} else {
				sumaMultiplosCinco = sumaMultiplosCinco + i;
			}
		}

		System.out.println("\nSumatoria: " + suma);
		System.out.println("Suma múltiplos de cinco: " + sumaMultiplosCinco);
	}

	public static void calculoEnterosPositivos(int nro){
		int suma = 0;
		int sumaMultiplosCinco = 0;

		for (int i = 0; i <= nro ; i++) {
			if (!(i % 5 == 0)) {
				suma = suma + i;
				System.out.print(i + " ");
			} else {
				sumaMultiplosCinco = sumaMultiplosCinco + i;
			}
		}

		System.out.println("\nSumatoria: " + suma);
		System.out.println("Suma múltiplos de cinco: " + sumaMultiplosCinco);
	}
}