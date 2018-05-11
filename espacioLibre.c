#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"


#define ON 0
#define OFF 1
#define TAM 3


int espacioLibre(Personas per[], int lim)
{
int i;
//int lim;
int pos;

if(lim>0 && per !=NULL)
{
    for(i=0; i<lim; i++)
    {
        if(per[i].est==ON)
        {
            pos=i;
            break;
        }
    }
}
 return pos;
}
