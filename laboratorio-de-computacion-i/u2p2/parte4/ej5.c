#include <stdio.h>

int main() {
	
	int i ;
	int edad, edades;
	float altura;
	int alt170;
	int cantedades160180 = 0;
	int sumedades160180 = 0;
	float promedades160180 = 0;
	float promedades = 0;
	edades = 0;
	alt170 = 0;
	
	for (i = 0; i < 3; i++) {
		printf ("Persona %d:\n", i+1);
		printf ("Edad:"); scanf ("%d",&edad);
		printf ("Altura:"); scanf ("%f",&altura);
		
		if (altura > 1.70) {alt170++;}
		if (altura >= 1.60 && altura <= 1.80) 
		{
			sumedades160180 = sumedades160180 + edad;
			cantedades160180++;
		}
		
		edades = edades + edad;
	}
	
	promedades = edades / 3;
	promedades160180 = sumedades160180 / cantedades160180;
	
	printf ("Edad promedio del total: %f\n", promedades);
	printf ("Cantidad de personas con altura mayor a 1,70: %d\n", alt170);
	printf ("Promedio de edad de las personas con estatura entre 1,60 y 1,80: %f",promedades160180);
	
	return 0;
}

