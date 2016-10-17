#include <stdio.h>

int main() {
	
	int aux, producto, nro;
	char salir;
	
	while (salir != 'n' && salir != 'N')
	{
		printf ("Numero:");
		scanf ("%d",&nro);
		
/*		if (aux == 0)*/
/*		{*/
/*			aux == nro;*/
/*		}*/
		
		printf ("ingreso el %d\n", nro);
		
/*		producto = producto * nro;*/
		printf ("continuar [s/n]: ");
		scanf (" %c", &salir);
	}
	return 0;
}

