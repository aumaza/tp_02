#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>
#include "funciones.h"

#define ON 0
#define OFF 1
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
printf("\nIngreso de Datos");
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
case 1: cargarPersona(per,TAM); break;
case 2: borrarPersona(per,TAM); break;
case 3: mostrarPersonas(per,TAM); break;
case 4: ordenarAlfabetico(per,TAM); break;
case 5: ordenEdad(per,TAM); break;
case 6: graficarEdades(per,TAM); break;
}
}while(opc!=7);

printf("\nHa decidido salir.\nHasta luego.\n");
printf("\n===============================\n");
}

//=======================================================
//se declara la funcion para inicialar el registro de personas

int initRegPer(Personas per[],int lim)
{
   int i;
   int retorno=-1;
   if(lim > 0 && per != NULL)
   {
       for(i=0;i<lim;i++)
       {
           retorno=0;
           per[i].est=ON;
        }
   }
    return retorno;
}

//=============================================================
//se declara la funcion para obtener un espacio libre en el array personas

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

//==============================================================
//se define la funcion borrar persona

void borrarPersona(Personas per[],int cant)
{
   int LIBRE=0;
   if(per!=NULL)
        {
        per[cant].est=LIBRE;
        }
}

/*void MostrarUnaPersona(Personas per)
{
    printf("\nNombre: %s  Edad: %d DNI: %d Estado: %d\n",per.nombre, per.edad, per.dni, per.est);
   // printf("------------------------------------------------------\n");
}*/





//==============================================================
//Se define la funcion para la carga de registros de usuarios


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


//========================================================================
//Se define la funcion para mostrar por pantalla los registros de personas cargados

void mostrarPersonas (Personas per[], int cant)
{
int i;

for(i=0; i<cant; i++)
{
printf("%i. REGISTRO Nº: %d", i+1, per[i].id);
printf("\n%i. NOMBRE Y APELLIDO: %s", i+1, per[i].nombre);
printf("%i. EDAD: %d\n", i+1, per[i].edad);
printf("%i. DNI: %d\n", i+1, per[i].dni);
printf("\n===============================\n");
}
}

//=================================================================
//Se define funcion ordenar albabeticamente el registro de personas cargado

void ordenarAlfabetico(Personas per[],int cant)
{
int i;
int j;
Personas aux[TAM];

for(i=0;i<cant-1;i++)
{
    for(j=i+1;j<cant;j++)
    {
        if(strcmp(per[i].nombre,per[j].nombre)>0)
        {
            strcpy(aux[i].nombre,per[i].nombre);
            aux[i].edad=per[i].edad;
            aux[i].dni=per[i].dni;
            //aux[i].estado=per[i].estado;
            strcpy(per[i].nombre,per[j].nombre);
            per[i].edad=per[j].edad;
            per[i].dni=per[j].dni;
            //lista[i].estado=lista[j].estado;
            strcpy(per[j].nombre,aux[i].nombre);
            per[j].edad=aux[i].edad;
            per[j].dni=aux[i].dni;
            //lista[j].estado=aux[i].estado;
        }
    }
}
        //orden ascendente

        for(i=0; i<cant; i++)
        {
            printf("%i. NOMBRE: %s", i+1, per[i].nombre);
            printf("%i. EDAD: %d", i+1, per[i].edad);
            printf("\n%i. DNI: %d", i+1, per[i].dni);
            printf("\n===============================\n");
        }


}

/*
//==================================================================
//se define la funcion buscar por DNI

int buscarId(Personas per[], int id)
{
    int i;
    int flag=-1;
    int TAMANIO=20;

    if(per!=NULL)
  {
        for(i=0;i<TAMANIO;i++)
        {
            if(id==per[i].id)
            {
                printf("La persona buscada es:");
                printf("\n%s %d %d\n",per[i].nombre, per[i].dni, per[i].est);
                flag=1;
                break;
            }
        }
  }
  return i;
}
*/

//===================================================
//SE DEFINE LA FUNCION ORDENAR POR EDADES

void ordenEdad (Personas per[], int cant)
{
int i;
int j;
//int flag=1;
//char categoria[15];
Personas temp[TAM];

//while(flag == 1)
//{
//flag=0;
for(i=0; i<cant; i++)
{
    for(j=i+1;j<cant;j++)
    {
    if(per[i].edad < per[j].edad)
    {
    temp[i].edad = per[i].edad;
    per[i].edad = per[j].edad;
    per[j].edad = temp[i].edad;

    strcpy(temp[i].nombre,per[i].nombre);
    strcpy(per[i].nombre,per[j].nombre);
    strcpy(per[j].nombre,temp[i].nombre);


    temp[i].dni = per[i].dni;
    per[i].dni = per[j].dni;
    per[j].dni = temp[i].dni;

    //flag=1;
    }
}
}
        for(i=cant; i>=0; i--)
            {

                printf("\nEDAD: %d", per[i].edad);
                printf("\nNOMBRE: %s", per[i].nombre);
                printf("DNI: %d", per[i].dni);
                //printf("\n%i. CATEGORIA: %s", i+1, categoria);
                printf("\n===============================\n");
            }
}

//==============================================================
//SE DEFINE LA FUNCION GRAFICAR CATEGORIAS POR EDADES
//CATEGORIA JUVENIL (MENOR A 18), CATEGORIA JOVEN (MAYOR A 19 Y MENOR A 35) Y CATEGORIA ADULTO (MAYOR A 35)

void graficarEdades (Personas per[], int cant)

{
 int i;
 int j;
 int vecontador[TAM];
 int max;


 for(i=0;i<cant;i++)
 {
     vecontador[i]=0;
     //printf("Contador inicio %d\n",vecontador[i]);
 }

    if(cant>0 && per!=NULL)
    {
        for(i=0;i<cant;i++)
        {
            if(per[i].edad <=18 )
                {
                vecontador[0]=vecontador[0]+1;
                }

            if(per[i].edad >=19 && per[i].edad <=35)
            {
               vecontador[1]=vecontador[1]+1;

            }

            if(per[i].edad >35)
            {
               vecontador[2]=vecontador[2]+1;

            }

        }
    }

  //Busco el mayor
 max=vecontador[0];

      for(i=0;i<cant;i++)
      {
          if(vecontador[i]>max)
          {
              max=vecontador[i];
          }
      }

     for(i=max;i>0;i--)
      {
         for(j=0;j<cant;j++)
         {
            if(vecontador[j] >=i)
            {
                 printf("      *");
            }

            else
	    {
            printf(" ");
            printf("\n");
            }
        }

      }


  //ahora grafico a partir de los vectores que contienen los rangos de edad
 /*for(i=0;i<TAM;i++)
 {
     printf("\n %d %d\n", i, vecontador[i]);
     printf("\n===========================\n");
 }*/
printf("\n\n\n     <18--->19<35--->35\n\n");
printf("\n===========================\n");
}
