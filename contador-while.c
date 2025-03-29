#include <stdio.h>

int main() 
{
	int numero,positivo;
	positivo = 0;
	for (int i = 1; i <= 20; i++)
	{
		printf("ingrese un numero: ");
		scanf("%d",&numero);
		if (numero > 0)
		{
		  positivo++;
		}
	}
	printf("la cantidad de numeros positivos ingresados es %d",positivo);
	return 0;
}

