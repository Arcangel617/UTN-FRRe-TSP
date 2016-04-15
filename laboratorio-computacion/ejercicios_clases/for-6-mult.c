#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* mostrar por pantalla los diez primeros numeros de una tabla de multiplicar
	donde el multiplicador se ingresa por teclado */
	
	int nro, i, res;
	
	printf ("Ingrese un numero entero: ");
	scanf ("%d", &nro);
	
	for (i = 1; i <= 10; i++ )
	{
		res = i*nro;
		printf ("%d x %d = %d\n", nro, i, res);
	}
	return 0;
}

