#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char nombre[20];
    char apellido[20];
    char nombreCompleto[41];

    printf("Ingrese nombre: ");
    fflush(stdin);
    gets(nombre); //"JUaN luiS"

    printf("Ingrese apellido: ");
    fflush(stdin);
    gets(apellido); //"pERez GARcia"

    //agrego primero el apellido
    strcpy(nombreCompleto,apellido); //pERez GARcia
    //agrego la coma y el espacio
    strcat(nombreCompleto,", ");
    //agrego primero el nombre
     strcat(nombreCompleto,nombre);///"pERez GARcia,JUaN luiS"


    strlwr(nombreCompleto);
    nombreCompleto[0] = toupper(nombreCompleto[0]);

    int length = strlen(nombreCompleto);

    for(int i=0; i<length;i++)
    {
        if(nombreCompleto[i]== ' ')
        {
                nombreCompleto[i+1] = toupper(nombreCompleto[0]);

        }
    }
    //"Perez Garcia, Juan Luis"
    printf("%s\n",nombreCompleto);

    /* Si no conocemos el largo de la cadena/*
    int i=0;
    while( isspace(nombreCompleto[i])==1) //nombreCompleto[i] != '\0'
    {
        if(nombreCompleto[i]== ' ')
        {
            nombreCompleto[i+1] = toupper(nombreCompleto[0]);
        }
        i++;
    }

 return 0;
}
