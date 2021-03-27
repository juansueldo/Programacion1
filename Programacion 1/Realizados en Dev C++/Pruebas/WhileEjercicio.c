/*Al presionar el botón pedir números hasta que el usuario quiera, mostrar:
1-Suma de los negativos. 2-Suma de los positivos. 3-Cantidad de positivos. 4-Cantidad de negativos.
5-Cantidad de ceros. 6-Cantidad de números pares. 7-Promedio de positivos. 8-Promedios de negativos.
9-Diferencia entre positivos y negativos, (positvos-negativos).*/

#include<stdio.h>
#include<stdlib.h>

int main (void)
{
	setbuf (stdout, NULL);
	int numero;
	char seguir;
	int acumNegativos = 0;
	int acumPositivos = 0;
	int contNegativos = 0;
	int contPositivos = 0;
	int contCeros = 0;
	int contPares = 0;
	float promPositivos;
	float promNegativos;
	int diferencia;
	
	do
	{
		printf("Ingrese un numero: ");
		fflush(stdin);
		scanf("%d",&numero);
		
		if(numero >= 0)
		{
			acumPositivos += numero;
			contPositivos ++;
			if(numero == 0)
			{
				contCeros ++;
			}
		}
		else
		{
			acumNegativos += numero;
			contNegativos ++;
		}
		
		
		if(numero % 2 == 0)
		{
			contPares ++;
		}
			
		printf("Desea ingresar otro numero? s / n: ");
		fflush(stdin);
		scanf("%c",&seguir);
	}while(seguir == 's');
	
	printf("El size de numero es %d\n",sizeof(numero));
	
	promPositivos = (float)acumPositivos / contPositivos;
	promNegativos = (float)acumNegativos / contNegativos;
	diferencia = contPositivos - contNegativos;
	
//1-Suma de los negativos. 
	printf("\nLa suma de los negativos es %d",acumNegativos);

//2-Suma de los positivos. 
	printf("\nLa suma de los positivos es %d",acumPositivos);
//3-Cantidad de positivos. 
	printf("\nLa cantidad de positivos es %d",contPositivos);
//4-Cantidad de negativos.
	printf("\nLa cantidad de negativos es %d",contNegativos);
//5-Cantidad de ceros.
	printf("\nLa cantidad de ceros es %d",contCeros);
//6-Cantidad de números pares. 
	printf("\nLa cantidad de pares es %d",contPares);
//7-Promedio de positivos.
	printf("\nEl promedio de positivos es %.2f",promPositivos);
//8-Promedios de negativos.
	printf("\nEl promedio de negativos es %.2f",promNegativos);
//9-Diferencia entre positivos y negativos, (positvos-negativos)
	printf("\nLa diferencia entre positivos y negativos es %d",diferencia);

	return EXIT_SUCCESS;
}
