#include <stdio.h>
/*http://c.learncodethehardway.org/book/ex8.html*/

void cargarArray();

int main() {
	
	int lista[9];
	int size = 0;
	int i, buscar;
	size = sizeof(lista) / sizeof(int);
	
	printf ("Buscar: "); scanf("%d",&buscar);
	for(i = 0; i < size; i++) {
		if (buscar == lista[i]) {
			printf ("El elemento se encuentra en la posicion [%d].", i);
			break;
		}
	}
	
	printf ("No se encontró el elemento.");
	
	return 0;
}

void cargarArray(){
	
	int size = sizeof(lista) / sizeof(int);
	int i;
	for(i = 0; i < size; i++){
		lista[i] = rand();
	}
	
}

void mostrarContenido(int []){
	int size = sizeof(lista) / sizeof(int);
	int i;
	for(i = 0; i < size; i++){
		lista[i] = rand();
	}
}

