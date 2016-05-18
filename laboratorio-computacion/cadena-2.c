#include <stdio.h>

int main() {
	
	char cadena[14] = {'H','O','L','A','*','m','u','n','d','o','*','T','S','P'};
	int i = 0;
	int a = 0;
	
/*	while(i < 15){*/
/*		while (cadena[i] =! '*'){*/
/*			printf(" %c",cadena[i]);*/
/*		}*/
/*		printf ("%d",i);*/
/*		i++;*/
/*	}*/
	
	while(i < 14){
		if (cadena[i] == '*') {
			a++;
		}
		i++;
	}
	
	printf ("Cantidad de Palabras: %d\n",a+1);
	
	i = 0;
	
	while(i < 14){
		while (cadena[i] != '*'){
			printf("%c",cadena[i]);
			break;
		}
		if(cadena[i] == '*') printf("\n");
		i++;
	}
	
	return 0;
}

