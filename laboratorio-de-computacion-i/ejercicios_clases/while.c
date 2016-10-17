#include <stdio.h>

int main() {
	
	int cont, acum, a;
	cont = 0; /* inicializa contador */
	acum = 0; /* inicializa acumulador */
	
	while (cont != 3)
	{
		printf ("Ingrese un valor: ");
		scanf ("%d",&a);
		printf ("Numero ingresdo: %d\n",a);
		cont = cont+1; /* incrementa contador */
		acum = acum + 1;
	}
	
	printf ("El valor acumulado es: %d\n", acum);
	
	return 0;
}

