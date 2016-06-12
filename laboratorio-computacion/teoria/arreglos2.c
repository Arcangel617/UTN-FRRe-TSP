#include <stdio.h>

int main()
{
	/* Carga de elementos en la declaración del arreglo */
	int lista[9]= {0, 4, 78, 5, 32, 9, 77, 1, 23};
	int i;
	
	/* 
	* Para mostrar los elementos del arreglo se utiliza una estructura 
	* repetitiva.
	*/
	for(i = 0; i < 9; i++)
		printf("Digito [%d]: %d\n",i,lista[i]);
	
	return 0;
}
