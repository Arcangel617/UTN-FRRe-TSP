#include <stdio.h>

int main() {
	
	int cant, nro;
	int i, suma;
	float promedio;
	int mayor = 0;
	int menor = 99999999;
	suma = 0;
	
	
	printf ("Cantidad de nros a ingresar: ");
	scanf ("%d", &cant);
	
	for (i = 0; i < cant; i++) {
		
		printf ("nro%d: ", i+1);
		scanf ("%d", &nro);
		
		if(nro > mayor){mayor = nro;}
		if(nro < menor){menor = nro;}
		
		suma = suma + nro;
	}
	
	promedio = suma / cant;
	
	printf ("Mayor:%d\n", mayor);
	printf ("Menor:%d\n", menor);
	printf ("Suma:%d\n", suma);
	printf ("Promedio:%f\n", promedio);
	return 0;
}

