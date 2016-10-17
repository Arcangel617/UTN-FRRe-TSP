# include <stdio.h>

int  main()
{
	int cont,a,b;
	cont=0; /* inicializa contador*/
	printf ("Ingrese cantidad de veces a iterar\n");
	scanf ("%d",&b); 
	
	while (cont <b) 
	{  
		printf ("Ingrese un valor");
		scanf ("%d",&a); 
		printf (" Numero ingresado:%d\n",a); 
		cont=cont+1; /* incrementa contador*/
	}
	return 0;
}
