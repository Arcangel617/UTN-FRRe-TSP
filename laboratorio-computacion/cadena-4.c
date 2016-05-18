#include <stdio.h>

int main() {
	/* strlen */
	/* Esta funcion nos devuelve el numero de caracteres */
	/* que tiene la cadena (sin contar el '\0') */
	char texto[] = "Gorka";
	int longitud;
	longitud = strlen(texto);
	printf ("La cadena %s tiene %d caracteres.\n",texto,longitud);
	return 0;
}

