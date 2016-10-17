/**
*
* El siguiente programa imprime y cuenta los números que son múltiplos 
* de 2 o 3 que hay del 1 al 100.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
public class Ejercicio20 {
	public static void main(String[] args) {
		int total = 0;

		for (int i = 1; i <= 100 ; i++ ) {
			if ((i % 2 == 0) || (i % 3 == 0)) {
				total++;
				System.out.print(i + " ");			
			}
		}

		System.out.println("\nTotal: " + total);
	}
}