/*Ejercicio 3:
Realizar el algoritmo que permita ingresar los datos de los alumnos de una
división de la UTN FRA, los datos solicitados son:
Legajo
Tipo cursada(L: &quot;libre&quot; - P: &quot;presencial&quot; – R: &quot;remota&quot;)
Cantidad de materias( mas de cero y menos de 8)
Sexo (F: “femenino” – M: “masculino” , O: “no binario”)
Nota promedio (entre 0 y 10)
Edad (validar)
Se debe informar de existir, o informar que no existe , en el caso que
corresponda.
a) El Legajo del mejor promedio que femenino.
b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
c) El promedio de nota por sexo.
d) La edad y legajo del que cursa más materias. (Sin importar su género)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    setbuf(stdout, NULL);
    
    int legajo; 
    char cursada; 
    int cantidadMaterias; 
    char sexo; 
    int notaPromedio; 
    int edad; 
    int promMaxFemenino;
    int legajoMaxFemenino;
    int flag = 1;
    int flagT = 1;
    int flagM = 1;
    int acumNotaMasculino = 0;
    int contMasculino = 0;
    int acumNotaFemenino = 0;
    int contFemenino = 0;
    int acumNotaNB = 0;
    int contNB = 0;
    int edadMenorMasculino;
    int legajoMenorMaculino;
    int mayorCantMaterias;
    int edadCantMaterias;
    int legajoCantMaterias;
    char seguir;
    float promFemenino;
    float promMasculino;
    float promNB;
    
    do{
    
    printf("\nIngrese el numero de legajo: ");
    fflush(stdin);
    scanf("%d",&legajo);
    
    printf("\nIngrese el tipo cursada ('l': libre, 'p': presencial, 'r': remota): ");
    fflush(stdin);
    scanf("%c", &cursada);
    while(cursada != 'l' && cursada != 'p' && cursada != 'r')
    {
    printf("\nError. Ingrese el tipo cursada ('l': libre, 'p': presencial, 'r': remota): ");
    fflush(stdin);
    scanf("%c", &cursada);
    }
    
    printf("\nIngrese la edad: ");
    fflush(stdin);
    scanf("%d",&edad);
    while(edad < 18)
    {
    printf("\nError. Ingrese la edad: ");
    fflush(stdin);
    scanf("%d",&edad);
    }
    
    printf("\nIngrese el sexo:'f' para femenino, 'm' para masculino, 'o' para no binario: ");
    fflush(stdin);
    scanf("%c", &sexo);
    while(sexo != 'f' && sexo != 'm' && sexo != 'o')
    {
    printf("\nError. Ingrese el sexo:'f' para femenino, 'm' para masculino, 'o' para no binario: ");
    fflush(stdin);
    scanf("%c", &sexo);
    }
    
    printf("\nIngrese la nota promedio: ");
    fflush(stdin);
    scanf("%d", &notaPromedio);
    while(notaPromedio < 0 || notaPromedio > 10)
    {
    	printf("\nError. Ingrese la nota promedio: ");
    	fflush(stdin);
    	scanf("%d", &notaPromedio);
	}
	
	printf("\nIngrese la cantidad de materias: ");
    fflush(stdin);
    scanf("%d", &cantidadMaterias);
    while(cantidadMaterias < 0 || cantidadMaterias > 8)
    {
    	printf("\nError. Ingrese la cantidad de materias: ");
    	fflush(stdin);
    	scanf("%d", &cantidadMaterias);
	}
	
	switch(sexo)
	{
	
		case 'f':
			acumNotaFemenino = acumNotaFemenino + notaPromedio;
			contFemenino ++;
			if(flag == 1 || notaPromedio > promMaxFemenino)
			{
				promMaxFemenino = notaPromedio;
				legajoMaxFemenino = legajo;
				flag = 0;
			}
			break;
		case 'm':
			acumNotaMasculino = acumNotaMasculino + notaPromedio;
			contMasculino ++;
			if((cursada == 'l') && (flagM == 1 || edad < edadMenorMasculino))
			{
				edadMenorMasculino = edad;
				legajoMenorMaculino = legajo;
				flagM = 0;
			}
			break;
		case 'o':
			acumNotaNB = acumNotaNB + notaPromedio;
			contNB ++;
			break;
	}
	
	
	printf("Desea ingresar otro alumno? 's' o 'n': ");
	fflush(stdin);
	scanf("%c", &seguir);
	
}while(seguir == 's');
	if(flagT == 1 || cantidadMaterias > mayorCantMaterias);
	{
		mayorCantMaterias = cantidadMaterias;
		edadCantMaterias = edad;
		legajoCantMaterias = legajo;
		flagT = 0;
	}
//a) El Legajo del mejor promedio que femenino.
	if(promMaxFemenino)
	{
	printf("\nEl legajo del mejor promedio femenino es: %d",legajoMaxFemenino);
	}
	else
{
	printf("\nNo se ingresaron alumnas de sexo femenino");
	}
	//b) El legajo del más joven de los alumnos masculinos entre los que dan libre.
	if(edadMenorMasculino)
	{
		printf("\nEl legajo alumno mas joven masculino que rinde libre es: %d",legajoMenorMaculino);
	}
	else
	{
		printf("\nNo se ingresaron alumnos de sexo masculino que rinden libre");
	}
	//c) El promedio de nota por sexo.
	if(acumNotaFemenino != 0)
	{
		promFemenino = (float)acumNotaFemenino / contFemenino;
		printf("\nEl promedio de nota del sexo femenino es: %.2f", promFemenino);
	}
	else
	{
		printf("\nNo se ingresaron alumnas de sexo femenino");
	}
	
	if(acumNotaMasculino != 0)
	{
		promMasculino = (float)acumNotaMasculino / contMasculino;
		printf("\nEl promedio de nota del sexo masculino es: %.2f", promMasculino);
	}
	else
	{
		printf("\nNo se ingresaron alumnos de sexo masculino");
	}
	if(acumNotaNB != 0)
	{
		promNB= (float)acumNotaNB / contNB;
		printf("\nEl promedio de nota del sexo no binario es: %.2f", promNB);
	}
	else
	{
		printf("\nNo se ingresaron alumnos de sexo no binario");
	}
	//d) La edad y legajo del que cursa más materias. (Sin importar su género)
	if(mayorCantMaterias)
	{
		printf("\nLa edad %d y el legajo %d pertenecen a la persona que cursa mas materias",edadCantMaterias,legajoCantMaterias);
	}
	else
	{
		printf("\nNo se ingresaron alumnos");
	}
	return EXIT_SUCCESS;
}
	
	
