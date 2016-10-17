#include <stdio.h>

int main() {
	
	/*	realizar un programa que permita:
	* a- ingresar 15 caracteres
	* b- calcular la cantidad de vocales
	* c- indicar la cantidad de vocales por tipo
	* d- utilizar sentencia switch.
	*/
	int a,e,i,o,u, otras, salir;
	char c;
	/* Inicializo variables */
	a = 0;
	e = 0;
	i = 0;
	o = 0;
	u = 0;
	salir = 0;	
	
	
	printf ("Ingrese 15 caracteres: \n");
	
	while (salir < 15)
	{
		printf (">> ");
		scanf (" %c", &c);
		switch (c)
		{
			case 'a' : a++; break;
			case 'e' : e++; break;
			case 'i' : i++; break;
			case 'o' : o++; break;
			case 'u' : u++; break;
			default : otras++; break;
		}
		
		salir++;
	}
	
	printf ("Vocales por tipo \n");
	printf ("A: %d\n", a);
	printf ("E: %d\n", e);
	printf ("I: %d\n", i);
	printf ("O: %d\n", o);
	printf ("U: %d\n", u);
	printf ("Otros catacteres: %d",otras);
	return 0;
}

