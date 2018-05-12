/**
 * @brief Funcion Ordenar Alfabeticamente.-
 * @param Recibe como parametro la lista de personas y las ordenará alfabeticamente.-
 * @param
 * @return No devuelve un valor entero.-
 */


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 4


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
            aux[i].id=per[i].id;
            strcpy(aux[i].nombre,per[i].nombre);
            aux[i].edad=per[i].edad;
            aux[i].dni=per[i].dni;
            aux[i].est=per[i].est;

            aux[i].id=aux[j].id;
            strcpy(per[i].nombre,per[j].nombre);
            per[i].edad=per[j].edad;
            per[i].dni=per[j].dni;
            aux[i].est=per[j].est;

            aux[j].id=aux[i].id;
            strcpy(per[j].nombre,aux[i].nombre);
            per[j].edad=aux[i].edad;
            per[j].dni=aux[i].dni;
            per[j].est=aux[i].est;
        }
    }
}
        //orden ascendente

        for(i=0; i<cant; i++)
        {
            if(per[i].est == 1)
        {

            printf("%i. REGISTRO Nº: %d", i+1, per[i].id);
            printf("\n%i. ESTADO: %d", i+1, per[i].est);
            printf("\n%i. NOMBRE Y APELLIDO: %s", i+1, per[i].nombre);
            printf("%i. EDAD: %d", i+1, per[i].edad);
            printf("\n%i. DNI: %d", i+1, per[i].dni);
            printf("\n===============================\n");
        }
}
}
