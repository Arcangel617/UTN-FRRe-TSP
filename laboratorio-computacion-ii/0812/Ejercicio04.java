/**
* El siguiente programa imprime los números pares entre el 0 al 100
* @author Artigue Arcangel Andres
*/
public class Ejercicio04{
	public static void main(String[] args) {
		
		for (int i = 0; i < 100 ; i++) {
			if ((i % 2 == 0) && i > 0) {
				System.out.println(i);
			}
		}
	}
}