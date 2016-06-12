#include <stdio.h>

int main()
{
	/*
	* Se carga el arreglo en la declaracion del mismo.
	*/
	int lista[9]= {0, 4,5 ,7, 32, 40, 77, 100,123};
	int i,inicio,final,medio,num;
	
	for(i = 0; i < 9; i++)
		printf("Digito [%d]: %d\n",i,lista[i]);
	
	/* busqueda binaria */
	printf("Ingresar el numero a buscar: ");
	scanf("%d",&num);
	inicio = 0;
	final = 9 - 1; /*n-1, n es la cantidad de elementos del arreglo*/
	
	while ((inicio <= final) && num != lista[medio] )
	{
		medio = (inicio + final) / 2;
		if (num > lista[medio])
			inicio = medio + 1;
		else
			final = medio - 1;
	}
	if (num == lista[medio])
		printf("El numero %d se encuentra en la posicion %d\n",num,medio);
	else
		printf("El numero %d no esta en el arreglo\n",num);
}
