#include <stdio.h>

int main() 
{
	int nota;
	
	while (nota !=0)
	{
		printf ("ingresar la nota de estudiante:\n");
		printf ("si ya no desea ingresar notas poner 0\n");
		scanf ("%d",&nota);
		if (nota >= 60 && nota <=69)
		{
			printf("aprobado\n");
		}
		if (nota >= 70 && nota <=79)
		{
			printf("bueno\n");
		}
		if (nota >= 80 && nota <=89)
		{
			printf("muy bueno\n");
		}
		if (nota >= 90 && nota <=100)
		{
			printf("sobresaliente\n");
		}
		if (nota > 100)
		{
			printf ("la nota ingresada no es valida\n");
		}
	}
	
	return 0;
}

