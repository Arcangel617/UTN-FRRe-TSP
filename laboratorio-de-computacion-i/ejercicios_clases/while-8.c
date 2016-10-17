# include <stdio.h>

int  main()
{
	/* Escribir y contar los números pares  de  10 números ingresados */
	
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
	if (d==0) printf ("No se ingresaron números pares\n");              
	else printf("Se ingresaron %d números pares \n",d);
	return 0;
}
