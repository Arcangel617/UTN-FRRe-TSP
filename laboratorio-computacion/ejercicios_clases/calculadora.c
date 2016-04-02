#include <stdio.h>

int main() {
	
	int num1, num2;
	float operacion;
	char opcion;
	
	printf ("==============================================================\n");
	printf (" Calculara TSP\n");
	printf ("==============================================================\n");
	printf (" 's' = suma\n 'r' = resta\n");
	printf (" 'm' = multiplicacion\n 'd' = division\n");
	printf ("==============================================================\n");
	printf (" Nota: El primer valor debe ser el codigo de la operacion\n");
	printf ("==============================================================\n");
	printf (" >_ "); scanf (" %c", &opcion);
	printf ("==============================================================\n");
	
	switch (opcion) {
	case 's': {
		printf (" >_ "); scanf ("%d", &num1);
		printf (" >_ "); scanf ("%d", &num2);
		operacion = num1 + num2; 
		printf ("\n %f", operacion); 
		break;
	}
	case 'r': {
		printf (" >_ "); scanf ("%d", &num1);
		printf (" >_ "); scanf ("%d", &num2);
		operacion = num1 - num2; 
		printf ("\n %f", operacion); 
		break;
	}
	case 'm': {
		printf (" >_ "); scanf ("%d", &num1);
		printf (" >_ "); scanf ("%d", &num2);
		operacion = num1 * num2; 
		printf ("\n %f", operacion); 
		break;
	}
	case 'd': {
		printf (" >_ "); scanf ("%d", &num1);
		printf (" >_ "); scanf ("%d", &num2);
		if (num2 == 0) {
			printf ("\n No se puede dividir por cero!\n\n");
			break;
		}
		operacion = num1 / num2; 
		printf ("\n %f", operacion); 
		break;
	}
	default: printf("\n La opcion ingresada no es valida\n\n");
	}
	printf ("==============================================================\n");
	
	return 0;
}

