/*Ejercicio 1-2:ingresar 3 números y mostrar el mayor de los tres.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	setbuf(stdout, NULL);
	int numero;
	int mayor;
	int flag = 1;
	int i;
	
	for(i = 0; i < 3; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		
		if(flag || numero > mayor)
		{
			mayor = numero;
			flag = 0;
		}
 	}
 	printf("\nEl numero mayor es %d", mayor);
 	
 	return EXIT_SUCCESS;
}
