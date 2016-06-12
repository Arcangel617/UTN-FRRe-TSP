#include <stdio.h>

int i,j;
int matriz[5][2];
void mostrar();

int main() {

	/*
	* Se carga la matriz con una estructura repetitiva.
	*/
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("Elemento [%d][%d]: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
	}
	
	/*
	* Para mostrar los elementos de la matriz se utiliza una funcion.
	*/
	mostrar();
	
	return 0;
}

void mostrar()
{
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 2; j++)
		{
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
}
