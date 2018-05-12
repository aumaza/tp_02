/**
 * @brief Funcion Borrar un Registro
 * @param Recibe como primer parametro la estructura Personas y como segundo parametro un valor entero
 * @param busca en el array, buscando el dni, si lo encuentra nos avisa que persona es y la borra de manera logica
 * @return No devuelve valor.
 */




#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 4


void borrarPersona(Personas per[],int dni)
{
    int i;
    int index;


    i = pideDato();
    index = buscaDni(per,i);

   if(index !=-1)
    {
        per[index].est=ON;
        per[index].dni=ON;
        printf("\nEL REGISTRO HA SIDO ELIMINADO.-\n\n\n\n");
    }

    else
    {
      printf("Persona no encontrada!!!\n");

     }

}
