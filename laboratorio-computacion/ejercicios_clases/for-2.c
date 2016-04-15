#include <stdio.h>

int main() {
	
	/* Escribe los numeros del 1 al 10 */
	int numero, suma;
	float promedio;
	
	
	for (numero=0;numero <10;numero++)
	{
		printf("%d\n",numero);
		suma = suma + numero;
	}
	
	promedio = suma / numero;
	
	printf ("Condicion de salida %d\n",numero);
	printf ("Suma: %d",suma);
	
	printf ("Proemdio %f:",promedio);
	return 0;
}

