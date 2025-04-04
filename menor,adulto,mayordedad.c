#include <stdio.h>

int main() 
{
	int edad;
	printf("ingrese la edad de la persona\n");
	scanf("%d",&edad);
	
	if ( edad < 18 && edad >= 0)
	{
	 printf("menor de edad");
	}
	if ( edad >= 18 && edad <= 64)
	{
		printf("adulto");
	}
	if ( edad >= 65 )
	{
		printf("adulto mayor");
	}
	

	
	return 0;
}

