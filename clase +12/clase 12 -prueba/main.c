#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[51];
    char lastName[51];
    float salary;
    int sector;
    int isEmpty;
}Employee;

typedef struct {
    int id;
    char name[51];
}Sector;

float employee_TotalSalarios(Employee lista[],int len);

float employee_SalarioPromedio(Employee lista[],int len);

void mostrarEmpleadoSalarios(Employee lista[],int len);
int employee_cantSuperaSalarioPromedio(Employee lista[],int len);
void mostrarEmpleado(Employee empleado, Sector sectores[], int tamSec);


int main()
{
    float promedio=0;
    float salarioProm;
     Employee empleados[5] =
    {
        {1, "pepe","gim",25.50,1},
        {2, "maria","mendez",20.50,5},
        {3, "lu","franu",35.50,2},
        {4, "karen","gimenez",40.00,1},
        {5, "bianca","alexandria",35,00,1}
    };
     Sector sectores[5] =
    {
        {1, "SISTEMAS"},
        {2, "RRHH"},
        {3, "VENTAS"},
        {4, "COMPRAS"},
        {5, "CONTABLE"}
    };


    promedio=employee_TotalSalarios(empleados, 5);
    salarioProm=employee_SalarioPromedio(empleados, 5);
    printf(" el total es %.2f y el promedio de sueldos %.2f",promedio,salarioProm);
    mostrarEmpleado(empleados[0],sectores,4);
    mostrarEmpleado(empleados[1],sectores,4);
    mostrarEmpleado(empleados[2],sectores,4);
    mostrarEmpleado(empleados[3],sectores,4);
    return 0;
}
/*("\n| %d  | %-40s | %5d | %5d |*/

int sector_PrintName(char descripcion[], int idSec, Sector listaSec[], int lenSec)
{
    int todoOk = -1;
    for(int i=0; i<lenSec; i++)
    {
        if(listaSec[i].id == idSec)
        {
            strcpy(descripcion, listaSec[i].name);
            todoOk = 1;
        }
    }
    return todoOk;
}
void mostrarEmpleado(Employee empleado, Sector sectores[], int tamSec)
{
    char nombreSector[20];

    sector_PrintName(nombreSector,empleado.sector,sectores,tamSec);

    printf("\n| %1d  | %-10s | %-10s | %5.2f | %5d |%-10s |",empleado.id,
                                                       empleado.name,
                                                       empleado.lastName,
                                                       empleado.salary,
                                                   empleado.sector,nombreSector);

}


float employee_TotalSalarios(Employee lista[],int len)
{
    float sumatoria=0;
    if(lista != NULL && len>0)
    {
        for(int i=0; i<len; i++)
        {
            sumatoria+= (float) lista[i].salary;
        }
    }
    return sumatoria;
}

float employee_SalarioPromedio(Employee lista[],int len)
{
    int cantEmpleados=0;
    float salarioTotal = employee_TotalSalarios(lista,len);
    float salarioPromedio=0;

    if(lista!= NULL && len>0)
    {
        for(int i=0; i<len; i++)
        {
            if(lista[i].isEmpty==0)
            {
                cantEmpleados+=1;
            }
        }
        salarioPromedio= (float)salarioTotal/cantEmpleados;
    }
    return salarioPromedio;
}
int employee_cantSuperaSalarioPromedio(Employee lista[],int len)
{
    int cantEmpMaxSueldo =0;
    if( lista != NULL && len >0 )
    {
        for(int i=0; i<len; i++)
        {
            if(lista[i].salary > employee_SalarioPromedio(lista,len))
            {
                cantEmpMaxSueldo+=1;
            }
        }
    }

    return cantEmpMaxSueldo;
}
void mostrarEmpleadoSalarios(Employee lista[],int len)
{
    float salarioPromedio=employee_SalarioPromedio(lista,len);
    printf("TOTAL DE SALARIOS ----> %.2f\n\n",employee_TotalSalarios(lista,len));
    printf("PROMEDIOS DE SALARIOS ----> %.2f\n\n",salarioPromedio);
    printf("CANTIDAD DE EMPLEADOS QUE SUPERAN EL PROMEDIO ----> %d\n\n",employee_cantSuperaSalarioPromedio(lista,len));
}
