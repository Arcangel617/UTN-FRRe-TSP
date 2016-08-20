/**
*
* El siguiente programa calcula la suma de los números impares comprendidos entre el 0 y 100
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
public class Ejercicio09{
	public static void main(String[] args) {
		
		int suma = 0;
		for (int i = 1; i < 100 ; i++) {			
			if ((i % 2 != 0)) {
				suma = suma + i;
			}
		}

		System.out.println("Suma: " + suma);
	}
}