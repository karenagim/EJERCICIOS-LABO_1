#ifndef TIPO_H_INCLUDED
#define TIPO_H_INCLUDED
#include <string.h>
typedef struct{

int id; //Comienza en 1000
char descripcion[21];
}Tipo;


int tipo_PrintName(char descripcion[], int idTipo, Tipo listaTipos[], int tamTipos);
#endif // TIPO_H_INCLUDED
