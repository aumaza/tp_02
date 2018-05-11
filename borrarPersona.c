#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 3


void borrarPersona(Personas per[],int dni)
{
    int i;
    int index;
    char resp='S';

    i = pideDato();
    index = buscaDni(per,i);
   if(index!=-1)
    {
    printf("\nConfirma la baja (S/N): ");
    scanf("%s",&resp);
    resp=toupper(resp);
    }

  if((index!=-1) && (resp='S'))
    {
       per[index].est=0;
    }
    else
    {
      printf("Persona no encontrada!!!");
     }

}
