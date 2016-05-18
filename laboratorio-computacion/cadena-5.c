#include <stdio.h>

int main() {
	
	char cadena[15] = {'H','O','L','A','*','m','u','n','d','o','*','T','S','P','\0'};
	char invertido[15];
	int i = 0;
	int a = 0;
	
	int longi = strlen(cadena);
	
	/*	Se imprime la cadena original */
	while(i < 15){
		printf("[%c]",cadena[i]);
		i++;
	}
	
	for(i = 0; i < longi; i++){
		invertido[(longi-1)-i] = cadena[i];
	}
	
	/*	Se imprime la cadena original */
	i = 0;
	printf("\n");
	while(i < 15){
		printf("[%c]",invertido[i]);
		i++;
	}
	
	
	return 0;
}

