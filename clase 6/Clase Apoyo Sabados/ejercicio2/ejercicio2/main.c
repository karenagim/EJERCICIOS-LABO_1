/******************************************************************************

=== Gimenez Karen==

//
1- realizar el pedido de 10 números entre -100 y 100 al usuario y guardarlos en un vector,
luego de ese vector obtén
a- la suma de los números pares
b- que se muestren los números impares
c- la cantidad de ceros

2- ademas de lo anterior:
e-la suma de los impares
f-la cantidad de 5
g-la cantidad de 7
h- que se muestren los números pares
Hacer funciones y reutilizar funcionalidades


*******************************************************************************/
#include <stdio.h>
#define TAM 10


void esPar(int num);
int listaPares(int listaNum[], int tam,int cantNumAMostrar);


int main()
{
    int listaNumeros[TAM];

    int acumulador;
    int sumatoriaPares=0;
    int sumatoriaImpares=0;

    int cantCeros=0;

   // int sumatoriaPares


    for(int i=0; i<TAM;i++)      //CARGA DE VALORES
    {
        printf("Ingrese un numero entre -100 y 100: ");
        scanf("%d",&listaNumeros[i]);
        while(!(listaNumeros[i]>-101 && listaNumeros[i]<101))
        {
          printf("Reingrese un numero :\n ");
          scanf("%d",&listaNumeros[i]);
        }
    }

    for(int i=0; i<TAM;i++)
    {
        printf("%d-",listaNumeros[i]);
    }


     for(int i=0; i<TAM;i++)      //SUMA PARES
    {
        if(listaNumeros[i] %2==0 )
        {
            acumulador+= listaNumeros[i];
        }
    }

     for(int i=0; i<TAM;i++)      //SUMA PARES
    {
            if(listaNumeros[i]==0)
            {
                cantCeros+=1;   //cant ceros
            }
    }
        else{
             sumatoriaImpares+= listaNumeros[i]; //SUMA IMPARES
        }
        printf("%d-",listaNumeros[i]);
    }

    printf("E - La suma total de los numeros impares es : %d\n",sumatoriaImpares);
  //  printf("F - Los primeros 5 %d\n",;
 //   printf("G - Los primeros 5 %d\n",;
      //printf("Lista de pares :")


    printf("C - La cantidad de total Ceros es : %d\n",cantCeros);

    return 0;
}
e-la suma de los impares
f-la cantidad de 5
g-la cantidad de 7
h- que se muestren los números pares
Hacer funciones y reutilizar funcionalidades

void esPar(int num)
{
    return num %2==0;
}
int listaPares(int listaNum[], int tam,int cantNumAMostrar)
{
    int listaPar[cantNumerosAMostrar];
    for(int i=0; i<tam; i++)
    {
        while(esPar())
        strcpy(listaPar,listaNum)

}
