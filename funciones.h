#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

typedef struct
{
    int id;
    char nombre[20];
    int edad;
    int dni;
    int est;
}Personas;

void menuGeneral();
void cargarPersona (Personas per[], int cant);
void mostrarPersonas (Personas per[], int cant);
void ordenarAlfabetico (Personas per[], int cant);
int  initRegPer(Personas per[],int lim);
int  espacioLibre(Personas per[], int lim);
void borrarPersona(Personas per[],int cant);
void ordenEdad (Personas per[], int cant);
void graficarEdades (Personas per[], int cant);
int  buscaDni (Personas per[], int cant);
void pideDato ();


#endif // FUNCIONES_H_INCLUDED
