/**
* El siguiente programa imprime las sumas de los 100 primeros números enteros
* @author Artigue Arcangel Andres
*/
public class Ejercicio03{
	public static void main(String[] args) {
		int suma = 0;

		for (int i = 0;i < 100 ;i++ ) {
			suma = suma + i;
		}

		System.out.println("Suma: " + suma);
	}
}