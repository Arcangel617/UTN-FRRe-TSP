#include <stdio.h>
#define tam 10

int main() {
	
	int lista[tam];
	int mult3[tam];
	int otros[tam];
	int i;
	int j = 0;
	int k = 0;
	
	/* Se solicita el ingreso de elementos */
	for (i=0; i < tam; i++){
		printf("Elemento[%d]:",i);
		scanf("%d",&lista[i]);
	}
	
	/* Se inicializan las posiciones del arreglo en cero */
	for (i=0; i < tam; i++) {
		mult3[i] = 0;
		otros[i] = 0; 
	}
	
	for (i=0; i < tam; i++){
		/* En caso de que el numero sea multiplo de 3, se lo agrega al array */
		if (lista[i] % 3 == 0){
			mult3[j] = lista[i];
			j++;
		} else {
			/* En caso de que no lo sea, se lo agrega al otro */
			otros[k] = lista[i];
			k++;
		}
	}
	
	printf ("<< Contenido del arreglo original >>\n");	
	/* Se muestra el contenido del arreglo */	
	for (i = 0; i < tam; i++){
		if (i != tam-1) {
			printf("%d, ",lista[i]);
		} else {
			printf("%d ",lista[i]);
		}
	}
	
	printf ("\n<< Multiplos de tres >>\n");	
	/* Se muestra el contenido del arreglo */	
	for (i = 0; i < tam; i++){
		if (i != tam-1) {
			printf("%d, ",mult3[i]);
		} else {
			printf("%d ",mult3[i]);
		}
	}
	
	printf ("\n<< No multiplos de tres >>\n");
	
	/* Se muestra el contenido del arreglo */
	for (i = 0; i < tam; i++){
		if (i != tam-1) {
			printf("%d, ",otros[i]);
		} else {
			printf("%d ",otros[i]);
		}
	}
	
	return 0;
}

