/*Ejercicio 3-3:
Crear una función que pida el ingreso de un entero y lo retorne*/

#include <stdio.h>
#include <stdlib.h>

int mostrarNum (int num);

int main ()
{
	setbuf(stdout, NULL);
	int numero;
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero);
	
	mostrarNum (numero);
	
	return EXIT_SUCCESS;
}
int mostrarNum (int num)
{
	printf("El numero entero es: %d",num);
}
