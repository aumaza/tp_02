/**
 * @brief Funcion Mostrar Personas.-
 * @param Listaremos las personas ingresadas dentro de la estructura Personas.-
 * @param Se mostraran de acuerdo al lugar de registro que ocupan en orden Ascendente.-
 * @return No devuelve valor entero.-
 */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 4


void mostrarPersonas (Personas per[], int cant)
{
int i;

for(i=0; i<cant; i++)
{

if(per[i].est == 1)
{
printf("%i. REGISTRO Nro: %d", i+1, per[i].id);
printf("\n%i. ESTADO: %d", i+1, per[i].est);
printf("\n%i. NOMBRE Y APELLIDO: %s", i+1, per[i].nombre);
printf("\n%i. EDAD: %d", i+1, per[i].edad);
printf("\n%i. DNI: %d\n", i+1, per[i].dni);
printf("\n===============================\n");
}
}
}
