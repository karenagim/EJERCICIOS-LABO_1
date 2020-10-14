#include <stdio.h>
#include <stdlib.h>
#define TAM 5
///PEDIR 5 NUMEROS Y MOSTRAR EL PROMEDIO
//FUNCIONA!

int main()
{
    int numeros[TAM];
    int sumatoria=0;
    float promedio;

    for(int i=0; i<TAM;i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d",&numeros[i]);
    }
    for(int i=0; i<TAM ;i++)
    {
        sumatoria= sumatoria+numeros[i];
    }
    promedio= (float)sumatoria/TAM;
    printf("El promedio es %.2f",promedio);
    return 0;
}
