#include <stdio.h>

int main() {
	
	char cadena[14] = {'H','O','L','A','*','m','u','n','d','o','*','T','S','P'};
	int i = 0;
	int a = 0;
	printf("La cadena es:\n");
	while(i < 14){
		printf("caracer %d : %c\n",i,cadena[i]);
		if (cadena[i] == 'a' || cadena[i] == 'A') a++;
		i++;
	} 
	
	printf ("letras a %d",a);
	return 0;
}

