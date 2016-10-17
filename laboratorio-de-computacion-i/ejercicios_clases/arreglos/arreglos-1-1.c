#include <stdio.h>

int main() {
	
	int lista[9] = {0,4,78,5,32,9,77,1,23};
	int i;
	int buscar, r;
	
	printf("Ingrese el numero a buscar: ");
	scanf ("%d",&buscar);
	
	for (i = 0; i < 9; i++){
		if (buscar == lista[i])
			r = 1;
	}
	
	if(r == 1){
		printf ("TRUE");
	} else {
		printf ("FALSE");		
	}
	
	return 0;
}

