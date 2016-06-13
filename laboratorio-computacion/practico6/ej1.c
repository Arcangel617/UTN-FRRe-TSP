#include <stdio.h>
#define tam 2

struct alumnos {
	int dni;
	char *apellido[15];
	char *nombre[15];
	int edad;
	float promedio;
};

int main() {
	
	int i;
	struct alumnos alumno[tam];
	
/*	Ingreso de datos*/
	for(i = 0; i < tam; i++){
		printf("===============================================================\n");
		printf("[Alumno:%d]\n",i);
		printf("===============================================================\n");
		printf("DNI >> "); scanf("%d",&alumno[i].dni);
		printf("APELLIDO >> "); scanf("%s",&alumno[i].apellido);
		printf("NOMBRE >> "); scanf("%s",&alumno[i].nombre);
		printf("EDAD >> "); scanf("%d",&alumno[i].edad);
		printf("PROMEDIO >> "); scanf("%f",&alumno[i].promedio);
	}
	
	printf("===============================================================\n");
	printf(" LISTADO DE ALUMNOS \n");
	printf("===============================================================\n");
	printf("DNI\t APELLIDO\t NOMBRE\t\n");
	printf("---------------------------------------------------------------\n");
	for(i = 0; i < tam; i++){
		printf("%d\t %s\t %s\n",alumno[i].dni, alumno[i].apellido, alumno[i].nombre);
	}
	printf("Total de Alumnos:\n");
	return 0;
	
	
}



