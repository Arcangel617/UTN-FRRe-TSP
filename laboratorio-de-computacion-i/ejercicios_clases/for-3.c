#include <stdio.h>

int main() {
	
	/* Escribe los numeros del 1 al 10 */
	int numero, suma, impares;
	float promedio;
	
	suma = 0;
	
	
	for (numero=0;numero < 10;numero++)
	{
		if (numero % 2 != 0)
		{
			printf("%d\n",numero);
			impares++;
		}
		
		suma = suma + numero;
	}
	
	promedio = suma / numero;
	
	printf ("Condicion de salida %d\n",numero);
	printf ("Cant. Impares: %d\n", impares);
	printf ("Suma de todos: %d\n",suma);	
	printf ("Promedio: %f\n",promedio);
	
	return 0;
}

