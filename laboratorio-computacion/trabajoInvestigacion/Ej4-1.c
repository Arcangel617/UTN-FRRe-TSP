/* 
* Diseñar un programa que permita generar un archivo de texto que permita 
* cargar cinco nombres separados por punto. Mostrar el contenido del archivo 
* un nombre abajo del otro.
*/
#include <stdio.h>
#include <string.h>
#define a "nombres.dat"
#define tam 50

void abrir();
void cerrar();
void mostrar();
void escribir();
void initArray();
int checkArray();

FILE *archivo;
char texto[tam];
int i,cant;
char caracter;

int main(){
	
	abrir();
	
	escribir();
	
	cerrar();
	
	mostrar();
	
	return 0;
}

/*
* Abre el archivo para escritura
*/
void abrir(){
	if ((archivo = fopen(a,"w")) == NULL){
		printf("\nNo se pudo abrir el archivo!");
	}
}

/*
* Inserta los datos en el archivo una vez que se verifica la consistencia de
* los datos
*/
void escribir(){
	do { 
		if(cant != 5 && cant > 1){
			initArray();
			cant=1;
			printf("\n<< El total de nombres debe ser cinco >>\n");
			printf("<< Ej: juan.carlos.etc.etc.etc >>\n");
			printf(">> "); scanf("%s",&texto);
		} else {
			initArray();
			cant=1;
			printf("<< Ingrese cinco nombres: >>\n");
			printf("<< Ej: juan.carlos.etc.etc.etc >>\n");
			printf(">> "); scanf("%s",&texto);
		}
		if(checkArray() == 5){
			for(i = 0; i < tam; i++){
				if(texto[i] != '*'){
					fputc(texto[i],archivo);
				}
			}
		}
	} while(cant != 5);
}

/*
* Cierra el archivo
*/
void cerrar(){
	if(fclose(archivo) != 0){
		printf("\n<< Hubo un problema al cerrar el archivo! >>\n");
	} else {
		printf("\n<< El archivo se ha cerrado correctamente. >>\n");
	}
}

/*
* Muestra el contenido del archivo 
*/
void mostrar(){
	if ((archivo = fopen(a,"r")) == NULL){
		printf("\nNo se pudo abrir el archivo!");
	}
	printf("\n\n<< Mostrando datos del archivo >>\n\n");
	
	while(!feof(archivo)){
		
		caracter = fgetc(archivo);
		if(caracter == '.'){
			printf("\n");
		} else {
			printf("%c",caracter);
		}
	}
	printf("\n");
	
	cerrar();
}

/*
* Inicializa el array para ingresar texto
*/
void initArray(){
	for(i = 0; i < tam; i++){
		texto[i] = '*';
	}
}

/*
* Chequea la cantidad de nombres que se ingresan
*/
int checkArray(){
	for(i = 0; i < tam; i++){
		if(texto[i] == '.'){
			cant++;
		}
	}
	return cant;
}
