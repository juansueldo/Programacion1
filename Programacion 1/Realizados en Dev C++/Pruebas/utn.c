/*
*utn.h
*
*
*
*/

#include <stdio.h>
#include <stdlib.h>

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
