#include <stdio.h>

int main() {
	
	int suma, resta, prod;
	int num1, num2;
	
	printf ("==============================\n");
	printf ("Ingrese dos valores:\n");
	printf ("==============================\n");
	printf ("valor 1 >> "); scanf ("%d", &num1);
	printf ("valor 2 >> "); scanf ("%d", &num2);
	printf ("==============================\n");
	suma = num1+num2;
	printf ("Suma: %d\n", suma);
	resta = num1-num2;
	printf ("Resta: %d\n", resta);
	prod = num1*num2;
	printf ("Producto: %d\n", prod);
	
	return 0;
}

