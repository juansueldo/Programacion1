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
	setbuf(stdout, NULL);
	int num1;
	int num2;
	int suma;
	int ejercicio;
	
	printf("Que ejercicio desea realizar? <1,2,3,4>: ");
	scanf("%d",&ejercicio);
	while (ejercicio < 1 || ejercicio > 4)
	{
		printf("Error. Que ejercicio desea realizar? <1,2,3,4>: ");
		scanf("%d",&ejercicio);
	}
	switch(ejercicio)
	{
		case 1:
			printf("\nIngrese un numero: ");
			scanf("%d",&num1);
			
			printf("\nIngrese un numero: ");
			scanf("%d",&num2);
			
			suma = sumar1(num1, num2);
			printf("\nLa sumar 1 es: %d",suma);
			break;
		case 2:
			suma = sumar2();
			printf("\nLa sumar 2 es: %d",suma);
			break;
		case 3:
			printf("\nIngrese un numero: ");
			scanf("%d",&num1);
			
			printf("\nIngrese un numero: ");
			scanf("%d",&num2);
			
			sumar3(num1,num2);
			break;
		case 4:
			sumar4();
			break;
	}
	
  return EXIT_SUCCESS;
}
int sumar1 (int numero1, int numero2)
{
	int sumar;
	sumar = numero1 + numero2;
	return sumar;
}
int sumar2 (void)
{
	int numero1;
	int numero2;
	int sumar;
	
	printf("\nIngrese un numero: ");
	scanf("%d",&numero1);
	
	printf("\nIngrese un numero: ");
	scanf("%d",&numero2);
	
	sumar = numero1 + numero2;
	return sumar;
}
void sumar3 (int numero1, int numero2)
{
	int sumar;
	sumar = numero1 + numero2;
	
	printf("\nLa sumar 3 es: %d",sumar);
}
void sumar4 (void)
{
	int numero1;
	int numero2;
	int sumar;
	
	printf("\nIngrese un numero: ");
	scanf("%d",&numero1);
	
	printf("\nIngrese un numero: ");
	scanf("%d",&numero2);
	
	sumar = numero1 + numero2;
	printf("\nLa sumar 4 es: %d",sumar);
}

