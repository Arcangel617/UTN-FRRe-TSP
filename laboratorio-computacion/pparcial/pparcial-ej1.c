#include <stdio.h>

int main() {
	
	int cantLetras = 0;
	char letra;
	int cant,i;
	
	printf("Numero de letras a ingresar: ");
	scanf("%d", &cant);
	
	for (i = 0; i < cant; i++){
		printf (">> Ingrese una letra: ");
		scanf(" %c",&letra);
		if (letra == 'A' || letra == 'a'){
			cantLetras++;
		}		
	}
	
	printf ("\nCantidad de 'a': %d",cantLetras);
	return 0;
}

