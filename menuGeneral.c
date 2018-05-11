#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"


#define TAM 3

void menuGeneral()
{
Personas per[TAM];
int ch;
int ok;
int opc;

initRegPer(per,TAM);

do
{
printf("\nCARGA DE DATOS");
printf("\n===============================");
printf("\n1. Ingresar persona nueva");
printf("\n2. Borrar persona");
printf("\n3. Listar Personas");
printf("\n4. Listar Alfabeticamente");
printf("\n5. Ordenar por Edades");
printf("\n6. Rango de Edades");
printf("\n7. Salir");
printf("\n===============================\n");
//printf("\nOpcion: ");
//scanf("%d", &opc);

   do{
      printf("\nOpción: ");
      fflush(stdout);
      if ((ok = scanf("%d", &opc)) == EOF)
         return EXIT_FAILURE;


      if ((ch = getchar()) != '\n')
      {
         ok = 0;

         while ((ch = getchar()) != EOF && ch != '\n');
      }
   }while (!ok);
printf("\n===============================\n");



switch (opc)
{
case 1: initRegPer(per,TAM);
        cargarPersona(per,TAM); break;
case 2: borrarPersona(per,TAM); break;
case 3: mostrarPersonas(per,TAM); break;
case 4: ordenarAlfabetico(per,TAM); break;
case 5: ordenEdad(per,TAM); break;
case 6: graficarEdades(per,TAM); break;
}
}while(opc!=7);

printf("\nHA DECIDO SALIR.\nHASTA LUEGO.\n");
printf("\n===============================\n");
}
