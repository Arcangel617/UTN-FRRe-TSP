/**
*
* Dado un numero ingresado por teclado, el siguiente programa aplica los siguientes
* calculos: 
* - si es menor que 500, le suma el 50% 
* - si es mayor o igual a 500 pero menor que 1000, le suma el 7% 
* - si es mayor que 1000 y menor o igual a 5000, le resta el 5%
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio30 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		try {
			System.out.print("Ingrese un número: ");
			int nro = s.nextInt();

			System.out.println("Nuevo valor: " + calcular(nro));

		} catch (Exception e) {
			System.out.print("El número ingresado no es un número entero.");
		}

	}

	public static double calcular(int nro){
		if (nro < 500) {
			return nro + (nro * 0.5);
		}

		if (nro >= 500 && nro < 1000) {
			return nro + (nro * 0.07);
		}

		if (nro > 1000 && nro <= 5000) {
			return nro - (nro * 0.05);
		}

		return nro;
	}
}