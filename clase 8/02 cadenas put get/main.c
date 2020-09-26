#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[5];
    char auxCad[100];a

    printf("Ingrese nombre : ");
    fflush(stdin);
    gets(auxCad);

    while( strlen(auxCad) >=5)
    {
        printf("Nombre demasiado largo.- Reingrese nombre: ");
        fflush(stdin);
        gets(auxCad);
    }
    strcpy(nombre, auxCad);
    printf("nombre");

    //scanf(
    fgets(cadena,20,stdin);

    printf("%s\n",nombre);
    return 0;
}
