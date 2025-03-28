#include <stdio.h>
#include <conio.h>
int main() 
{
	int numero,d,c;
	
	do 
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);
		
		if(numero == 0) {
			printf("termino el programa.\n");
			break;
		}
		d = 1;
		c = 0;
	 while (d <= numero)
	 {
		if (numero % d == 0)
		{
			c++;
			d++;
		}
		else 
		{
			d++;
		}
	 }
	 if (c == 2)
	 {
		printf("%d es primo\n",numero);
	 }
	 else 
	 {
		printf("%d no es primo\n",numero);
	 }
	}while(1);
	return 0;
}

