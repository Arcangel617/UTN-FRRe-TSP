#include <stdio.h>

int main() {
	
	/* Determinar cuales de los siguientes son identificadores validos. Si no
	 * son validos, explicar por que.
	 */
	
	printf ("1- 'registro1' : Es un identificador valido.\n\n");
	printf ("2- '1registro' : No es un identificador valido dado que los\n identificadores no pueden comenzar con un numero.\n\n");
	printf ("3- 'archivo' : Es un identificador valido.\n\n");
	printf ("4- 'return' : No es un identificador valido dado que 'return'\n es una palabra reservada en el lenguaje C.\n\n");
	printf ("5- '$impuesto' : No es un identificador valido dado que comienza\n con un caracter especial.\n\n");
	printf ("6- 'nombre' : es un identificador valido.\n\n");
	printf ("7- 'nombre y direccion' : No es un identificador valido dado que\n tiene espacios en blanco.\n\n");
	printf ("8- 'nombre_y_direccion' : es un identificador valido.\n\n");
	printf ("9- 'nombre-y-direccion' : es un identificador valido.\n\n");
	printf ("10- '123-45-6789' : No es un identificador valido dado que\n comienza con un numero.\n\n");
	return 0;
}

