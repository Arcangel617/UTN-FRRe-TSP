#include <stdio.h>

int main() {
	
	int nro1,nro2,nro3,nro4,nro5;
	int suma;
	float promedio;
	char salir;
	
	printf ("Ingrese cinco numeros:\n");
	
	while (salir != 'n' && salir != 'N')
	{
		printf (">> "); scanf ("%d", &nro1);
		printf (">> "); scanf ("%d", &nro2);
		printf (">> "); scanf ("%d", &nro3);
		printf (">> "); scanf ("%d", &nro4);
		printf (">> "); scanf ("%d", &nro5);
		suma = nro1+nro2+nro3+nro4+nro5;
		promedio = suma / 5;
		salir = 'n';
	}
	
	printf ("Los numeros ingresados son: %d,%d,%d,%d,%d\n",nro1,nro2,nro3,nro4,nro5);
	printf ("La suma de todos los numeros ingresados es: %d\n",suma);
	printf ("El promedio de la suma de los numeros ingresados es: %f", promedio);
	return 0;
}

