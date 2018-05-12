/**
 * @brief Funcion Iniciar Registro
 * @param Con esta funcion se inicialara cada registro en '1'.
 * @param De esta manera sabremos que está sin usar.-
 * @return Devuelve un valor entero.-
 */



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 4

int initRegPer(Personas per[],int lim)
{
   int i;
   int retorno=-1;
   if(lim > 0 && per != NULL)
   {
       for(i=0;i<lim;i++)
       {
           retorno=0;
           per[i].est=OFF;
           //per[i].dni=ON;
        }
   }
    return retorno;
}
