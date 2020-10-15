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



#endif // MASCOTAS_H_INCLUDED
