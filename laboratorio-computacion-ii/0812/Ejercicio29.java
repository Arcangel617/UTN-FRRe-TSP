/**
*
* Dados dos números ingresados por teclado, el siguiente programa imprime, comenzando 
* por el más pequeño, los números de 7 en 7, cuenta cuantos hay, cuenta cuantos de 
* ellos son pares y calcula la suma de los impares.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio29 {
	public static void main(String[] args) {
		int total = 0;
		int pares = 0;
		int sumaImpares = 0;
		Scanner s = new Scanner(System.in);

		try {
			System.out.print("Ingrese un número: ");
			int nro1  = s.nextInt();

			System.out.print("Ingrese otro número: ");
			int nro2  = s.nextInt();

			int men = menor(nro1,nro2);
			int may = mayor(nro1,nro2);

			if (men - may == 0) {
				throw new EqualToException("Los numeros ingresados no pueden ser iguales");
			}

			for (int i = men; i < may ; i = i + 7 ) {
				total++;
				if (i % 2 == 0) {
					pares++;
				} else {
					sumaImpares = sumaImpares + i;
				}
				System.out.print(i + " ");
			}

			System.out.println("\nTotal: " + total);
			System.out.println("Pares: " + pares);
			System.out.println("Suma Impares: " + sumaImpares);

		} catch (EqualToException e) {
			System.out.println(e.getMessage());

		} catch (Exception e) {
			System.out.println("El valor ingresado no es número entero");
		}
	}

	public static int menor(int nro1, int nro2){
		if (nro1 < nro2) {
			return nro1;
		}
		return nro2;
	}

	public static int mayor(int nro1, int nro2){
		if (nro1 > nro2) {
			return nro1;
		}
		return nro2;
	}
}