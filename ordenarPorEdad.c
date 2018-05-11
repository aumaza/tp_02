#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"


#define TAM 3


void ordenEdad (Personas per[], int cant)
{
int i;
int j;

Personas temp[TAM];


for(i=0; i<cant; i++)
{
    for(j=i+1;j<cant;j++)
    {
    if(per[i].edad < per[j].edad)
    {
    temp[i].edad = per[i].edad;
    per[i].edad = per[j].edad;
    per[j].edad = temp[i].edad;

    strcpy(temp[i].nombre,per[i].nombre);
    strcpy(per[i].nombre,per[j].nombre);
    strcpy(per[j].nombre,temp[i].nombre);


    temp[i].dni = per[i].dni;
    per[i].dni = per[j].dni;
    per[j].dni = temp[i].dni;

    }
}
}
        for(i=cant; i>=0; i--)
            {

                printf("\nEDAD: %d", per[i].edad);
                printf("\nNOMBRE: %s", per[i].nombre);
                printf("DNI: %d", per[i].dni);
                printf("\n===============================\n");
            }
}
