#include <stdio.h>

int main()
{
	int lista[10];
	int i;
	
	/* 
	* Carga de elementos en el arreglo	usando una estructura repetitiva.
	*/
	for(i = 0; i < 10; i++)
	{
		printf("Ingresar el elemento [%d]: ",i);
		scanf("%d",&lista[i]);
	}
	
	/* 
	* Para mostrar los elementos del arreglo se utiliza una estructura
	* repetitiva. 
	*/
	for(i = 0; i < 10; i++)
		printf("Elemento [%d]: %d\n",i+1,lista[i]);
	
	return 0;
}
