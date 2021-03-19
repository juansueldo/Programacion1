/*d-Operadores Logicos
Aplicando el concepto de Operadores Lógicos con valores booleanos en el condicional:
Solicitar un número al usuario
Informar si el mismo es par o impar.*/

#include <stdio.h>
#include <stdlib.h>

int resto (int operador);

int main(void)
{
	setbuf(stdout, NULL);
	int numero;
	int result;
	
	printf("Ingrese un numero: ");
	scanf("%d", &numero);
	
	result = resto(numero);
	
	if(result)
	{
		printf("El numero %d es impar",numero);
	}
	else
	{
		printf("El numero %d es par",numero);	
	}

	return EXIT_SUCCESS;
}
int resto (int operador)
{
	int resultado;
	resultado = operador % 2;
	return resultado;
}
