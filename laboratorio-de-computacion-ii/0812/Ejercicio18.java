/**
* 
* El siguiente programa imprime y cuenta los multiplos de 3 desde el 1 hasta
* un número que se introduce por teclado.
*
* @author Artigue Arcangel Andres <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio18{
	public static void main(String[] args) {
		
		Scanner s = new Scanner(System.in);

		try {

			System.out.print("Ingrese un número: ");
			int nro = s.nextInt();
			
			if (nro < 1) {
				cuentaParaAtras(nro);
			} else if (nro > 1){
				cuentaParaAdelante(nro);
			} else {
				System.out.println("Ingrese un valor distinto de 1");
			}

		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero.");
		}
	}

	public static void cuentaParaAtras(int nro){
		int multiplos = 0;

		System.out.print("\nMúltiplos de 3: ");

		for (int i = 1; nro <= i ; i-- ) {
			if ((i % 3 == 0) && i != 0) {
				multiplos++;
				System.out.print(i + " ");
			}
		}

		System.out.println("\nTotal: "+multiplos);
	}

	public static void cuentaParaAdelante(int nro){
		int multiplos = 0;

		System.out.print("\nMúltiplos de 3: ");

		for (int i = 1; i <= nro ; i++ ) {
			if (i % 3 == 0) {
				multiplos++;
				System.out.print(i + " ");
			}
		}

		System.out.println("\nTotal: "+multiplos);
	}
}