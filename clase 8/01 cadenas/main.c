#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarCadena (char cad[]);
void copiarCadena (char cadDestino[], char cadenaOrigen[]);
int contarCaracteres (char cad[]);
char miTolower(char x);

/*el vector de caracter puede guardar un caracter
o una cadena de caracteres*/
int main()
{
    char cadena[15] = "Juan";
    char cadena2[15]="JUANito";
    int largo;
    char letra= 'A';

    char cadena3[15]= "Hola";
    char cadena4[14]="Mundo";

    //CONTAR CARACTERES
    //cantidad de elementos hasta el /0;

   /* largo =strlen(cadena);
    largo = contarCaracteres(cadena2);
    printf("%d",largo);*/

    //PASAR A MINUS O MAYUS
   /// strlwr //minus
  ///  strupr //mayus
   /* strlwr(cadena2);
    strupr(cadena2);
    letra=tolower(letra);///lo paso por valor es necesario guardar en una variuable
    printf("%c\n",letra);///paso por referencia
    printf("%s\n",cadena);

    aMinus(cadena2);*/
 //   printf("%s",cadena); manera antigua
    //strcpy(cadenaDestino, cadenaOrigen);
    /*copiarCadena(cadena,cadena2);

    strcpy(cadena, cadena2);*/


    //STRCMP SI LAS CADENAS SON IGUALES DA 0
    //SI NO LA DIF DEL COD ASCII ENTRE UNA Y OTRA

    printf("Prueba de strcmp %s y %s\n",cadena,cadena2);
    printf("%d\n", strcmp(cadena,cadena2));

     //STRICMP LE DA IGUAL LAS MAYUS O MINUS
    //SI NO LA DIF DEL COD ASCII ENTRE UNA Y OTRA
    printf("----------------------------\n");
    printf("-- stricmp IGNORA MAYUS Y MINUS--\n");
    printf("Prueba de stricmp %s y %s\n",cadena,cadena2);
    printf("%d\n", stricmp(cadena,cadena2));

    //STRCAT CONCATENA
     printf("----------------------------\n");
    printf("-- STRCUT CONCATENA CADENAS--\n");
    printf("Prueba de STRCAT %s y %s\n",cadena3,cadena4);
    strcat (cadena3," ");
    strcat (cadena3,cadena4);
    printf("%s\n", cadena3);




    return 0;
}

//usamos un while porque no sabemos de antemano
// cuando mide la cadena
void mostrarCadena (char cad[])
{
    int i=0;
    while( cad[i] != '\0'){

        printf("%c", cad[i]);
        i++;
    }
}

void copiarCadena (char cadDestino[], char cadenaOrigen[])
{
    int i=0;
    while( cadenaOrigen[i] != '\0'){

        cadDestino[i] =cadenaOrigen[i];
        i++;
    }
}


int contarCaracteres (char cad[])
{
    int i=0;
    while( cad[i] != '\0'){
        i++;
    }
    return i;
}

char miTolower(char x)
{
    if( x>=65 && x<=90)
    {
        x+=32;
    }
    return x;
}

void aMinus(char vec[])
{
    int i=0;
     while( vec[i] != '\0')
    {
        vec[i]= miTolower(vec[i]);
    }
}
