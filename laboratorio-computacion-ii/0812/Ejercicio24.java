/**
 * 24-Hacer un programa que obtenga el producto de dos números enteros positivos mediante 
 * suma sucesivas. Los dos números ingresar vía teclado.
 */

/**
 * 
 * @author arcangel
 * 
 */

public class Ejercicio24 {

	public static void main(String[] args) {

		java.util.Scanner entrada = new java.util.Scanner(System.in);

		int suma = 0;

		try {

			System.out.print("Ingrese dos numeros: ");

			int num1 = entrada.nextInt();

			int num2 = entrada.nextInt();

			if (((num1 < 0) || (num2 < 0))) {
				
				System.out.println("Debe ingresar numeros enteros positivos!");
				
			} else if (!((num1 == 0) || (num2 == 0))) {

				suma = num1;
				
				for (int i = 1; i < num2; i++) {

					suma = suma + num2;

				}// cierra for

				System.out.println(num1 + " x " + num2 + " = " + suma);

			} else {

				System.out.println(num1 + " x " + num2 + " = " + suma);

			}// cierra if-elseif-else

		} catch (Exception e) {

			System.out.println("Debe ingresar numeros enteros positivos!");

		}// cierra try

		entrada.close();

	}

}
