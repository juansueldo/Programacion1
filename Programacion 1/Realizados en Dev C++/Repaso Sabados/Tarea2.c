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
	int cont = 1;
	int numIterMax;
	int numIterMin;
	
	printf("Ingrese un numero:\n");
	scanf("%d",&numero);
	maximo = numero;
	minimo = numero;
	numIterMax = cont;
	numIterMin = cont;
	
	
	for(i = 0; i<4; i++){
		printf("Ingrese un numero:\n");
		scanf("%d",&numero);
		cont ++;
		if(numero > maximo)
		{
			maximo = numero;
			numIterMax = cont;
			
		}
		if(numero < minimo)
		{
			minimo = numero;
			numIterMin = cont;
		}
	}
	printf("El maximo es %d y se ingreso en el orden %d\nEl minimo es %d y se ungreso en el orden %d",maximo,numIterMax, minimo,numIterMin);
	
	return EXIT_SUCCESS;
}
