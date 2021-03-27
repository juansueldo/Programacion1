/*Crear una función que reciba como parámetro un numero entero. La función
retornara 1 en caso de que sea positivo, -1 en caso de que sea negativo y 0 en
caso de que sea 0. Realizar la prueba lógica de la función en el main.*/

#include <stdio.h>
#include <stdlib.h>

int numeroIngresado (int operador);

int main ()
{
	setbuf(stdout, NULL);
	int numero;
	int mostrar;
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	
	mostrar = numeroIngresado(numero);
	switch (mostrar)
	{
		case 1:
			printf("\nEl numero es positivo.");
			break;
		case -1:
			printf("\nEl numero es negativo.");
			break;
		case 0:
			printf("\nEl numero es cero.");
			break;
	}
	return EXIT_SUCCESS;
}
int numeroIngresado (int operador)
{
	int retorno;
	if(operador > 0)
	{
		retorno = 1;
	}
	else if(operador < 0)
	{
		retorno = -1;
	}
	else
	{
		retorno = 0;
	}
	return retorno;
}
