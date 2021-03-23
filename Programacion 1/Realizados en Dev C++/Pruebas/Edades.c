/*Al ingresar una edad debemos informar si la persona es mayor de edad (mas de 18 años)
o adolescente (entre 13 y 17 años) o niño (menor a 13 años).*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	setbuf(stdout, NULL);
	int edad;
	
	printf("Ingrese la edad: ");
	scanf("%d", &edad);
	
	if(edad < 13 && edad > 0)
	{
		printf("Es un nino");
	}
	else if(edad >= 13 && edad < 18)
	{
		printf("Es un adolescente");
	}
	else
	{
		printf("Es un adulto");
	}
	
	return EXIT_SUCCESS;
}


