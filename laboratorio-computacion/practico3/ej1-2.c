#include <stdio.h>
#define tam 10

int main() {
	
	int lista[tam];
	int i, prod;
	
	prod = 1;
	
	for (i=0; i < tam; i++){
		printf("Elemento[%d]:",i);
		scanf("%d",&lista[i]);
	}
	
	/* Mostrar los elementos del arreglo */
	for (i=0; i<tam; i++){
		prod = prod * lista[i];
	}
	
	printf("Productoria: %d\n", prod);	
	
	return 0;
}

