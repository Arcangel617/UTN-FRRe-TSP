#include <stdio.h>
#define tam 10

int main() {
	
	int lista[tam];
	int i, suma;
	float prom;
	
	suma = 0;
	prom = 0;
	
	for (i=0; i < tam; i++){
		printf("Elemento[%d]:",i);
		scanf("%d",&lista[i]);
	}
	
	/* Mostrar los elementos del arreglo */
	for (i=0; i<tam; i++){
		suma = suma + lista[i];
	}
	
	prom = suma / tam;
	
	for (i = 0; i < tam; i++) {
		if (lista[i] > prom) {
			if (i != tam-1) {
				printf ("%d,",lista[i]);
			} else {
				printf ("%d",lista[i]);
			}
		}
	}
	
	return 0;
}

