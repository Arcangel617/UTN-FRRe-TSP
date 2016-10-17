#include <stdio.h>

int main() {
	
	/* Escribe los numeros del 1 al 10 */
	int numero, pares;
	
	for (numero = 20; numero > 0;numero--)
	{
		if (numero % 2 == 0)
		{
			printf("%d\n",numero);
			pares++;
		}
	}
	
	printf ("Condicion de salida %d\n",numero);
	printf ("Cant. pares: %d", pares);
	return 0;
}

