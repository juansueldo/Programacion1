/*Ejercicio 2:
Ingresar 5 números. Determinar cuál es el máximo y el mínimo e indicar en
qué orden fue ingresado.*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	setbuf(stdout, NULL);
	
	int numero;
	int maximo;
	int minimo;
	int i;
	
	printf("Ingrese un numero:\n");
	scanf("%d",&numero);
	maximo = numero;
	minimo = numero;
	
	for(i = 0; i<4; i++){
		printf("Ingrese un numero:\n");
		scanf("%d",&numero);
		
		if(numero > maximo)
		{
			maximo = numero;
		}
		if(numero < minimo)
		{
			minimo = numero;
		}
	}
	printf("El maximo es %d y el minimo es %d", maximo, minimo);
	
	return 0;
}
