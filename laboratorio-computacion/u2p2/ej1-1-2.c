#include <stdio.h>

int main() {
	
	int nro;
	char salir;
	
	while (salir != 'n' && salir != 'N')
	{
		printf ("Ingrese un numero:\n");
		printf (">> "); scanf ("%d", &nro);
		printf ("Ingreso el numero %d\n	",nro);
		printf ("Continuar [s/n]: ");
		scanf (" %c",&salir); // falta limpiar el string
	}
	
	return 0;
}

