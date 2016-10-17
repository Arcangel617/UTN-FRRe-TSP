#include <stdio.h>

int fibo();

int main() {
	int i, aux;
	int ant = 1;
	int ult = 1;
	
	for (i = 0; i < 15; i++) {
		if (i < 2) {
			printf ("%d ", ult);
		} else {
			aux = ult;
			ult = fibo(ant, ult);
			ant = aux;
			printf ("%d ", ult);
		}
	}
	return 0;
}

int fibo(int a, int b) {
	return a + b;
}

