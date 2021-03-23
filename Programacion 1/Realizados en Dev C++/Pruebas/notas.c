/*Al presionar ingresar una nota, validar del 1 al 10  del examen y mostrar:
"EXCELENTE" para notas igual a 9 o 10,
"APROBÓ" para notas mayores a 4,
"Vamos, la proxima se puede" para notas menores a 4*/

#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int nota;
	
	printf("Ingrese la nota: ");
	scanf("%d",&nota);
	while(nota <= 0 || nota > 10)
	{
		printf("Error. Ingrese la nota: ");
		scanf("%d",&nota);
	}
	
	if(nota < 4)
	{
		printf("Vamos, la proxima se puede");
	}
	else if(nota >=4 && nota < 9)
	{
		printf("Aprobo");
	}
	else
	{
		printf("Excelente");
	}
	
	return EXIT_SUCCESS;
}
