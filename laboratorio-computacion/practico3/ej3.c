#include <stdio.h>
#define tam 10

void ordenar(int arr[]);

int main() {
	
	int lista[tam];
	int i;
	
	/* Se solicita el ingreso de elementos */
	for (i=0; i < tam; i++){
		printf("Elemento[%d]:",i);
		scanf("%d",&lista[i]);
	}
	
	/* Se muestra el contenido del arreglo */	
	for (i = 0; i < tam; i++){
		if (i != tam-1) {
			printf("%d, ",lista[i]);
		} else {
			printf("%d ",lista[i]);
		}
	}
	
	return 0;
}

void ordenar(int arr[]){
	int aux = 0;
	int i;
	for (i=0; i < tam-1; i++) {
		if (lista[i] > lista[i+1]) {
			aux = lista[i];
			lista[i] = lista[i+1];
			lista[i+1] = aux;
		}
	}
}

bool estaordenado(int arr[]){
	int i;
	for (i=0; i < tam; i++) {
		if (lista[i] > lista[i+1]) {
			return false;
		}
	}
	return true;
}

