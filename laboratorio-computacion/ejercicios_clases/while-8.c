# include <stdio.h>

int  main()
{
	/* Escribir y contar los n�meros pares  de  10 n�meros ingresados */
	
	int num, c, d;
	c=1;  
	d=0;
	while(c<=10)
	{
		printf("Ingrese un numero\n");
		scanf ("%d",&num);
		if (num % 2 ==0) 
		{   
			printf ("Numero:%d\n",num);
			d=d+1;
		}    
		c++;
	}
	if (d==0) printf ("No se ingresaron n�meros pares\n");              
	else printf("Se ingresaron %d n�meros pares \n",d);
	return 0;
}
