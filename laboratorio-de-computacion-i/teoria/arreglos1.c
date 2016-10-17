#include <stdio.h>

int main()
{
	int lista[10];
	int i;
	int min=10000;
	int max=-10000;
	int a = 0;
	float promedio;
	
	/*
	* Carga de elementos en el arreglo mediante una estructura repetitiva.
	*/
	for(i = 0; i < 10; i++)
	{
		printf("Ingresar el elemento [%d]: ",i);
		scanf("%d",&lista[i]);
	}
	
	/*
	* Se muestra los elementos del arreglo con una estructura repetitiva.
	*/
	for(i = 0; i < 10; i++)
		printf("Digito [%d]: %d\n",i,lista[i]);
	
	/*
	* Se muestran los numeros pares, el menor, el mayor y el promedio de la
	* suma de los elementos.
	*/
	for (i=0; i<10; i++)
	{
		if (lista[i]%2==0){ 
			printf("Digito par: %d\n", lista[i]);
		}
		if (lista[i]<min){
			min=lista[i];
		}
		else if (lista[i]>max){ 
			max=lista[i];
		}
	}
	printf ("El numero mayor es: %d y el numero menor es: %d\n",max,min);
	
	for(i=0;i<10;i++)
	{
		a=a+lista[i];
	}
	promedio=a/i;
	printf("El promedio es %f",promedio);	
	
	return 0;
}
