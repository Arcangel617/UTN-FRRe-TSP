/**
*
* El siguiente programa imprime los números del 0 al 100
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
public class Ejercicio01 {
	public static void main(String[] args) {
		for (int i = 0; i <= 100 ;i++) {
			if (i == 49) {
				System.out.println(i);
			} else {
				System.out.print(i+" ");
			}
		}

		System.out.println();
	}
}