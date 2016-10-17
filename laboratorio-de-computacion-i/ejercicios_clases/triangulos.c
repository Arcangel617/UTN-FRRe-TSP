#include <stdio.h>
/*	Ingresa por teclado tres valores enteros e indicar si corresponde a un 
triangulo isosceles, escalero o equilatero. */

int main() {
	
	int lad1, lad2, lad3;
	
	printf (" ingrese tres valores enteros:\n");
	printf (" >_ "); scanf ("%d", &lad1);
	printf (" >_ "); scanf ("%d", &lad2);
	printf (" >_ "); scanf ("%d", &lad3);
	
	if (lad1 == lad2 == lad3) {
		printf ("El triangulo es equilatero.\n");
	}else {
		if (lad1 == lad2 || lad2 == lad3 || lad1 == lad3) {
			printf ("El triangulo es isosceles.\n");
		}
		else {
			printf ("El triangulo es escaleno.");
		}
	}
	return 0;
}

