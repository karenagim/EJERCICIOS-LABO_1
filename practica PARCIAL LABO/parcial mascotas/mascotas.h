#ifndef MASCOTAS_H_INCLUDED
#define MASCOTAS_H_INCLUDED

typedef struct{
int id;
char nombre[21];
int idTipo;
int idColor;
int edad;

int isEmpty;
}eMascota;


void mascotas_init(eMascota lista[], int tam_list);
int buscar_EspacioLibre(eMascota lista[], int tam_list);

void mascotas_mostrarUno(eMascota mascota, Tipo tipos[],int tamTipos,Color colores[],int tamCol);
void mascotas_mostrarUnoCampos(eMascota mascota, Tipo tipos[],int tamTipos,Color colores[],int tamCol);

int mascotas_alta(eMascota lista[],int idAutoincremental,int tam, Tipo tipos[], int tamTipos,Color colores[],int tamCol);



#endif // MASCOTAS_H_INCLUDED
