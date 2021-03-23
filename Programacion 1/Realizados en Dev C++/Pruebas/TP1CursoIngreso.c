/*1. Para el departamento de facturación:
A. Ingresar tres precios de productos y mostrar la suma de los mismos.
B. Ingresar tres precios de productos y mostrar el promedio de los mismos.
C. ingresar tres precios de productos sumarlos y mostrar precio final (más IVA 21%).*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	setbuf(stdout, NULL);
	float precio;
	int i;
	float acumPrecio = 0;
	int contPrecio = 0;
	float iva = 1.21;
	float promedio;
	float precioFinal;
	
	for(i = 0; i < 3; i++)
	{
		printf("Ingrese el precio: ");
		scanf("%f",&precio);
		
		acumPrecio += precio;
		contPrecio ++;
	}
	
	promedio = (float)acumPrecio / contPrecio;
	precioFinal = (float)acumPrecio * iva;
	
	printf("\nLa suma de los precios es: $%.2f",acumPrecio);
	printf("\nEl promedio de los precios es: $%.2f",promedio);
	printf("\nEl precio con IVA es: $%.2f",precioFinal);
}
