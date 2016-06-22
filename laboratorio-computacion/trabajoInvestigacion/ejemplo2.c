#include <stdio.h>

int main(int argc, char *argv[]) {
	
	FILE *fich;
/*	datos = fopen ("nombres.dat", "ra"); */
	if ((fich = fopen("banco.dat", "ra")) == NULL){
		printf ( " Error en la apertura. Es posible que el fichero no exista \n ");
	} else {
		printf ( "OK!");
	}
	
	return 0;
}

