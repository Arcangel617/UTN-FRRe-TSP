/**
 * 23-Hacer un programa que lea un vector de 20 elementos enteros. Desplace cíclicamente en 
 * una unidad a la derecha
 */

/**
 * 
 * @author gangster
 * 
 */

public class Ejercicio23 {

	public static void main(String[] args) {

		java.util.ArrayList<Integer> arrayEnteros = new java.util.ArrayList<Integer>();

		java.util.Scanner entrada = new java.util.Scanner(System.in);

		int valor = 0;

		try {

			while (arrayEnteros.size() < 20) {

				System.out.print("ingrese un numero entero: ");

				valor = entrada.nextInt();

				arrayEnteros.add(0, valor);

				for (Integer elemento : arrayEnteros) {

					System.out.print(elemento + " ");

				}

				System.out.println();

			}

		} catch (Exception e) {

			System.out.println(e);

		}// cierra try

	}// cierra main
}
