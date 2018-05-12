/**
 * @brief Funcion Buscar DNI.-
 * @param Realiza la busqueda por DNI de las personas dentro de la estructura.-
 * @param Será utilizada por la función Borrar persona.-
 * @return Devuelve un valor entero.-
 */


#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define TAM 4

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
                printf("\nATENCION!!!---SE ELIMINARAN LOS SIGUIENTES DATOS");
                printf("\nNOMBRE Y APELLIDO: %s", per[i].nombre);
                printf("DNI: %d\n", per[i].dni);
                flag=i;
                break;
            }

        }
  }
  return flag;
}


