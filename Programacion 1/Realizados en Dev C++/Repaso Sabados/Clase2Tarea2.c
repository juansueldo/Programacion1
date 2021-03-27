/*Realizar un programa que permita el ingreso de 10 números enteros.
Determinar el promedio de los positivos, la cantidad de ceros y de los
negativos la suma de los antecesores.
Nota:
Utilizar la función del punto anterior y desarrollar funciones para resolver los
procesos que están resaltados.*/

#include <stdio.h>
#include <stdlib.h>

int numeroIngresado (int operador);
float positivos (int operador1, int operador2);
int negativos (int operador);
int ceros (int operador);

int main ()
{
	setbuf(stdout, NULL);
	int numero;
	int mostrar;
	int i;
	int acumPositivos = 0;
	int contPositivos = 0;
	int acumNegativos = 0;
	int acumMenor = 0;
	float promPositivos;
	int flag = 1;
	int sumaNegativos;
	int menor;
	int acumMenores = 0;
	int cantidadCeros = 0;
	
	
	for(i = 0; i < 10; i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d",&numero);
		
		mostrar = numeroIngresado(numero);
		switch (mostrar)
		{
		case 1:
			acumPositivos += numero;
			contPositivos ++;
			break;
		case -1:
			if(flag == 1 || numero < menor)
			{
			menor = numero;
			acumMenores += menor;
			flag = 0;
			}	
			break;
		case 0:
			cantidadCeros ++;
			break;
	}
		promPositivos = positivos(acumPositivos,contPositivos);	
		
		sumaNegativos = negativos(acumMenores);
	
	}
	printf("\nEl promedio de los positivos es: %.2f",promPositivos);
	printf("\nLa suma de negativos es: %d",sumaNegativos);
	printf("\nLa cantidad de ceros es: %d",cantidadCeros);
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
float positivos (int operador1, int operador2)
{
	float promedio;
	
	promedio = (float) operador1 / operador2;
	
	return promedio;	
}
int negativos (int operador)
{
	int acumNegativos = 0;
	acumNegativos += operador;
	return acumNegativos;
}

