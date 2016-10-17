#include <stdio.h>
#include <math.h>

int main() {
	int i,j;
	
	for(i = 0; i < 5; i++){
		for(j = 0; j < 9; j++){
			if((i)&&(abs(i-j) >= 0 )&&(abs(i-j) <= 4))
			{
				printf ("*");
			} else {
				printf (" ");
			}
		}
		printf("\n");
	}
	return 0;
}

