/*Ejercicio 1-3: ingresar 3 números y mostrar el número del medio, sólo si existe.
En caso de que no exista también informarlo.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	setbuf(stdout, NULL);
	int numero;
	int mayor;
	int menor;
	int medio;
	int flag = 1;
	int i;
	
	for(i = 0; i < 3; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		
		if(flag || numero > mayor)
		{
			mayor = numero;
		}
		
		if(flag || numero < menor)
		{
			menor = numero;

	    }
	    if(flag || numero != mayor && numero != menor)
	    {
	    	medio = numero;
	    	flag = 0;
		}
		else
		{
			medio = 0;
		}

	}
		
	if(medio)
	{
		printf("\nEl numero del medio es %d",medio);	
		//printf("El numero del medio es %d",numero);
	}
	else
	{
		printf("\nNo existe");	
	}
	
			
			
	return EXIT_SUCCESS;
}
