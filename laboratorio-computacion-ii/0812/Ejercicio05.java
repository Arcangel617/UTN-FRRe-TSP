/**
* El siguiente programa imprime los números impares hasta el 100 y muestra cuantos impares hay
* @author Artigue Arcangel Andres
*/
public class Ejercicio05{
	public static void main(String[] args) {
		int impares = 0;
		
		System.out.print("Impares: ");

		for (int i = 0; i <= 100 ; i++ ) {
			if ((i % 2 != 0) && i > 0) {
				impares++;
				System.out.print(i + " ");
			}
		}
		System.out.println("\nTotal: "+impares);
	}
}