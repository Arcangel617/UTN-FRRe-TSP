#include <stdio.h>

int main()
{
	int a,b,c;	
	printf("\n Introduce un numero: ");  
	scanf("%d",&a);
	b=1;  
	while (b <= 10)
	{
		c=a*b;
		printf (" %d x %d es = %d \n",a,b,c);
		b=b+1;  
	}
	return 0;
}

