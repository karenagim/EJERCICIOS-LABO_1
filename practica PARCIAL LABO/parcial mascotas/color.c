#include "color.h"
#include <string.h>


int color_PrintName(char descripcion[], int idColor, Color listaColor[], int tamCol)
{
    int todoOk = -1;
    for(int i=0; i<tamCol; i++)
    {
        if(listaColor[i].id == idColor)
        {
            strcpy(descripcion, listaColor[i].nombreColor);
            todoOk = 1;
        }
    }
    return todoOk;
}
