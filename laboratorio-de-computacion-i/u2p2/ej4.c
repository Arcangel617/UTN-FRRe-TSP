#include <stdio.h>

int main() {
	
	int start, end;
	int cantidad;
	
	start = 50;
	end = 20;
	
	printf ("Inicio: %d\n", start);
	printf ("Fin: %d\n", end);
	
	while (start >= end) {
		if (start % 2 == 0) {
			printf ("%d\n",start);
			cantidad++;
		}
		start--;
	}
	
	printf ("Cant. numero hallados: %d", cantidad);
	
	return 0;
}

