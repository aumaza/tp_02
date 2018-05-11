#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
#define TAM 3


void cargarPersona (Personas per[], int cant)
{
int i;
espacioLibre(per,TAM);

for(i=0; i<cant; i++)
{
printf("\nIngrese Id Persona: ");
scanf("%d", &per[i].id);
getchar();


printf("Ingrese el nombre: ");
fflush(stdin);
fgets(per[i].nombre, 20, stdin);


printf("Ingrese edad: ");
scanf("%d", &per[i].edad);

printf("Ingrese DNI: ");
scanf("%d", &per[i].dni);
}
system("clear");
}
