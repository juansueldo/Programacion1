/*Ejercicio 3-2:
Crear una función que muestre por pantalla el número flotante que recibe como parámetro*/

#include <stdio.h>
#include <stdlib.h>

float mostrarNum (float num);

int main ()
{
	setbuf(stdout, NULL);
	float numero;
	
	printf("Ingrese un numero: ");
	scanf("%f",&numero);
	
	mostrarNum (numero);
	
	return EXIT_SUCCESS;
}
float mostrarNum (float num)
{
	printf("El numero flotante es: %.2f",num);
}
