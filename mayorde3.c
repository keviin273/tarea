#include <stdio.h>

int main() 
{
	int n1,n2,n3;
	
	printf("ingrese 3 numeros:\n");
	scanf("%d %d %d",&n1,&n2,&n3);
	
    if (n1 > n2 && n1 > n3)
	{
		printf("el mayor es %d",n1);
	}
	if (n2 > n1 && n2 > n3)
	{
		printf("el mayor es %d",n2);
	}
	if (n3 > n1 && n3 > n2)
	{
		printf("el mayor es %d",n3);
	}
	if (n1 == n2 && n1 > n3)
	{
		printf("%d y %d son iguales",n1,n2);
	}
	if (n2 == n3 && n2 > n1)
	{
		printf("%d y %d son iguales",n2,n3);
	}
	if (n1 == n3 && n1 > n2)
	{
		printf("%d y %d son iguales",n1,n3);
	}
	

	return 0;
}

