#include <stdio.h>

int main() {
	
	int matriz[4][4], valor, i, j;
	
	printf ("Ingrese los valores de la matriz\n");
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 4; j++) {
			scanf ("%d",&valor);
			matriz[i][j] = valor;
		}
	}
	
	for (i = 0; i < 4; i++) {
		printf("\n");
		for (j = 0; j < 4; j++) {
			printf("%d\t", matriz[i][j]);
		}
		printf("|");
	}
	
	return 0;
}

