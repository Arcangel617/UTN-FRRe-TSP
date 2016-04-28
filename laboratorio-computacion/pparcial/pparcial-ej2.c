#include <stdio.h>

/* Para la resolucion del problema se toma en cuenta que los lados del 
 triangulo son enteros. */
float superficie(int l1, int l2, int l3);
float perimetro(int l1, int l2, int l3);

int main() {
	
	int l1,l2,l3,p;
	float s;
	int opcion;
	
	printf(">> Ingrese los lados del triangulo\n");
	printf(">> Lado 1: "); scanf("%d",&l1);
	printf(">> Lado 2: "); scanf("%d",&l2);
	printf(">> Lado 3: "); scanf("%d",&l3);
	
	if (l1 != 0 && l2 != 0 && l3 != 0){
		printf(">> Calcular superficie [1]\n");
		printf(">> Calcular perimetro  [2]\n");
		printf(">> ");scanf("%d",&opcion);
		
		switch (opcion){
			case 1 : {
				s = superficie(l1,l2,l3);
				printf("\nSuperficie: %.2f\n",s);
				break;
			}
			case 2 : {
				p = perimetro(l1,l2,l3);
				printf("\nPerimetro: %d",p);
				break;
			}
			default: printf("\n<< La opcion ingresada no es valida. >>"); break;
		}
	} else {
		printf("\n<< Los lados no pueden ser iguales a cero. >>");
	}	
	
	return 0;
}

float superficie(int l1, int l2,int l3)
{
	int mayor = 0;
	int base = 0;
	int altura = 0;
	
	if (l1 > l2 && l2 > l3){
		mayor = l1;
		base = l2;
		altura = l3;
	} else if (l1 < l2 && l2 > l3){
		mayor = l2;
		base = l3;
		altura = l1;
	} else {
		mayor = l3;
		base = l1;
		altura = l2;
	}
	return base*altura/2;
}

float perimetro(int l1, int l2, int l3)
{
	return l1+l2+l3;
}

