#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"


#define TAM 3



void graficarEdades (Personas per[], int cant)

{

 int i;
 int j;
 int vcont[4];
 int min=0;
 int entre=0;
 int may=0;
 int max;

 for(i=0;i<4;i++)
 {
     vcont[i]=0;
 }

    if(cant>0 && per!=NULL)
    {
        for(i=0;i<cant;i++)
        {
            if(per[i].edad <18 && per[i].edad > 0)

                {
                min++;
                }

            if(per[i].edad >=19 && per[i].edad <=35)

            {
                entre++;
            }

            else if(per[i].edad >35 && per[i].edad <100)

            {
                may++;
            }

        }
    }

//SE GRAFICA DESDE VECTOR QUE CONTIENE RANGO DE EDAD
//SE INICIA VECTOR AUXILIAR "aux"

int aux[3]={min,entre,may};

for(i=0;i<3;i++)
{
    vcont[i]=aux[i];
    }

 max=vcont[0];

      for(i=0;i<3;i++)
      {
          if(vcont[i]>max)
          {
              max=vcont[i];
          }
      }

     for(i=max;i>0;i--)
      {
         for(j=0;j<3;j++)
         {
            if(vcont[j] >=i)
            {
                 printf("      *");
            }
            else{
            printf("   ");
            printf("\n");
            }
        }

      }

printf("\n    <18--->19<35--->35\n\n");
printf("================================\n");
printf("\nGráfico de edades en Columnas\n");
printf("================================\n");

}

