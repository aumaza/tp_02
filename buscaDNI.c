#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define TAM 3

int buscaDni (Personas per[], int dni)

{

int i;
int flag=-1;
int TAMANIO=20;

    if(per!=NULL)
  {
        for(i=0;i<TAMANIO;i++)
        {
            if(dni==per[i].dni)
            {
                printf("La persona buscada es:");
                printf("\n%d %s %d\n",per[i].dni,per[i].nombre,per[i].est);
                flag=i;
                break;
            }

        }
  }
  return flag;
}


