/*Ejercicio 2-1: Ingresar 5 números enteros calcular y mostrar el promedio de los números.
Probar la aplicación con distintos valores.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	setbuf(stdout, NULL);
	int numero;
	int acumulador = 0;
	int contador = 0;
	float promedio;
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		
		acumulador = acumulador + numero;
		contador++;
	}
	
	promedio = (float) acumulador / contador;
	
	printf("El promedio es: %.2f",promedio);
	
	return EXIT_SUCCESS;
}
