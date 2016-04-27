#include <stdio.h>

int main() {
	
	int lista[9] = {0,4,78,5,32,9,77,1,23};
	int i;
	int mult;
	
		
	for (i = 0; i < 9; i++){
		if (lista[i] % 2 == 0){
			printf ("%d ", lista[i]);			
			mult++;
		}
	}
	
	printf("\nMultiplos: %d",mult);
	
	return 0;
}

