#include <stdio.h>

int main() {
	
	int nro, iteracion;
	int mayor, menor;
	
	menor = 9999;
	mayor = 0;
	
	printf("Ingrese cinco numeros:\n");
	
	for (iteracion=0; iteracion < 5; iteracion++)
	{
		printf (">> "); scanf("%d", &nro);
		if (nro > mayor){mayor = nro;}
		if (nro < menor){menor = nro;}
	}
	
	printf("Mayor: %d\n", mayor);
	printf("Menor: %d\n", menor);
	
	return 0;
}

