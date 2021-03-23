/*Ejercicio 2-2:
Ingresar 10 números enteros, distintos de cero. Mostrar:
Cantidad de pares e impares.
El menor número ingresado.
De los pares el mayor número ingresado.
Suma de los positivos.
Producto de los negativos.
 */
 //Alumno Juan Sueldo 1E

#include <stdio.h>
#include <stdlib.h>

int main(void) {

	setbuf(stdout, NULL);

	int numero;
	int contPares = 0;
	int contImpares = 0;
	int min;
	int flag = 1;
	int maxPar;
	int acumPos = 0;
	int acumNeg = 1;
	int flag2 = 1;
	int i;

	for(i=0; i<10;i++)
	{
		printf("Ingrese un numero: ");
		scanf("%d", &numero);

		if(flag || numero < min)
		{
			min = numero;
			flag = 0;
		}

		if(numero % 2 == 0)
		{
			contPares++;
			if(flag2 || numero > maxPar)
			{
				maxPar = numero;
				flag2 = 0;
			}
		}
		else
		{
			contImpares++;
		}
		if(numero > 0){
			acumPos += numero;

		}
		else
		{
			acumNeg *= numero;
		}
	}
	printf("El menor numero es %d", min);
	printf("\nLa cantidad de pares es %d", contPares);
	printf("\nEl mayor de los pares es %d", maxPar);
	printf("\nLa cantidad de impares es %d", contImpares);
	printf("\nLa suma de los positivos es %d", acumPos);
	if (acumNeg != 1)
	{
		printf("\nEl producto de los negativos es %d", acumNeg);	
	}
	else
	{
		printf("\nNo se ingresaron negativos");
	}


	return EXIT_SUCCESS;
}
