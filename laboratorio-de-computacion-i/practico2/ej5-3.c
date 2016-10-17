#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/* Ingresar dos caracteres por teclado. Si sin distintos y uno es distinto de 
	 'a' mostrar por pantalla su nombre y en caso contrario mostrar su apellido.*/
	
	char car1, car2;
	
	printf ("Ingrese dos caracteres: \n");
	printf (">> "); scanf (" %c", &car1);
	printf (">> "); scanf (" %c", &car2);
	
/*	if ((car1 != car2) && (car1 != 'a' || car2 != 'a')) {*/
/*		printf ("Arcangel Andres. \n");*/
/*	} else {*/
/*		printf ("Artigue. \n");*/
/*	}*/
	if (car1 != car2) {
		printf ("son distintos. \n");
		if (car1 != 'a') {
			printf ("al menos uno es distinto de 'a'");
		} else {
			if (car2 != 'a') {
				
			}
		}
	} else {
		printf ("son iguales. \n");
	}
	return 0;
}

