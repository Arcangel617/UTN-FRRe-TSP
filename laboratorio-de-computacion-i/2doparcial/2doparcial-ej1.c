#include <stdio.h>
#define tam 10

int main() {
	
	int i,cant;
	char cadena[tam];
	
	printf("INGRESE CADENA\n>> ");
	scanf("%s",&cadena);
	
	for(i = 0; i < tam-1; i++){
		if(cadena[i] == 'r' && cadena[i+1] == 'e'){
			cant++;
		}
	}
	 
	printf("Cadena: %s\n",cadena);
	printf("Ocurrencias: %d\n",cant);
	return 0;
}

