/**
*
* El siguiente programa imprime y cuenta los múltiplos de 3 que hay entre 1 y 100
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
public class Ejercicio08{
	public static void main(String[] args) {
		int multiplos = 0;
		
		System.out.print("Multiplos de 3: ");

		for (int i = 1; i <= 100 ; i++ ) {
			if (i % 3 == 0) {
				multiplos++;
				System.out.print(i + " ");
			}
		}
		System.out.println("\nTotal: "+multiplos);
	}
}