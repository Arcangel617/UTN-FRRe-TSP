/**
* El siguiente programa imprime los números impares desde el 100 hasta la unidad y calcula su suma
* @author Artigue Arcangel Andres
*/
public class Ejercicio06{
	public static void main(String[] args) {
		int suma = 0;
		
		System.out.print("Impares: ");

		for (int i = 100; i >= 1 ; i-- ) {
			if ((i % 2 != 0) && i > 0) {
				suma = suma + i;
				System.out.print(i + " ");				
			}
		}

		System.out.println("\nSuma: "+suma);
	}
}