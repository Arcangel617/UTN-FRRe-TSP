#include <stdio.h>
#include <string.h>

int main() {
	
	char source[] = "Arcangel.Andres";
	char target[20];
	int sourcesize, targetsize;
	int i;
	
	sourcesize = strlen(source);
		
	/* Se completa el array target con el caracter a */
	for (i = 0; i < 20; i++) {
		if (i < sourcesize) {
			target[i] = source[i];
		} else {
			target[i] = 'a';
		}
	}
	
	/* String original */
	printf ("Source: ");
	for (i = 0; i < sourcesize; i++) {
		printf("[%c]",source[i]);
	}
	printf ("\nSize: %d\n", sourcesize);
	
	
	/* String target */
	targetsize = strlen(target);
	printf ("Target: ");
	for (i = 0; i < 25; i++) {
		printf("[%c]",target[i]);
	}
	printf ("\nSize: %d\n", targetsize);
	
	return 0;
}

