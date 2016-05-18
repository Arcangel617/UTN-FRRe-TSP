#include <stdio.h>
#include <string.h>

int main() {
	
	char source1[] = "Arcangel.Andres";
	char source2[] = "Arcangel.Andres617";
	int equals = 1;
	int source1size, source2size;
	int i, tam;
	
	source1size = strlen(source1);
	source2size = strlen(source2);
	
	
	/* detectamos si hay uno con mas elementos */
	if (source1size > source2size) {
		tam = source1size;
	} else {
		tam = source2size;
	}
	
	for (i = 0; i < tam; i++) {
		if (source1[i] != source2[i]) {
			equals = 0;
			break;
		}
	}	
	
	if (equals == 1) {
		/* String original */
		printf ("Source 1: ");
		for (i = 0; i < source1size; i++) {
			printf("[%c]",source1[i]);
		}
		
		printf ("\nSource 2: ");
		for (i = 0; i < source2size; i++) {
			printf("[%c]",source2[i]);
		}
	} else {
		printf ("No son iguales!\n");
		/* String original */
		printf ("Source 1: ");
		for (i = 0; i < source1size; i++) {
			printf("[%c]",source1[i]);
		}
		
		printf ("\nSource 2: ");
		for (i = 0; i < source2size; i++) {
			printf("[%c]",source2[i]);
		}
	}
	return 0;
}

