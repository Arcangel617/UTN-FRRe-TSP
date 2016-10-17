#include <stdio.h>

int main() {
	
	int prod, val1, val2;
	
	printf ("===================================================\n");		
	printf ("Ingrese dos valores enteros:\n");
	printf ("===================================================\n");		
	printf ("valor1 >> "); scanf ("%d",&val1);
	printf ("valor2 >> "); scanf ("%d",&val2);
	prod = val1 * val2;
	printf ("===================================================\n");		
	printf ("El producto de los valores ingresados es %d\n", prod);	
	printf ("===================================================\n");
	
	return 0;
}

