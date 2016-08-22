/**
*
* El siguiente programa imprime los siguientes 20 números 
* de la serie fibonacci a partir de un valor que se ingresa
* por teclado.
* 
* Nota: El ejercicio solicitaba los siguientes 100 números pero
* consideré innecesario mostrar tantos números dado que al ser
* una sucesión infita, dependiendo del valor que se introduzca por
* teclado, los números a mostrar pueden ser demasiado grandes y 
* dificultaria la lectura por consola. Además por la forma en que
* encaré el ejercicio si los números a mostrar son muy grandes
* se pierde precision en los cáculos.
*
* @auhtor Artigue Arcángel Andrés <artigue_arcangel@hotmail.com>
*
*/
import java.util.Scanner;

public class Ejercicio31 {
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);

		/* 
		* La relación de recurrencia de la serie o sucesión de Fibonacci
		* está dada por la siguiente ecuación:
		*
		* f(n) = f(n-1) + f(n-2), donde (n),(n-1) y (n-2) son subindices
		*
		*/

		/*
		* Primero es necesario hallar las raices del polinomio asociado
		* a la relación de recurrencia
		*/

		int a = 1;
		int b = -1;
		int c = -1;

		double radicando = Math.pow(b,2)-4*a*c;

		double x1 = (-b + Math.sqrt(radicando)) / (2*a);
		double x2 = (-b - Math.sqrt(radicando)) / (2*a);

		/* 
		* A partir de las raices del polinomio asociado, se obtiene un sistema
		* de ecuaciones para hallar los valores de los coeficientes alpha y beta:
		*
		*  / alpha - beta = 0
		*
		*  \ alpha(x1) - beta(x2) = 1 
		*/

		/*
		* Del sistema de ecuaciones se obtiene que los coeficientes alpha y beta 
		* son iguales, por lo tanto:
		*/

		double coef = -1 / (x2 - x1);

		/*
		* Tienendo los coeficientes y las raices del polinomio asociado, se 
		* se puede obtener la ecuación de recurrencia para hallar cualquier
		* término de la suceción:
		*/

		try {

			System.out.print("Ingrese un término de la suceción: ");
			int termino = s.nextInt();

			if (termino < 2) {
				throw new LowerThanException("El valor ingresado debe ser mayor o igual a 2");
			}

			System.out.println();

			for (int i = termino; i <= (termino+20) ; i++ ) {
				System.out.println("f("+ i + ") = " + Math.round(fibo(i,x1,x2,coef)));
			}

			System.out.println();

		} catch (LowerThanException e) {
			System.out.println(e.getMessage());
		} catch (Exception e) {
			System.out.println("El valor ingresado no es un número entero");
		}
	}

	public static double fibo(int termino, double x1, double x2, double coef){
		double f = (coef * Math.pow(x1,termino)) - (coef * Math.pow(x2,termino));
		return f;
	}
}