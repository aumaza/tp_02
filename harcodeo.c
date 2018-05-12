/**
 * @brief Funcion Harcodeo.-
 * @param Se cargaran los datos en la estructura.-
 * @param
 * @return No devuelve valor.-
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

void harcodeo (Personas per[], int cant)

{

int i;
int id[TAM]={1,2,3,4};
char nombre[TAM][20]={"juan","maria","marcos","eber"};
int edad[TAM]={17,14,36,22};
int dni[TAM]={30258963,24789632,45789369,15789963};
int est[TAM]={1,1,1,1};


for(i=0; i<cant; i++)
{

    per[i].id=id[i];
    strcpy(per[i].nombre,nombre[i]);
    per[i].edad = edad[i];
    per[i].dni= dni[i];
    per[i].est = est[i];


}
}
