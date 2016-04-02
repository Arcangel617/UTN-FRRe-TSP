#include <stdio.h>

int main() {
	
	int suma, val1, val2, resultado;
	
	printf ("===================================================\n");		
	printf ("Ingrese dos valores enteros:\n");
	printf ("===================================================\n");		
	printf ("valor1 >> "); scanf ("%d",&val1);
	printf ("valor2 >> "); scanf ("%d",&val2);
	suma = val1 + val2;
	resultado = suma * 2;
	printf ("===================================================\n");		
	printf ("La suma de los valores ingresados es %d.\n", suma);	
	printf ("El duplo de la suma obtenida es  %d.\n", resultado);	
	printf ("===================================================\n");
	
	return 0;
}

