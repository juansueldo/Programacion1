/*Para el departamento de Pinturas:
A. Al ingresar una temperatura en Fahrenheit debemos mostrar
la temperatura en Centígrados con un mensaje concatenado (ej.: " 32 Fahrenheit son 0 centígrados").
B. Al ingresar una temperatura en Centígrados debemos mostrar
la temperatura en Fahrenheit (ej.: "0 centígrados son 32 Fahrenheit ").*/

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	setbuf(stdout, NULL);
	float centigrados;
	float farenheit;
	float pasaje1;
	float pasaje2;
	
	printf("Ingrese la temperatura en centigrados: ");
	scanf("%f",&centigrados);
	
	printf("\nIngrese la temperatura en farenheit: ");
	scanf("%f",&farenheit);
	
	pasaje1 = centigrados * 1.8 + 32;
	pasaje2 = (farenheit - 32) / 1.8;
	
	printf("\n%.2f centigrados equivalen a %.2f farenheit",centigrados,pasaje1);
	printf("\n%.2f farenheit equivalen a %.2f centigrados",farenheit,pasaje2);
}
