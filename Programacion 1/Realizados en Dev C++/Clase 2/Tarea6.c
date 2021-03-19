/*Ejercicio 2-3:
Debemos alquilar el servicio de transporte 
para llegar a Mar del Plata con un grupo de personas, 
de cada persona debemos obtener los siguientes datos:
número de cliente,
estado civil ('s' para soltero", 'c' para casado o 'v' viudo),
edad( solo mayores de edad, más de 17),
temperatura corporal (validar por favor)
y sexo ('f' para femenino, 'm' para masculino, 'o' para no binario).
NOTA: el precio por pasajero es de $600.
Se debe informar (solo si corresponde):
a) La cantidad de personas con estado "viudo" de más de 60 años.
b) el número de cliente y edad de la mujer soltera más joven.
c) cuánto sale el viaje total sin descuento.
d) si hay más del 50% de los pasajeros que tiene más de 60 años , 
el precio final tiene un descuento del 25%, 
que solo mostramos si corresponde.
*/
#include <stdio.h>
#include <stdlib.h>
#define PRECIO 600;

int main()
{
    setbuf(stdout, NULL);
    
    int numCliente;
    char estadoCivil;
    int edad;
    int temperatura;
    char sexo;
    char seguir;
    int contViudos = 0;
    int flag = 1;
    int min;
    int pasajeros = 0;
    int precioBruto;
    int descuento;
    int contMayores = 0;
    int clienteMenor;
    float precioFinal;
    int porcentaje;
    
    do{
    
    printf("Ingrese el número de cliente: ");
    fflush(stdin);
    scanf("%d",&numCliente);
    
    printf("Ingrese el estado civil ('s' para soltero, 'c' para casado o 'v' viudo): ");
    fflush(stdin);
    scanf(" %c", &estadoCivil);
    while(estadoCivil != 's' && estadoCivil != 'c' && estadoCivil != 'v')
    {
    printf("Error. Ingrese el estado civil ('s' para soltero, 'c' para casado o 'v' viudo): ");
    fflush(stdin);
    scanf("%c", &estadoCivil);
    }
    printf("Ingrese la edad: ");
    fflush(stdin);
    scanf("%d",&edad);
    while(edad < 18)
    {
    printf("Error. Ingrese la edad: ");
    fflush(stdin);
    scanf("%d",&edad);
    }
    printf("Ingrese el sexo:'f' para femenino, 'm' para masculino, 'o' para no binario: ");
    fflush(stdin);
    scanf("%c", &sexo);
    while(sexo != 'f' && sexo != 'm' && sexo != 'o')
    {
    printf("Error. Ingrese el sexo:'f' para femenino, 'm' para masculino, 'o' para no binario: ");
    fflush(stdin);
    scanf("%c", &sexo);
    }
    pasajeros ++;
    precioBruto = pasajeros * PRECIO;
    
    if(estadoCivil == 'v' && edad > 60)
    {
    contViudos++;
    }
    
    if(sexo == 'f' && (flag || edad < min))
    {
    min = edad;
    clienteMenor = numCliente;
    flag = 0;
    }
    
    if(edad > 60)
    {
    contMayores++;
    }
    
    porcentaje = (100 / pasajeros) * contMayores;
    
    printf("Desea ingresar otro pasajero? ('s' para si, 'n' para no) ");
    fflush(stdin);
    scanf("%c", &seguir);
    while(seguir != 's' && seguir != 'n')
    {
    printf("Error. Desea ingresar otro pasajero? ('s' para si, 'n' para no) ");
    fflush(stdin);
    scanf("%c", &seguir);	
	}
    }while(seguir == 's');
    
    printf("Edad min %d",min);
    printf("Nro cliente min %d",clienteMenor);
    
    if(porcentaje >= 50)
    {
    descuento = 25;
    }
    else
    {
    descuento = 0;
    }
    
    //a) La cantidad de personas con estado "viudo" de más de 60 años. 
    if(contViudos > 0)
    {
    printf("\nLa cantidad de viudos mayores es: %d", contViudos);
    }
    else
    {
    printf("\nNo se ingresaron mayores viudos");
    }
    
    //b) el número de cliente y edad de la mujer soltera más joven.
    if(min > 0)
    {
    printf("\nLa edad de la mujer más joven es %d y su numero de cliente es %d", min, clienteMenor);
    }
    else
    {
    printf("\nNo se ingresaron mujeres");
    }
    
    //c) cuánto sale el viaje total sin descuento.
    printf("\nEl precio es: $%d", precioBruto);
    
    //d) si hay más del 50% de los pasajeros que tiene más de 60 años , el precio final tiene un descuento del 25%, que solo mostramos si corresponde.
    if(descuento != 0)
    {
    precioFinal = (float)precioBruto - precioBruto * descuento/100;
    printf("\nEl precio con descuento es %.2f", precioFinal);
    }
    else
    {
    printf("\nNo corresponde el descuento");
    }
    
    return EXIT_SUCCESS;
}
