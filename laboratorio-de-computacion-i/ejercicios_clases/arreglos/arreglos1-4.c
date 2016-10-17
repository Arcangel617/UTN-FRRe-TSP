#include <stdio.h>

int main() {
	
	int lista[9] = {0,4,78,5,32,9,77,1,23};
	int i;
	int pos;
	
	printf("Ingrese posicion: ");
	scanf ("%d",&pos);
	
	if (pos >= 0 &&  pos <= 9){
		printf("Posicion [%d]: %d",pos, lista[pos]);
	} else {
		printf("No hay resultados.");
	}
	
	return 0;
}

