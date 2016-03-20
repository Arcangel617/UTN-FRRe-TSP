#include <stdio.h>

int main() {
	
	int a = 3;
	int b = 7;
	int aux;	
	
	printf ("==============================\n");
	printf ("A = %d\n",a);
	printf ("B = %d\n",b);
	printf ("==============================\n");
	aux = a;
	a = b;
	b = aux;
	printf ("Intercambiando...\n");
	printf ("==============================\n");
	printf ("A = %d\n",a);
	printf ("B = %d\n",b);
	printf ("==============================\n");
	return 0;
}

