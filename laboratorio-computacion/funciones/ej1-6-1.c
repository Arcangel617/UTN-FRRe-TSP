#include <stdio.h>

int primo();

int main() {
	int i;
	
	for (i = 0; i < 50; i++) {
		int nro = primo(i);
		
		if (nro == 1) {
			printf ("%d es primo \n", i);
		} else {
			printf ("%d es no primo \n", i);
		}
	}
	
	return 0;
}

int primo(int a) {
	int i = 0;
	int cont = 0;
	
	for (i = a; i > 0; i--) {
		if (a % i == 0) {
			cont++;
		}
	}
	
	if (cont == 2){
		return 1;
	}
	
	return 0;
}

