#include <stdio.h>

int main() {
	int numero;
	int digito1, digito2, digito3, digito4;
	
	
	printf("Ingrese un numero de 4 cifras: ");
	scanf("%d", &numero);

	digito1 = numero / 1000;    
	digito2 = (numero / 100) % 10; 
	digito3 = (numero / 10) % 10;    
	digito4 = numero % 10;            
	
	printf("Los digitos separados son: %d, %d, %d y %d\n",digito1, digito2, digito3, digito4);
	
	return 0;
}

