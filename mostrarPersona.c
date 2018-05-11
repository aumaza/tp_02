#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 3


void mostrarPersonas (Personas per[], int cant)
{
int i;

for(i=0; i<cant; i++)
{
printf("%i. REGISTRO Nº: %d", i+1, per[i].id);
printf("\n%i. NOMBRE Y APELLIDO: %s", i+1, per[i].nombre);
printf("%i. EDAD: %d\n", i+1, per[i].edad);
printf("%i. DNI: %d\n", i+1, per[i].dni);
printf("\n===============================\n");
}
}
