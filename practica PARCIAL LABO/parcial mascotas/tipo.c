#include "tipo.h"


int tipo_PrintName(char descripcion[], int idTipo, Tipo listaTipos[], int tamTipos)
{
    int todoOk = -1;
    for(int i=0; i<tamTipos; i++)
    {
        if(listaTipos[i].id == idTipo)
        {
            strcpy(descripcion, listaTipos[i].descripcion);
            todoOk = 1;
        }
    }
    return todoOk;
}
