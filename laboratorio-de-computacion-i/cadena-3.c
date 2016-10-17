#include <stdio.h>

int main() {
	
	char cadena[14] = {'H','O','L','A','*','m','u','n','d','o','*','T','S','P'};
	int i = 0;
	int a = 0;
	char letra;
	
	/*	Se imprime la cadena original */
	printf("Cadena Original >> ");
	while(i < 14){
		printf("%c",cadena[i]);
		i++;
	}
	
	printf("\n\nIngrese letra: "); scanf(" %c", &letra);
	
	i = 0;
	while(i < 14){
		if (cadena[i] == letra) {
			cadena[i] = ' ';
			a++;
		}
		i++;
	}
	
	i = 0;
	while(i < 14){
		if (cadena[i] == ' ') {
			cadena[i] = cadena[i+1];
		}
		i++;
	}
	
	/*	Se imprime el resultado */
	printf("\nCoincidencias: %d\n",a);
	printf("\nResultado\n ");
	i = 0;
	while(i < 14){
		printf("[%d] = %c\n",i,cadena[i]);
		i++;
	}
	
	return 0;
}

