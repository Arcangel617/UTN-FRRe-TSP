# include <stdio.h>

int main()
{
	/* Escribe los números del 1 al 10 */
	
	int numero=1;
	while(numero<=10)
	{
		printf("%d\n",numero);
		numero++; /* tambien puede ser numero=numero+1*/
	}
	printf("condicion de salida:%d\n",numero);
	return 0;
}
