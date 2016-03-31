#include <stdio.h>

int main() {
	
	int opcion;
	float operacion, num1, num2;
	printf ("==============================================================\n");
	printf (" Ingrese dos numeros:\n");
	printf (" >> "); scanf ("%f", &num1);
	printf (" >> "); scanf ("%f", &num2);
	printf ("==============================================================\n");
	
	printf (" Seleccionar operacion:\n");
	printf (" 1- Suma\n");
	printf (" 2- Resta\n");
	printf (" 3- Multiplicacion\n");
	printf (" 4- Division\n");
	printf ("==============================================================\n");
	printf (" opcion: "); scanf ("%d", &opcion);
	printf ("==============================================================\n");
	
	switch (opcion) {
	case 1: {
		operacion = num1 + num2; 
		printf ("\n Rta: %f + %f es %f\n\n", num1, num2, operacion); 
		break;
	}
	case 2: {
		operacion = num1 - num2; 
		printf ("\n Rta: %f - %f es %f\n\n", num1, num2, operacion); 
		break;
	}
	case 3: {
		operacion = num1 * num2; 
		printf ("\n Rta: %f x %f es %f\n\n", num1, num2, operacion); 
		break;
	}
	case 4: {
		if (num2 == 0) {
			printf ("\n No se puede dividir por cero!\n\n");
			break;
		}
		operacion = num1 / num2; 
		printf ("\n Rta: %f / %f es %f\n\n", num1, num2, operacion); 
		break;
	}
	default: printf("\n La opcion ingresada no es valida\n\n");
	}
	printf ("==============================================================\n");
	return 0;
}

