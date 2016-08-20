/**
*
* El siguiente programa imprime y cuenta los múltiplos de 5 que hay entre 1 y 500
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
public class Ejercicio10{
	public static void main(String[] args) {
		int multiplos = 0;
		
		System.out.print("Multiplos de 5: ");

		for (int i = 1; i <= 500 ; i++ ) {
			if (i % 5 == 0) {
				multiplos++;
				System.out.print(i + " ");
			}
		}
		System.out.println("\nTotal: "+multiplos);
	}
}