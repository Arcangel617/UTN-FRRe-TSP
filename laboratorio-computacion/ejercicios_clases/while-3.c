#include <stdio.h>

int main() {
	
	int acum, a;
	char cont;
	acum = 0; /* inicializa acumulador */
	
	while (cont != 'n' && cont != 'N' )
	{
		printf ("Ingrese un valor: ");
		scanf ("%d",&a);
		printf ("Numero ingresdo: %d\n",a);
		acum = acum + 1;
		printf ("Terminar [s/n] :"); /* Se podran seguir ingresando  valor a menos que se pulse n */
		scanf (" %c",&cont);
	}
	
	printf ("El valor acumulado es: %d\n", acum);
	
	return 0;
}

