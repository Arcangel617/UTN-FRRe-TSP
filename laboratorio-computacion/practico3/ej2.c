#include <stdio.h>
#define tam 5

int main() {
	
	int lista[tam];
	int mult3[1];
	int otros[1];
	int i;
	int j = 0;
	int k = 0;
	
	int coso[1];
	
	for (i = 0; i<10; i++){
		coso[i] = i;
	}
	
	for (i = 0; i<10; i++){
		printf ("%d - ",coso[i]);
	}
	
	return 0;
	
	/* Se carga el arreglo */
	for (i=0; i < tam; i++){
		printf("Elemento[%d]:",i);
		scanf("%d",&lista[i]);
	}	
	
	for (i=0; i < tam; i++){
		if (lista[i] % 3 == 0){
			mult3[j] = lista[i];
			j++;
		} else {
			otros[k] = lista[i];
			k++;
		}
	}
	
	printf("Multiplos de 3\n");
	for(i=0; i <= j;i++){
		printf("%d\n",mult3[i]);		
	}
	
	printf("Otros\n");
	for(i=0; i <= k;i++){
		printf("%d\n",otros[i]);		
	}
	
	return 0;
}

