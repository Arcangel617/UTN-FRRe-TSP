#include <stdio.h>

int main() {
	
	/*	Ingresar un numero por teclado. Si es mayor que 0 y divisible por dos
		calcular su triplo. Mostrar por pantalla el resultado de la suma y
		un mensaje en caso de no poder realizar la operacion. */
	
	int nro, triplo;
	
	printf ("Ingrese un numero: ");
	scanf  ("%d", &nro);
	
	if ((nro > 0) && (nro % 2 == 0)) {
		triplo = nro * 3;
		printf ("El triplo de %d es %d ", nro, triplo);
	} else {
		printf ("No se puede realizar la operacion. \n");
		printf ("Verifique los valores ingresados.");
	}
	return 0;
		
}

