/**
 * @brief Funcion Pedir Dato.-
 * @param Nos solicitar� el ingreso del DNI.
 * @param Est� funcion es utilizada por la funcion Borrar Persona.-
 * @return Devuelve un valor entero.-
 */


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

int pideDato ()

{
    int dni;

    printf("\nIngrese el DNI a buscar: ");
    scanf("%d", &dni);

return dni;

}
