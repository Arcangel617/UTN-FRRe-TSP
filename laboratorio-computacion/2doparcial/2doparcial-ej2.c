#include <stdio.h>
#define tam 10

void initB();
void cambiarPares();
void mostrarA();
void mostrarB();
int lenB();
int A[tam] = {15,96,89,28,31,73,57,60,44,2};
int B[tam];

int main(int argc, char *argv[]) {
	
	int i,j = 0;
	
	cambiarPares();	
	mostrarA();
	initB();
	
	for(i = 0; i < tam; i++){
		if(A[i] % 2 == 0){
			B[j] = A[i] * 2;
			j++;
		}
	}
	
	if(lenB() == 0){
		printf("No hay numeros pares en el arreglo origen.");
	} else {
		mostrarB();
	}
	
	return 0;
}

void mostrarA(){
	int i;
	printf("ARREGL0 A[] >> ");
	for(i = 0; i < tam; i++){
		printf("%d ",A[i]);
	}
	printf("\n");
}
void mostrarB(){
	int i;
	printf("ARREGLO B[] >> ");
	for(i = 0; i < tam; i++){
		if(B[i] != 0){
			printf("%d ",B[i]);
		}
	}
	printf("\nCANT. B[]   >> %d", lenB());
	
}

int lenB(){
	int cant = 0;
	int i;
	for(i = 0; i < tam; i++){
		if(B[i] != 0){
			cant++;
		}
	}
	return cant;
}
void initB(){
	int i;
	for(i = 0; i < tam; i++){
		B[i] = 0;
	}	
}
void cambiarPares(){
	int i;
	for(i = 0; i < tam; i++){
		if(A[i] % 2 == 0){
			A[i] = A[i] + 1;
		}
	}	
}
