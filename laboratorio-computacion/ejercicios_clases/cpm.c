#include <stdio.h>

int main() {
	
	/* Realizar un programa que permita calcular los cinco primeros multiplos
	de un valor que se ingresa por pantalla.
	Solamente se debe realizar el calculo si elvalor ingresado esta comprendido
	entre el 2 y 8.
	Mostrar por pantalla los multiplos delvalor ingresado uno debajo del otro. */
	int i, nro, res;
	
	printf ("Ingrese un numero:");
	scanf ("%d", &nro);
	
	if (nro >= 2 && nro <= 8)
	{
		printf ("Los cinco primeros multiplos de %d son:\n", nro);
		for (i = 2; i <= 6; i++)
		{
			res = nro * i;
			if (i != 6)
			{
				printf ("%d,",res);
			}else{
				printf ("%d",res);
			}
		}
		
	}else{
		printf ("Valor fuera de rango");
	}
	
	
	
	return 0;
}

