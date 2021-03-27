#include <stdio.h>
#include <stdlib.h>

int sumar2 (void);

int main ()
{
	int numero1;
	int numero2;
	int resultado;
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero1); 
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero2);
	
	int sumar2()
			{
				resultado = numero1 + numero2;
				return resultado;	
			}
			printf("\nEl resultado de sumar2: %d",sumar2());
			
			return EXIT_SUCCESS;
}
