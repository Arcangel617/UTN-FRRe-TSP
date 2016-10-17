#include <stdio.h>

int main() {
	
	int nro1,nro2;
	int suma;
	
	printf ("Ingrese dos numeros para realizar la multiplicacion :\n");
	printf (">> "); scanf("%d",&nro1);
	printf (">> "); scanf("%d",&nro2);
	
	while (nro2 > 0)
	{
		suma = suma + nro1;
		nro2--;
	}
	
	printf ("El resultado de la multiplicacion es : %d", suma);
	return 0;
}

