/**
* El siguiente programa calcula la suma de los cuadrados de los 
* números pares entre el 0 y el 100.
* 
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
public class Ejercicio14 {
	public static void main(String[] args) {
		int suma = 0;

		for (int i = 1; i < 100 ; i++) {
			if (i % 2 == 0) {
				suma = suma + i*i;
			}
		}

		System.out.println("Suma: " + suma);
	}
}