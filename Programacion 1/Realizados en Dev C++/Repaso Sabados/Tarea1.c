/*Ingresar números enteros, hasta que el usuario lo decida. Calcular y mostrar:
a) El promedio de los números positivos.
b) El promedio de los números negativos.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	setbuf(stdout, NULL);
	
	int numero;
	int acumPositivos = 0;
	int contPositivos = 0;
	int acumNegativos = 0;
	int contNegativos = 0;
	float promPositivos;
	float promNegativos;
	char seguir;
	
	do
	{
		printf("Ingrese un numero: ");
		fflush(stdin);
		scanf("%d",&numero);
		
		if(numero < 0)
		{
			acumNegativos = acumNegativos + numero;
			contNegativos++;
		}
		else
		{
			acumPositivos = acumPositivos + numero;
			contPositivos++;
		}
		printf("Desea ingresar otro numero? 's' o 'n': ");
		fflush(stdin);
		scanf("%c",&seguir);
	}while(seguir == 's');
	
	promPositivos = (float)acumPositivos / contPositivos;
	promNegativos = (float)acumNegativos / contNegativos;
	
	printf("\nEl promedio de los positivos es: %.2f \nEl promedio de los negativos es: %.2f", promPositivos, promNegativos);
	
	return EXIT_SUCCESS;
}
