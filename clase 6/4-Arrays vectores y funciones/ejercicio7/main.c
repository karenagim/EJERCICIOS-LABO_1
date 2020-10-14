#include <stdio.h>
#include <stdlib.h>
//devuelve la cant de caaracteres dentro de vec
int contarCaracter(char vec[],int tam,char car);

int main()
{
    char letras[6]= {'a','a','f','t','w','h'};
    char caracterABuscar ='a';
    printf("%d\n",contarCaracter(letras,6,caracterABuscar));
    return 0;
}

int contarCaracter(char vec[],int tam,char car)
{
    int cantidad =0;
    for(int i=0; i<tam; i++)
    {
       if(vec[i] == car)
       {
           cantidad++;
       }
    }

    return cantidad;
}
