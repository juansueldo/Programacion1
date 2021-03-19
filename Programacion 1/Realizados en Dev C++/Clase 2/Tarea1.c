/*Ejercicio 1-1: Ingresar dos números enteros, sumarlos y mostrar el resultado.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	setbuf(stdout, NULL);
	int numero;
	int acumulador = 0;
	int i;
	
	for(i = 0; i < 2; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		acumulador += numero;
	}
	printf("\nEl resultado es: %d",acumulador);
	
	return EXIT_SUCCESS;
}
