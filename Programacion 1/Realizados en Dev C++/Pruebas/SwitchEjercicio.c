/*una agencia de viajes nos piden informar si hacemos viajes a lugares

según la estación del año estemos, informar si "Se viaja" o "No se viaja" a ese lugar

en Invierno: Solo Bariloche informa "se viaja" los demas destinos "No se viaja"

en Verano: Se viaja a Mar del plata y Cataratas solamente

en Otoño: Se viaja a todos los destinos.

primavera: solo no se viaja a Bariloche*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	setbuf(stdout, NULL);
	char estacion;
	char destino;
	
	printf("Ingrese el destino ('m' para Mar del Plata, 'c' para Codoba, 'b' para Bariloche y 'a' para Cataratas): ");
	fflush(stdin);
	scanf("%c",&destino);
	while(destino != 'c' && destino != 'm' && destino != 'b' && destino != 'a')
	{
		printf("\nError. Ingrese el destino ('m' para Mar del Plata, 'c' para Codoba, 'b' para Bariloche y 'a' para Cataratas): ");
		fflush(stdin);
		scanf("%c",&destino);
	}
	
	printf("\nIngrese la estacion ('v' para verano, 'i' para invierno, 'o' para otoño, 'p' para primavera): ");
	fflush(stdin);
	scanf("%c",&estacion);
	while(estacion != 'v' && estacion != 'i' && estacion != 'o' && estacion != 'p')
	{
		printf("\nError. Ingrese la estacion ('v' para verano, 'i' para invierno, 'o' para otoño, 'p' para primavera): ");
		fflush(stdin);
		scanf("%c",&estacion);
	}
	
	switch(estacion)
	{
		case 'i': //en Invierno: Solo Bariloche informa "se viaja" los demas destinos "No se viaja"
			if(destino == 'b')
			{
				printf("\nSe viaja");
			}
			else
			{
				printf("\nNo se viaja");
			}
			break;
		case 'v': //en Verano: Se viaja a Mar del plata y Cataratas solamente
			if(destino == 'm' || destino == 'a')
			{
				printf("\nSe viaja");
			}
			else
			{
				printf("\nNo se viaja");
			}
			break;
		case 'o':
			printf("\nSe viaja");
			break;
		case 'p':
			if(destino != 'b')
			{
				printf("\nSe viaja");
			}
			else
			{
				printf("\nNo se viaja");
			}
			break;
	}
	return EXIT_SUCCESS;
}
