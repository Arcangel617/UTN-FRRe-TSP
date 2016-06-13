#include <stdio.h>
# define nro 2

struct cuentas
{
	int nro_cuenta;
	char nombre[30];
	int saldo;
};

int main()
{
	struct cuentas cuen[nro];
	int i,deudor=0,acreedor=0;
	
	/*Carga del Arreglo Cuentas*/
	for(i=0;i<nro;i++)
	{
		printf("===============================================================\n");
		printf("Ingrese datos Estructura: %d\n",i+1);
		printf("===============================================================\n");
/*		printf("NROCUENTA >> ");*/
/*		scanf("%d",&cuen[i].nro_cuenta);*/
		cuen[i].nro_cuenta = i+1000;
		printf("CLIENTE >> ");
		scanf("%s",&cuen[i].nombre);
		printf("SALDO >> ");
		scanf("%d",&cuen[i].saldo);
		printf("\n");
	}
	
	/*Mostramos por pantalla los registros cargados*/
	printf("===============================================================\n");
	for(i=0;i<nro;i++)
	{
		printf("NROCUENTA: %d\t",cuen[i].nro_cuenta);
		printf("CLIENTE: %s\t",cuen[i].nombre);
		printf("SALDO: %d;\n",cuen[i].saldo);
	}
	
	/*Mostramos por pantalla los registros con formato de informe*/
	printf("===============================================================\n");
	printf("NROCUENTA;CLIENTE;SALDO;\n");
	for(i=0;i<nro;i++)
	{
	   printf("%d;",cuen[i].nro_cuenta);
	   printf("%s;",cuen[i].nombre);
	   printf("%d;\n",cuen[i].saldo);
	}
	printf("===============================================================\n");
	
	/*Informamos por Cliente Estados de las Cuentas.*/
		   
	for(i=0;i<nro;i++)
	{
		if (cuen[i].saldo<0)
		{
			printf("El estado de la cuenta para el cliente: %s es: DEUDOR\n",cuen[i].nombre);
			deudor++;
		} else {
			printf("El estado de la cuenta para el cliente: %s es: ACREEDOR\n",cuen[i].nombre);
			acreedor++;
		}
	}
	printf("===============================================================\n");
	printf("Hay %d Ciientes Deudores\n",deudor);
	printf("Hay %d Clientes Acreedores\n",acreedor);
	return 0;
}
