#include <stdio.h>
#include <math.h>
#define PI 3.141592654

int main() {
	
	int radio;
	float superficie;
	
	printf ("radio: "); scanf("%d", &radio);
	
	while (radio < 0) {
		printf ("radio: "); scanf("%d", &radio);
	}
	
	superficie = PI*pow(radio,2);
	printf ("La superficie es: %f", superficie);
	
	return 0;
}

