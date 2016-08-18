/**
* 6. Hacer un programa que imprima los números impares desde el 100 hasta la unidad y que calcule su suma
* @author Artigue Arcangel Andres
*/
public class Ejercicio06{
	public static void main(String[] args) {
		int suma = 0;
		for (int i = 100; i >= 1 ; i-- ) {
			if ((i % 2 != 0) && i > 0) {
				// System.out.println(suma + " + " +i);
				suma = suma + i;
				System.out.println(i);
			}
		}
		System.out.println("Suma: "+suma);
	}
}