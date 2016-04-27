#include <stdio.h>

int main() {
	
	int lista[9] = {0,4,78,5,32,9,77,1,23};
	int i;
	int buscar;
	
	printf("Ingrese el numero a buscar: ");
	scanf ("%d",&buscar);
	
	for (i = 0; i < 9; i++){
		if (buscar == lista[i]){
			printf ("El numero se encuentra en la posicion : [%d]", i);			
			return 0;
		}
	}
	
	printf("No hay resultados.");
	
	return 0;
}

