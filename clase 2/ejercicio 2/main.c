#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
1)De 5  personas que ingresan al hospital se deben tomar y
validar los siguientes datos.
inicialNombre , temperatura, sexo y edad.T34 a 45-- 20 y 65
a)informar la cantidad de personas de cada sexo.
b)la edad promedio en total
c)la inicial de la mujer con más temperatura(si la hay)
*/

int main()
{
    char inicialNombre;
    float temperatura;
    char sexo;
    int edad;

    int contadorMasculino =0;
    int contadorFemenino =0;
    int acumEdad =0;
    char inicialMaxTemp ;
    float maxTemp;

    for(int i=0; i<5 ;i++)
    {




        printf("Ingrese edad paciente /n");
        scanf( "%d", &edad);
        while(edad < 20 || edad >65){
            printf("Edad invalidad.Reingrese edad: ");
            scanf( "%d", &edad);
        }

        rintf("Ingrese temperatura paciente /n");
        scanf("%.2f",&temperatura);
         while(!(edad >= 34 || edad >= 45)){
            printf("Temperatura invalida.Reingrese edad: ");
            scanf( "%f", &temperatura);
        }

        printf("Ingrese inicial paciente /n");
        fflush(stdin);
        scanf( "%c", &inicialNombre);


         printf("Ingrese sexo paciente /n");
        fflush(stdin);
        scanf( "%c", &sexo);
        sexo = tolower(sexo);//pasa a minuscula
        while(sexo != 'f' && sexo != 'm'){
            printf("Ingrese sexo paciente /n");
            fflush(stdin);
            scanf( "%c", &sexo);


    }


    return 0;
}
