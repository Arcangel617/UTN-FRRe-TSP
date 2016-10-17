#include <stdio.h>

int length(int arr[]);
void mostrar(int arr[]);

int main() {
	
	int miarreglo[5] = {1,2,3,4,5};
	
	/*printf ("Leght %d", length(miarreglo));*/
	mostrar(miarreglo);
	
	return 0;
}

int length(int tam, string){
	int size = sizeof(arr) / sizeof(int);
	return size;
}

void mostrar(int arr[]){
	int i;
	for(i = 0; i < sizeof(arr) / sizeof(int); i++){
		printf("%d", arr[i]);
	}
}

