#include <stdio.h>

int main() {
	
	int cont, acum, a;
	acum = 0; /* inicializa acumulador */
	
	while (cont != 0)
	{
		printf ("Ingrese un valor: ");
		scanf ("%d",&a);
		printf ("Numero ingresdo: %d\n",a);
		acum = acum + 1;
		printf ("[0] Terminar\n");
		printf ("[1] Continuar");
		scanf ("%d",&cont);
	}
	
	printf ("El valor acumulado es: %d\n", acum);
	
	return 0;
}

