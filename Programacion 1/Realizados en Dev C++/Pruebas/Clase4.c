#include <stdio.h>
#include <stdlib.h>

float dividir (float*direccion, int operador1, int operador2);

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
        printf("El resultado %f\n",resultado);
    }
    else
    {
        printf("No es posible dividir por cero\n");
    }

    return EXIT_SUCCESS;
}
float dividir (float*direccion, int operador1, int operador2)
{
    float resul;
    int huboError;
    if(operador2 != 0)
    {
        resul = (float)operador1 / operador2;
        (*direccion) = resul;
        huboError = 1;
    }
    else
    {
        huboError = 0;
    }
    return huboError;
}
