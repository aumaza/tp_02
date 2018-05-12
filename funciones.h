#ifndef FUNCIONES_H_INCLUDED
/**
 * @brief Cabecera.-
 * @param Incluye todas las funciones necesarias.-
 * @param algunas se las funciones seran comentadas ya que no se utilizaran en este programa.-
 * @return Link a las funciones.-
 */



#define FUNCIONES_H_INCLUDED

typedef struct{
    int id;
    char nombre[20];
    int edad;
    int dni;
    int est;
}Personas;

void harcodeo (Personas per[],int cant);
void menuGeneral();
void cargarPersona (Personas per[], int cant);
void mostrarPersonas (Personas per[], int cant);
void ordenarAlfabetico (Personas per[], int cant);
int  initRegPer(Personas per[],int lim);
//int  espacioLibre(Personas per[], int lim);
void borrarPersona(Personas per[],int cant);
//void ordenEdad (Personas per[], int cant);
void graficarEdades (Personas per[], int cant);
int  buscaDni (Personas per[], int cant);
int  pideDato ();


#endif // FUNCIONES_H_INCLUDED
