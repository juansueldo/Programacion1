/*b-Entrada/salida
Pedir el sueldo al usuario. Sumarle un 10% e informarle cuál será su sueldo con aumento.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	float sueldo;
	int aumento = 10;
	float nuevoSueldo;
	
	printf("Ingrese el sueldo: $");
	scanf("%f", &sueldo);
	
	nuevoSueldo = (float)sueldo + sueldo * aumento/100;
	
	printf("El nuevo sueldo con aumento sera de $%.2f", nuevoSueldo);
	
	return EXIT_SUCCESS;
}
