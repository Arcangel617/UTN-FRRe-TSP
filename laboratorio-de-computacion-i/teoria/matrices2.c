#include <stdio.h>

int main() {
	int i,j;
	/*
	* Se carga la matriz en la declaracion de la misma.
	*/
	int matriz[5][2] = {{0,0},{1,2},{2,4},{3,6},{4,8}};
	
	/*
	* Para mostrar los elementos de la matriz se utiliza una estructura
	* repetitiva.
	*/
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 2; j++)
		{
			if(j==0){
				printf("|  ");
				printf("%d\t",matriz[i][j]);
			}else{
				printf("%d",matriz[i][j]);
				printf("  |");
			}
		}
		printf("\n");
	}
	return 0;
}
