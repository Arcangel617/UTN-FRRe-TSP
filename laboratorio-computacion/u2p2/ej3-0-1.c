#include <stdio.h>

int main() {
	
	int dividendo, divisor;
	int resto, cociente;	
	
	printf ("dividendo: "); scanf("%d",&dividendo);
	printf ("divisor: "); scanf("%d",&divisor);
	
	if (divisor == 0){
		printf ("No se puede dividir por cero!");
		return 0;
	} 
		
	if (dividendo < divisor) {
		printf ("El dividendo tiene que ser mayor que el divisor!");
		return 0;
	} 
	
	resto = dividendo;
			
	while (resto >= divisor)
	{
		resto = resto - divisor;
		cociente++;
	}
	printf ("%d / %d es : %d\n", dividendo, divisor, cociente);
	printf ("Resto : %d\n", resto);
	
	return 0;
}
