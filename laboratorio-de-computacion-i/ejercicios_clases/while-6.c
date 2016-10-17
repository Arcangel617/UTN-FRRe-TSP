# include <stdio.h>

int main()
{
	int p,a;
	p=0;
	a=0; 
	while (a <= 0)   
	{
		printf ("Ingrese un valor positivo\n");
		scanf ("%d",&a);
	}
	p= a*4;
	printf ("Perimetro= %d\n",p);
	return 0;
} 
