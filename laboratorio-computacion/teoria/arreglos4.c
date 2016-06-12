#include <stdio.h>
#define MAX 5

/*
* Se define la dimension del arreglo utilizando una constante.
*/
int vec[MAX];

void mostrar(void);

int main()
{
	int i;
	for(i=0;i<MAX;i++)
	{
		printf("Ingrese un numero entero: ");
		scanf("%d",&vec[i]);
	}
	
	/*
	* Se muestra los elementos del arreglo utilizando una funcion.
	*/
	mostrar();
	
	return 0;
}

void mostrar(void)
{
	int i;
	for(i=0;i<MAX;i++)
		printf("%d ",vec[i]);
}
