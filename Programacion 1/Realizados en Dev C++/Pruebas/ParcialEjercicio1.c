/*Debemos realizar la carga de una compra de 5(cinco) productos de desinfección
de cada una debo obtener los siguientes datos:
el nombre del producto el tipo de producto (validar "ALCOHOL", "IAC" o "QUAT"),
el precio (validar entre 100 y 300),
la cantidad de unidades (no puede ser 0 o negativo y no debe superar las 1000 unidades),
Categoria ("desinfectante", "bactericida", "detergente" ) y el fabricante.
Se debe Informar al usuario lo siguiente:
a) El promedio de cantidad por tipo de producto
b) La categoria con mas cantidad de unidades en total de la compra
c) Cuántas unidades de detergente con precios menos a 200 (inclusive) se compraron en total
d) el fabricante y Categoria del más caro de los productos*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	setbuf(stdout, NULL);
	char tipo[20];
	float precio;
	int cantidad;
	char categoria[20];
	char fabricante[20];
	char seguir;
	
	do
	{
		printf("Ingrese el tipo(alcohol, iac, quat): ");
		fflush(stdin);
		scanf("%s",tipo);
		while(tipo != "alcohol" && tipo != "iac" && tipo != "quat")
		{
			printf("Error. Ingrese el tipo(alcohol, iac, quat): ");
			fflush(stdin);
			scanf("%s",tipo);
		}
		
		printf("\nIngrese el precio(entre 100 y 300): $");
		fflush(stdin);
		scanf("%f",&precio);
		while(precio < 100 || precio > 300)
		{
			printf("\nIngrese el precio(entre 100 y 300): $");
			fflush(stdin);
			scanf("%f",&precio);	
		}
		
		printf("\nIngrese la cantidad(mayor a 0 y no mayor a 1000): ");
		fflush(stdin);
		scanf("%d",&cantidad);
		while(cantidad <= 0 || cantidad > 1000)
		{
			printf("\nIngrese la cantidad(mayor a 0 y no mayor a 1000): ");
			fflush(stdin);
			scanf("%d",&cantidad);
		}
		
		printf("\nIngrese la categoria(desinfectante, bactericida, detergente): ");
		fflush(stdin);
		scanf("%s",categoria);
		while(categoria != "desinfectante" && categoria != "bactericida" && categoria != "detergente")
		{
			printf("\nIngrese la categoria(desinfectante, bactericida, detergente): ");
			fflush(stdin);
			scanf("%s",categoria);
		}
		printf("Ingrese el fabricante: ");
		fflush(stdin);
		scanf("%s",fabricante);
		
		
		printf("Desea ingresar algun dato mas? s/n: ");
		fflush(stdin);
		scanf("%c", seguir);
		
	}while(seguir == 's');
	
	return EXIT_SUCCESS;
}
