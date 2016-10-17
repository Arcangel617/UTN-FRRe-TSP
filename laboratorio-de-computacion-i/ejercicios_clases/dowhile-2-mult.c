#include <stdio.h>

int main() {
	
	/* Escribe los numeros del 1 al 10*/
	int numero = 1;
	int res, multiplicador;
	
	printf ("Ingrese un numero:");
	scanf ("%d", &multiplicador);
	
	do
	{
		res = numero * multiplicador;
		printf ("%d x %d = %d\n", multiplicador, numero, res);
		numero++;
		
	} while (numero <= 10);
	
	return 0;
}

