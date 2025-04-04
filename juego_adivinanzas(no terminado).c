#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
	srand(time(NULL));
	
	int numero = rand() % 100 + 1;
	int usuario;
	printf("adivina el numero!\n");
	
	printf("ingrese un numero\n");
	
	scanf("%d",&usuario);
	for (int i = 1; i <= 6;i++)
	{
		if (usuario > numero)
		{
			printf("Muy alto\n");
			scanf("%d",&usuario);
		}
		else if (usuario < numero)
		{
			printf("Muy bajo\n");
			scanf("%d",&usuario);
		}
		if (usuario == numero)
		{
			printf("adivinaste!\n");
			exit(0);
		}
	}
	printf("el numero correcto era %d\n",numero);
	return 0;
}

