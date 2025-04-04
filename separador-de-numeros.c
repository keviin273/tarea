#include <stdio.h>

int main() 
{
	int num;
	printf("separador de numeros\n");
	
	printf("ingrese un numero de dos cifras\n");
	
	scanf("%d",&num);

	printf("el numero separado es %d %d",num / 10,num % 10);
	
	return 0;
}

