#include <stdio.h>

int main(int argc, char *argv[]) {
	
	FILE *parch;
/*	if((parch=fopen("c:\\banco.dat","rb")) == NULL)*/
/*	Se abre en modo lectura*/
	if((parch=fopen("banco.dat","rb")) == NULL)
		printf("\nEl archivo no puede ser abierto");
/*	Se cierra el archivo*/	
	if((fclose(parch)) == -1)
		printf("\nNo se pudo cerrar el archivo");
	else
		printf("\nEl archivo se cerro exitosamente");
}

