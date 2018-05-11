#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 3


void ordenarAlfabetico(Personas per[],int cant)
{
int i;
int j;
Personas aux[TAM];

for(i=0;i<cant-1;i++)
{
    for(j=i+1;j<cant;j++)
    {
        if(strcmp(per[i].nombre,per[j].nombre)>0)
        {
            strcpy(aux[i].nombre,per[i].nombre);
            aux[i].edad=per[i].edad;
            aux[i].dni=per[i].dni;
            //aux[i].estado=per[i].estado;
            strcpy(per[i].nombre,per[j].nombre);
            per[i].edad=per[j].edad;
            per[i].dni=per[j].dni;
            //lista[i].estado=lista[j].estado;
            strcpy(per[j].nombre,aux[i].nombre);
            per[j].edad=aux[i].edad;
            per[j].dni=aux[i].dni;
            //lista[j].estado=aux[i].estado;
        }
    }
}
        //orden ascendente

        for(i=0; i<cant; i++)
        {
            printf("%i. NOMBRE: %s", i+1, per[i].nombre);
            printf("%i. EDAD: %d", i+1, per[i].edad);
            printf("\n%i. DNI: %d", i+1, per[i].dni);
            printf("\n===============================\n");
        }


}
