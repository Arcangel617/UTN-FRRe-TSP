/**
* El siguiente programa imprime los números del 100 al 0 en orden decreciente
* @author Artigue Arcangel Andres
*/
public class Ejercicio02{
	public static void main(String[] args) {
		for (int i = 100; i >= 0;i--) {
			if ((i % 10 == 0)) {
				System.out.print("\n"+i);
			} else {
				System.out.print(" "+i);
			}
		}
	}
}