/*2. Para el departamento de Construcción:
A. mostrar la cantidad de alambre a comprar si se ingresara el largo 
y el ancho de un terreno rectangular y se debe alambra con tres hilos de alambre.
B. mostrar la cantidad de alambre a comprar si se ingresara 
el radio de un terreno circular y se debe alambra con tres hilos de alambre.
C. Para hacer un contrapiso de 1m x 1m se necesitan 2 bolsas de cemento 
y 3 de cal, debemos mostrar cuantas bolsas se necesitan de cada uno para las medidas del terreno rectangular.*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	setbuf(stdout, NULL);
	float ancho;
	float largo;
	float radio;
	float perimetro;
	float alambre;
	float area;
	int cemento;
	int cal;
	
	printf("Ingrese el ancho: ");
	scanf("%f",&ancho);
	
	printf("Ingrese el largo: ");
	scanf("%f",&largo);
	
	printf("Ingrese el radio: ");
	scanf("%f",&radio);
	
	if(ancho != 0 && largo != 0)
	{
		perimetro = (ancho*2)+(largo*2);
		alambre = perimetro*3;
		printf("\nSe necesitan %.2f metros de alambre",alambre);
	}
	else
	{
		printf("\nNo se ingreso ningun rectangulo");
	}
	
	if(radio != 0)
	{
		perimetro = 2* radio * 3.14;
		alambre = perimetro * 3;
		printf("\nSe necesitan %.2f metros de alambre", alambre);
	}
	else
	{
		printf("\nNo se ingreso ningun cirulo");
	}
	if(ancho != 0 && largo != 0)
	{
		area = ancho * largo;
		cal = area * 3;
		cemento = area * 2; 
		printf("\nSe necesitan %d bolsas de cemento y %d bolsas de cal",cemento,cal);
	}
	else
	{
		printf("\nNo se ingreso ningun rectangulo");
	}
	
	return EXIT_SUCCESS;
}
