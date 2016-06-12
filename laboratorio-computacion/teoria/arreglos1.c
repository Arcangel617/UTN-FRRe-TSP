#include <stdio.h>

int main()
{
	int lista[10];
	int i;
	int min=10000;
	int max=-10000;
	int a = 0;
	int promedio;
	
	/*Cargar elementos en el arreglo*/
	for(i = 0; i < 10; i++)
	{
		printf("Ingresar el elemento %d:\n",i);
		scanf("%d",&lista[i]);
	}
	/*Mostrar los elementos del arreglo*/
	for(i = 0; i < 10; i++)
		printf("Digito %d:%d\n",i,lista[i]);
	
	for (i=0; i<10; i++)
	{
		if (lista[i]%2==0) printf("\u201cDigito par: %d\n\u201d", lista[i]);
		if (lista[i]<min) min=lista[i];
		else if (lista[i]>max) max=lista[i];
	}
	printf ("\u201cel numero mayor es: %d y el numero menor es: %d\u201d",max,min);
	for(i=0;i<10;i++)
	{
		a=a+lista[i];
	}
	promedio=a/i;
	printf("\u201c\n el promedio es %d\u201d",promedio);	
	
	return 0;
}
