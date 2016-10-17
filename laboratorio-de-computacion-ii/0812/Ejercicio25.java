/**
*
* El siguiente programa permite al usuario ingresar tantos numeros como
* desee entre 1 y 100 devolviendo como resultado un lista con los numeros 
* ingresados sin tener en cuenta los multiplos de 2.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;
import java.util.ArrayList;

public class Ejercicio25 {
	public static void main(String[] args) {
		
		ArrayList <Integer> al = new ArrayList <Integer> ();
		String salida = " ";
		int nro = 0;

		Scanner s = new Scanner(System.in);

		try {
			while (!(salida.equalsIgnoreCase("n"))) {
				System.out.print("Ingrese numero: ");
				nro = s.nextInt();
				if ((nro >= 1) && (nro <= 100)) {
					if (!(nro % 2 == 0)) {
						al.add(nro);
					}
				} else {
					System.out.println("El numero ingresado debe estar comprendido entre 1 y 100");
				}
				System.out.print("Continuar ingresando? [s/n]: ");
				salida = s.next();
			}

			if (al.isEmpty()) {
				System.out.println("Los números ingresados eran múltiplos de 2 o no se ingresaron números");
			} else {
				System.out.println(al);
			}

		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero");
		}
	}
}