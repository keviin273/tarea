#include <stdio.h>
#include <conio.h>

int main() 
{
	int n1,n2,n3;
	
    printf("Ingrese el primer número: ");
	scanf("%d",&n1);
	printf("Ingrese el segundo número: ");
	scanf("%d",&n2);
	printf("Ingrese el tercer número: ");
	scanf("%d",&n3);
	if (n1 > n2)
	{
		if (n2 > n3)
		{
			printf("%d, %d, %d", n1, n2, n3);
		}
		else
		{
			if (n1 > n3)
			{
				printf("%d, %d, %d", n1, n3, n2);
			}
			else
			{
				printf("%d, %d, %d", n3, n1, n2);
			}
		}
	}
	else
	{
		if (n3 > n2)
		{
			printf("%d, %d, %d", n3, n2, n1);
		}
		else
		{
			if (n1 > n3)
			{
				printf("%d, %d, %d", n2, n1, n3);
			}
			else
			{
				printf("%d, %d, %d", n2, n3, n1);
			}
		}
	}
	return 0;
}

