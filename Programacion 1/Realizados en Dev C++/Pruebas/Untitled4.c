/*Realizar el algoritmo que permita ingresar los datos de los alumnos de una division de la UTN FRA, los datos solicitados son:
nombre
situcación laboral ("buscando" , "trabajando" o "solo estudiante")
cantidad de materias( mas de cero y menos de 8)
Sexo ( femenino , masculino , no binario)
Nota promedio (entre 0 y 10)
edad (validar)
se debe informar de existir, o informar que no existe , en el caso que corresponda.
a) El nombre del mejor promedio solo de los estudiantes
b) El nombre del mas viejo de los alumnos que solo sea estudiantes
c) El promedio de nota por situacion laboral
d) La edad y nombre del que cursa menos cantidad de materias y que este buscando trabajo*/

#include <stdio.h>
#include <stdlib.h>

int dividir (float*direccion, int operador1, int operador2);

int main(void)
{
    setbuf(stdout, NULL);
    int num1;
    int num2;
    int respuesta;
    float resultado;

    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);

    printf("Ingrese el primer numero: ");
    scanf("%d",&num2);

    respuesta = dividir (&resultado, num1, num2);
    if(respuesta == 0)
    {
        printf("El resultado %.2f\n",resultado);
    }
    else
    {
        printf("No es posible dividir por cero\n");
    }

    return EXIT_SUCCESS;
}
int dividir (float*direccion, int operador1, int operador2)
{
    float resul;
    int retorno = -1;
    if(direccion != NULL && operador2 != 0)
    {
    	resul = (float)operador1 / operador2;	
    	*direccion = resul;
    	retorno = 0;
	}
   	return retorno;
}

