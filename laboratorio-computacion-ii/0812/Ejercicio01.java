/**
* El siguiente programa imprime los números del 0 al 100
* @author Artigue Arcangel Andres
*/
public class Ejercicio01 {
	public static void main(String[] args) {
		for (int i = 0; i <= 100 ;i++) {
			if ((i % 10 == 0) && i > 0) {
				System.out.print(i+"\n");
			} else {
				System.out.print(i+" ");
			}
		}
	}
}