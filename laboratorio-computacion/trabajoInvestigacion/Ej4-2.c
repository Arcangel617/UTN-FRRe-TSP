/* 
* Dado el siguiente programa, se pide:
* i. Correr el programa y corregir los errores
* ii. Agregar al programa, mostrar el contenido del archivo cargado 
* previamente mediante el siguiente formato
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define a "arch.dat"

void mostrar();
void gotoxy();
void clrscr();

struct registro {
	int cliente;
	char nombre[20];
	float saldo;
};

FILE *arch;
struct registro reg;

int main(){
	
	char seguir;
	int nrocliente = 0;
	
	if ((arch=fopen(a,"wb")) == NULL)
		printf("No se pudo abrir el archivo");
	
	do
	{
		nrocliente++;
		printf("Cliente Nro: %d\n",nrocliente);
		reg.cliente = nrocliente;
		printf("Nombre: ");
		scanf("%s",&reg.nombre);
		printf("Saldo: ");
		scanf("%f",&reg.saldo);
		fwrite(&reg,sizeof(reg),1,arch);
		
		printf("Terminar [s/n]: ");
		scanf("\n%c",&seguir);
		clrscr();
		gotoxy(0,0);

	} while(seguir != 's');

	fclose(arch);
	
	mostrar();
	
	return 0;
}

void mostrar(){
	int cant,x=3;
	if((arch = fopen(a,"rb")) == NULL){
		printf("No se pudo abrir el archivo.\n");
	}
	
	clrscr();
	
	gotoxy(0,1); printf("====================================================");
	gotoxy(0,2); printf("| NRO CUENTA |   NOMBRE CLIENTE   |     SALDO      |");
	gotoxy(0,3); printf("====================================================");
	
	while(!feof(arch)){
		x++;
		cant = fread(&reg,sizeof(reg),1,arch);
		if(cant != 1){
			if(feof(arch)){
				break;
			} else {
				error("No leyo el ultimo registro");
				break;
			}
		}		
		gotoxy(0,x); printf("|      %d",reg.cliente);
		gotoxy(14,x);printf("|      %s",reg.nombre);
		gotoxy(35,x);printf("|  %f",reg.saldo);
		gotoxy(52,x);printf("|");
	}
	gotoxy(0,x); printf("====================================================");
	fclose(arch);
}


void gotoxy(int x,int y){
	printf("%c[%d;%df",0x1B,y,x);
}

void clrscr(){
	int i;
	for(i = 0; i < 100; i++){
		printf("\n");
	}
}

/*int cantRegistros(){*/
/*	int cant;*/
/*	FILE *arch;*/
/*	struct registro reg;*/
	
/*	arch = fopen(a,"rb");*/
	
/*	cant = fread(&reg,sizeof(reg),1,arch);*/
/*	return cant;*/
/*}*/
