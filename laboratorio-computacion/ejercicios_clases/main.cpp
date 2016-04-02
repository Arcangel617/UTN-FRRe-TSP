#include <stdio.h>

int main () {
	/* variables */
	int p,q,t;
	float s;
	char car;
	
	printf ("Hoy es lunes \n");
	printf ("Alumno: Arcangel Andres Artigue \n");
	
	printf ("==============================\n");
	printf ("Ingrese un valor:");
	scanf ("%i",&p);
	printf ("Ingrese un valor:");
	scanf ("%i",&q);
	printf ("==============================\n");	
	printf ("El valor es %i \n", p);
	printf ("==============================\n");
	printf ("El valor es %i \n", q);
	printf ("==============================\n");
	t = p+q;
	printf ("El valor de la suma es: %i \n",t);
	s = t*0.5;
	printf ("Porcentaje: %f \n",s);
	
	printf ("Ingrese un caracter:");
	scanf ("%c", &car);
	printf ("El valor es: %c \n", car);
	
	
	return 0;
}

