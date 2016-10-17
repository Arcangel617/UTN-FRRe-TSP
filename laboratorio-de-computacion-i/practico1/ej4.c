#include <stdio.h>

int main() {
	
	int num1, val1, val2;
	char inicial;
	
	printf ("===================================================\n");	
	printf ("Ingrese un numero entero: ");
	scanf  ("%d", &num1);
	printf ("===================================================\n");	
	printf ("El numero ingresado es %d\n", num1);
	
	printf ("===================================================\n");		
	printf ("Ingrese dos valores enteros:\n");
	printf ("valor1 >> "); scanf ("%d",&val1);
	printf ("valor2 >> "); scanf ("%d",&val2);
	printf ("===================================================\n");		
	printf ("Los valores ingresados son %d y %d respectivamente.\n",val1,val2);	
	printf ("===================================================\n");	
	
	printf ("Ingrese la inicial de su nombre: ");
	scanf  (" %c", &inicial);
	printf ("La inicial de su nombre es %c", inicial);
	
	return 0;
}

