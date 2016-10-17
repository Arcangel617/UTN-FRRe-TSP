#include <stdio.h>
#define tam 10

int main() {
	
	int lista[tam];
	int i, prod;
	int cont;
	int div;
	
	for (i=0; i < tam; i++){
		printf("Elemento[%d]:",i);
		scanf("%d",&lista[i]);
	}
	
	printf("Divisor: ");
	scanf("%d", &div);
	
	for (i=0; i < tam; i++){
		if (lista[i] % div == 0)
			cont++;
	}
	
	printf("Hay %d numeros divisibles por %d",cont, div);
	
	return 0;
}

