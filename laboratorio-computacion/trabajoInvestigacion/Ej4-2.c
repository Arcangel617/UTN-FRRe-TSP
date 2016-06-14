#include <stdio.h>
#include <conio.h>
#include <string.h>
#define a "c:\\arch.dat"

struct registro {
	int cliente;
	char nombre[20];
	float saldo;
};

int main(){
	
	FILE *arch;
	struct registro reg;
	char seguir;

	if ((arch=fopen(a,"wb"))==NULL)
		printf("No se pudo abrir el archivo");
	
	do
	{
		printf("\nIngrese numero de cliente: ");
		scanf("%d",&reg.cliente);
		printf("\nIngrese el nombre: ");
		scanf("%s",&reg.nombre);
		printf("\nIngrese el saldo: ");
		scanf("%f",&reg.saldo);
		fwrite(&reg,sizeof(reg),1,arch);
		printf("desea terminar s/n: ");
		scanf("\n%c",&seguir);		
	} while(seguir=='n');

	fclose(arch);

	getch();
}
