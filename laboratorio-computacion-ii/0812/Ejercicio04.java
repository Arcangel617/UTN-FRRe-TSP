/**
*
* El siguiente programa imprime los números pares entre el 0 al 100
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
public class Ejercicio04{
	public static void main(String[] args) {
		
		System.out.print("Pares: ");

		for (int i = 1; i < 100 ; i++) {
			if ((i % 2 == 0)) {
				System.out.print(i + " ");
			}
		}

		System.out.println();
	}
}