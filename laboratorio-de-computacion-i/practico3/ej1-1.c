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
	
	printf("Suma: %d\n", suma);
	printf("Promedio: %.2f", prom);
	
	
	return 0;
}

