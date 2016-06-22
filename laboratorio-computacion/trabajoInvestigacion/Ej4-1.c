/* 
* Diseñar un programa que permita generar un archivo de texto que permita 
* cargar cinco nombres separados por punto. Mostrar el contenido del archivo 
* un nombre abajo del otro.
*/
#include <stdio.h>
#include <string.h>
#define a "nombres.dat"

struct registro {
	char nombre[100];
};

int main(){
	
	FILE *archivo;
	/*struct registro reg;*/
	char seguir;
	
	if ((arch = fopen(a,"w")) == NULL){
		printf("No se pudo abrir el archivo");
	}
	
	do
	{
		printf("Ingrese cinco nombres (los nombres deben estar separados por puntos):\n");
		printf(">> "); scanf("%s",&reg.nombre);
		
		fwrite(&reg,sizeof(reg),1,arch);
		printf("desea terminar s/n: ");
		scanf("\n%c",&seguir);		
	} while(seguir=='n');
	
	fclose(arch);
	
	return 0;
}

