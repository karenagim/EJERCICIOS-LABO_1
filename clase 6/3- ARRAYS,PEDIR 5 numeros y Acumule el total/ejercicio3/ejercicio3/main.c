#include <stdio.h>
#include <stdlib.h>
#define TAM 6
//PEDIR 5 NUMEROS Y EN LA ULTIMA CELDA QUE GUARDE LOS NUMEROS
//ACUMULADOS

void mostrarVectorEnteros(int vec[], int tam);
int main()
{
    int numeros[TAM] ={0};

    for(int i=0; i<TAM; i++)
    {
        printf("Ingrese un numero: \n");
        scanf("%d",&numeros[i]);
        numeros[5]= numeros[5] + numeros[i];
        //numeros[5]+= numeros[i];
    }
    mostrarVectorEnteros(numeros,TAM);

    return 0;
}


void mostrarVectorEnteros(int vec[], int tam)
{
    for(int i=0; i<tam; i++)
    {
      printf("%d",vec[i]);
    }
    printf("\n\n");

}
