#include <stdio.h>
#define tam 9

int main() {
	
	int lista[tam];
	int i;
	
	for (i=0; i < tam; i++){
		printf("Ingresa el lemento %d:\n",i);
		scanf("%d",&lista[i]);
	}
	
	/* Mostrar los elementos del arreglo */
	for (i=0; i<tam; i++)
			printf("Elemento %d:%d\n", i+1, lista[i]);
	return 0;
}

