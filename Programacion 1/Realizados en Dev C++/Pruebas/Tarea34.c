/*Ejercicio 3-4:
Realizar un programa en donde se puedan utilizar los prototipos de la función Sumar en sus 4 combinaciones.
int Sumar1(int, int);
int Sumar2(void);
void Sumar3(int, int);
void Sumar4(void);*/

#include <stdio.h>
#include <stdlib.h>

int sumar1 (int num1, int num2);
int sumar2 (void);
void sumar3 (int num1, int num2);
void sumar4 (void);

int main ()
{
	int numero1;
	int numero2;
	int resultado;
	int funcion;
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero1); 
	
	printf("Ingrese un numero: ");
	scanf("%d",&numero2); 
	
	printf("Que funcion quiere ejecutar 1,2,3,4: ");
	scanf("%d",&funcion);
	while(funcion < 1 || funcion > 4)
	{
		printf("Error. Que funcion quiere ejecutar 1,2,3,4: ");
		scanf("%d",&funcion);
	}
	switch(funcion)
	{
		case 1:
			 
			resultado = sumar1 (numero1, numero2);
	
			printf("\nEl resultado de sumar1: %d",resultado);
			break;
		case 2:
			printf("Ingrese un numero: ");
			scanf("%d",&numero1); 
	
			printf("Ingrese un numero: ");
			scanf("%d",&numero2);
			int sumar2()
			{
				resultado = numero1 + numero2;
				return resultado;	
			}
			printf("\nEl resultado de sumar2: %d",sumar2());
			break;
		case 3:
			sumar3(numero1,numero2);
			break;
		case 4:
			
			printf("Ingrese un numero: ");
			scanf("%d",&numero1); 
	
			printf("Ingrese un numero: ");
			scanf("%d",&numero2);
			
			void sumar4 (void);
			{
			int resultado;
			resultado = numero1 + numero2;	
			printf("\nEl resultado de sumar4: %d",resultado);
			}
			
			
			break;
	}
	
	return EXIT_SUCCESS;
}
int sumar1 (int num1, int num2)
{
	int suma;
	suma = num1 + num2;
	return suma;
}
void sumar3 (int num1, int num2)
{
	int suma;
	suma = num1 + num2;
	printf("\nEl resultado de sumar3: %d",suma);
}
