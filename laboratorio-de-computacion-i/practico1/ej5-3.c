#include <stdio.h>

int main() {
	
	int nro;
	int cuadrado;
	float qparte, mqparte;
	
	printf ("====================================================\n");
	printf ("Ingrese un numero: ");
	scanf  ("%d", &nro);
	printf ("====================================================\n");
	printf ("Resultados:\n");
	printf ("====================================================\n");
	qparte = (nro/5);
	printf ("- La quinta parte de dicho numero es: %f\n", qparte);
	
	if (nro % 5 == 0) {
		printf ("- El numero es divisible por 5.\n");
	}
	else {
		printf ("- El numero no es dividible por 5.\n");
	}
	
	mqparte = (qparte/2);
	printf ("- La mitad de la quinta parte de dicho numero es: %f\n", mqparte);
	
	cuadrado = pow(nro,2);
	printf ("- El cuadrado de dicho numero es %d\n", cuadrado);
	printf ("====================================================\n");
	
	return 0;
}

